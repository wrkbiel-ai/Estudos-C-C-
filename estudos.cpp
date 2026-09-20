#include <iostream>
#include <string>

using namespace std;

struct Produto {
    string nome;
    double preco;
    int codvef;
    string fornecedor;
};

int main() {

    int opcao;
    Produto p1;

    do {

        cout << "\nCadastro de produtos!" << endl;
        cout << "O que deseja fazer?" << endl;
        cout << "1 - Cadastrar produto" << endl;
        cout << "2 - Sair" << endl;
        cout << "Opcao: ";

        cin >> opcao;

        if (opcao == 1) {

            cout << "Digite o nome do produto: ";

            getline(cin >> ws, p1.nome);

            cout << "Digite o preco do produto: ";
            cin >> p1.preco;

            cout << "Digite a data de validade: ";
            cin >> p1.codvef;

            cout << "Digite o nome do fornecedor: ";
            getline(cin >> ws, p1.fornecedor);

            cout << "\nProduto cadastrado com sucesso!" << endl;
            cout << "Nome: " << p1.nome << endl;
            cout << "Preco: R$ " << p1.preco << endl;
            cout << "Codigo de verificacao: " << p1.codvef << endl;
            cout << "Fornecedor: " << p1.fornecedor << endl;
        }

    } while (opcao != 2);

    cout << "Obrigado por usar o software!" << endl;

    return 0;
}