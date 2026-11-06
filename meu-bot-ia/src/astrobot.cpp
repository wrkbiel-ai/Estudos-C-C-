#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

std::string minusculas(std::string texto) {
    std::transform(texto.begin(), texto.end(), texto.begin(),
                   [](unsigned char caractere) {
                       return static_cast<char>(std::tolower(caractere));
                   });
    return texto;
}

std::string responder(const std::string& mensagem) {
    const std::string texto = minusculas(mensagem);

    if (texto.find("ola") != std::string::npos ||
        texto.find("oi") != std::string::npos) {
        return "Ola! Como posso ajudar?";
    }

    if (texto.find("nome") != std::string::npos) {
        return "Eu sou o Meu Bot IA.";
    }

    if (texto.find("ajuda") != std::string::npos) {
        return "Posso conversar. Digite uma mensagem ou 'sair' para fechar.";
    }

    return "Entendi. Continue a conversa comigo.";
}

int main() {
    std::cout << "Meu Bot IA" << std::endl;
    std::cout << "Digite 'sair' para encerrar." << std::endl;

    std::string mensagem;
    while (true) {
        std::cout << "\nVoce: ";
        if (!std::getline(std::cin, mensagem)) {
            break;
        }

        if (minusculas(mensagem) == "sair") {
            std::cout << "Bot: Ate mais!" << std::endl;
            break;
        }

        std::cout << "Bot: " << responder(mensagem) << std::endl;
    }

    return 0;
}
