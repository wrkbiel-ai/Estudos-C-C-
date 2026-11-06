#if __has_include("llama.h")
#include "llama.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool responder(llama_model* model, const llama_vocab* vocabulary,
               const string& prompt) {
    llama_context_params context_params = llama_context_default_params();
    context_params.n_ctx = 2048;
    llama_context* context = llama_new_context_with_model(model, context_params);
    if (!context) {
        cerr << "Erro ao criar o contexto.\n";
        return false;
    }

    int token_count = -llama_tokenize(
        vocabulary, prompt.c_str(), prompt.length(), nullptr, 0, true, true);
    vector<llama_token> prompt_tokens(token_count);

    if (llama_tokenize(vocabulary, prompt.c_str(), prompt.length(),
                       prompt_tokens.data(), prompt_tokens.size(), true, true) < 0) {
        cerr << "Erro ao tokenizar o prompt.\n";
        llama_free(context);
        return false;
    }

    llama_batch batch = llama_batch_get_one(prompt_tokens.data(), prompt_tokens.size());
    if (llama_decode(context, batch) != 0) {
        cerr << "Erro na inferencia do prompt.\n";
        llama_free(context);
        return false;
    }

    llama_sampler_chain_params sampler_params = llama_sampler_chain_default_params();
    llama_sampler* sampler = llama_sampler_chain_init(sampler_params);
    llama_sampler_chain_add(sampler, llama_sampler_init_temp(0.7f));

    cout << "Bot: ";
    constexpr int max_tokens = 128;
    for (int i = 0; i < max_tokens; i++) {
        llama_token new_token_id = llama_sampler_sample(sampler, context, -1);

        if (llama_vocab_is_eog(vocabulary, new_token_id)) {
            break;
        }

        char buffer[256];
        int token_size = llama_token_to_piece(
            vocabulary, new_token_id, buffer, sizeof(buffer), 0, true);
        if (token_size < 0) {
            break;
        }

        cout << string(buffer, token_size) << flush;

        batch = llama_batch_get_one(&new_token_id, 1);
        if (llama_decode(context, batch) != 0) {
            break;
        }
    }

    cout << "\n";
    llama_sampler_free(sampler);
    llama_free(context);
    return true;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        cout << "Uso: " << argv[0] << " <caminho_do_modelo.gguf>\n";
        return 1;
    }

    string model_path = argv[1];
    llama_backend_init();

    llama_model_params model_params = llama_model_default_params();
    llama_model* model = llama_load_model_from_file(model_path.c_str(), model_params);
    if (!model) {
        cerr << "Erro ao carregar o modelo: " << model_path << "\n";
        llama_backend_free();
        return 1;
    }

    const llama_vocab* vocabulary = llama_model_get_vocab(model);

    cout << "Meu Bot IA\n";
    cout << "Digite sua mensagem. Use 'sair' para encerrar.\n\n";

    string prompt;
    while (true) {
        cout << "Voce: ";
        if (!getline(cin, prompt)) {
            break;
        }

        if (prompt == "sair") {
            cout << "Bot: Ate mais!\n";
            break;
        }

        if (prompt.empty()) {
            continue;
        }

        responder(model, vocabulary, prompt);
        cout << "\n";
    }

    llama_free_model(model);
    llama_backend_free();
    return 0;
}

#else

#include <cstdlib>
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
    char executable_buffer[MAX_PATH];
    GetModuleFileNameA(nullptr, executable_buffer, MAX_PATH);
    string executable_path = executable_buffer;
    size_t output_end = executable_path.find_last_of("\\/");
    string output_path = executable_path.substr(0, output_end);
    size_t project_end = output_path.find_last_of("\\/");
    string project_path = output_path.substr(0, project_end);
    string bot_path = project_path + "\\build\\Release\\meu_bot.exe";
    string command = "cmd /C \"\"" + bot_path + "\"";

    if (argc == 1) {
        command += " \"" + project_path + "\\model.gguf\"";
    } else {
        for (int i = 1; i < argc; i++) {
            command += " \"" + string(argv[i]) + "\"";
        }
    }

    command += "\"";

    cout << "Iniciando o bot pelo CMake...\n";
    return system(command.c_str());
}

#endif
