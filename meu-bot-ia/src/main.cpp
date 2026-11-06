#include "llama.h"
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << "Uso: " << argv[0] << " <caminho_do_modelo.gguf> [prompt]\n";
        return 1;
    }

    std::string model_path = argv[1];
    std::string prompt = (argc > 2) ? argv[2] : "Olá! Quem é você?";

    llama_backend_init();

    llama_model_params model_params = llama_model_default_params();
    llama_model* model = llama_load_model_from_file(model_path.c_str(), model_params);
    if (!model) {
        std::cerr << "Erro ao carregar o modelo: " << model_path << "\n";
        llama_backend_free();
        return 1;
    }

    const llama_vocab* vocabulary = llama_model_get_vocab(model);

    llama_context_params ctx_params = llama_context_default_params();
    ctx_params.n_ctx = 2048;
    llama_context* ctx = llama_new_context_with_model(model, ctx_params);
    if (!ctx) {
        std::cerr << "Erro ao criar o contexto.\n";
        llama_free_model(model);
        llama_backend_free();
        return 1;
    }

    int n_prompt_tokens = -llama_tokenize(vocabulary, prompt.c_str(), prompt.length(), NULL, 0, true, true);
    std::vector<llama_token> prompt_tokens(n_prompt_tokens);
    if (llama_tokenize(vocabulary, prompt.c_str(), prompt.length(), prompt_tokens.data(), prompt_tokens.size(), true, true) < 0) {
        std::cerr << "Erro ao tokenizar o prompt.\n";
        return 1;
    }

    llama_batch batch = llama_batch_get_one(prompt_tokens.data(), prompt_tokens.size());
    if (llama_decode(ctx, batch) != 0) {
        std::cerr << "Erro na inferência do prompt.\n";
        return 1;
    }

    llama_sampler_chain_params sparams = llama_sampler_chain_default_params();
    llama_sampler* smpl = llama_sampler_chain_init(sparams);
    llama_sampler_chain_add(smpl, llama_sampler_init_temp(0.7f));

    std::cout << "\n--- Resposta da IA ---\n" << prompt;

    int max_tokens = 128;
    for (int i = 0; i < max_tokens; i++) {
        llama_token new_token_id = llama_sampler_sample(smpl, ctx, -1);

        if (llama_vocab_is_eog(vocabulary, new_token_id)) break;

        char buf[256];
        int n = llama_token_to_piece(vocabulary, new_token_id, buf, sizeof(buf), 0, true);
        if (n < 0) break;

        std::cout << std::string(buf, n) << std::flush;

        batch = llama_batch_get_one(&new_token_id, 1);
        if (llama_decode(ctx, batch) != 0) break;
    }

    std::cout << "\n----------------------\n";

    llama_sampler_free(smpl);
    llama_free(ctx);
    llama_free_model(model);
    llama_backend_free();

    return 0;
}
