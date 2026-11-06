#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Produto {
    string nome;
    double preco;
};

int main() {

    int opcao;

    vector<Produto> produtos;

    do {

        cout << "\nCadastro de produtos!" << endl;
        cout << "1 - Cadastrar produto" << endl;
        cout << "2 - Listar produtos" << endl;
        cout << "3- Sair";
        cout << "Opcao: ";

        cin >> opcao;

        if (opcao == 1) {

            Produto novoProduto;

            cout << "Digite o nome do produto: ";
            getline(cin >> ws, novoProduto.nome);

            cout << "Digite o preco: ";
            cin >> novoProduto.preco;

            produtos.push_back(novoProduto);

            cout << "Produto cadastrado!" << endl;
        }
        else if (opcao == 2) {

      for (int i=0; i < produtos.size(); i++) {
        cout << "\nProduto " << i + 1 << endl;
                cout << "Nome: " << produtos[i].nome << endl;
                cout << "Preco: R$ " << produtos[i].preco << endl;

      }
    }

    } while (opcao != 3);

    cout << "Programa encerrado!" << endl;

    return 0;
}