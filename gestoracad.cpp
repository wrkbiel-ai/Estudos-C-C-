#include <bits/stdc++.h>
using namespace std;

void comprar(double &saldo, double &totalgasto, double preco, const string &item, bool entrega = false)
{
    if (saldo < preco)
    {
        cout << "Saldo insuficiente para comprar " << item << "." << endl;
        cout << "Adicione mais saldo a sua conta." << endl;
        return;
    }

    saldo -= preco;
    totalgasto += preco;
    cout << "Compra de " << item << " realizada com sucesso!" << endl;

    if (entrega)
        cout << "Previsão de chegada: 20 dias" << endl;
}

int main()
{
    int opcao = -1;
    int escolha = 0;
    int modelo = 0;
    int repetir = 1;
    double saldo = 0;
    double totalgasto = 0;
    double deposito = 0;

    cout << "=== CONTROLE FINANCEIRO ===" << endl;
    cout << "Digite o seu saldo: " << endl;
    cin >> saldo;

    do
    {
        cout << "\n Registro de Saldo" << endl;
        cout << "1- Ver resumo financeiro" << endl;
        cout << "2- Ver saldo" << endl;
        cout << "3- Adicionar saldo" << endl;
        cout << "4- Comprar" << endl;
        cout << "0- Sair do programa" << endl;
        cin >> opcao;

        if (opcao == 1)
        {
            cout << "=== Resumo Financeiro ===" << endl;
            cout << "O seu saldo atual: " << saldo << endl;
            cout << "O seu gasto atual: " << totalgasto << endl;
        }
        else if (opcao == 2)
        {
            cout << "O seu saldo atual: " << saldo << endl;
        }
        else if (opcao == 3)
        {
            cout << "Digite o seu depósito: " << endl;
            cin >> deposito;
            saldo += deposito;
        }
        else if (opcao == 4)
        {
            cout << "O que deseja comprar?" << endl;
            cout << " 1- Fast food: 45$" << endl;
            cout << " 2- Sair com amigos: 250$" << endl;
            cout << " 3- Compras do mês: 850$" << endl;
            cout << " 4- Celular" << endl;
            cout << " 5- Notebook" << endl;
            cin >> escolha;

            switch (escolha)
            {
            case 1:
                comprar(saldo, totalgasto, 45, "o fast food");
                break;

            case 2:
                comprar(saldo, totalgasto, 250, "o rolê com os amigos");
                break;

            case 3:
                comprar(saldo, totalgasto, 850, "as compras do mês");
                break;

            case 4:
                cout << "1- Poco X7 Pro - 2000$" << endl;
                cout << "2- Oppo Reno Pro - 2000$" << endl;
                cout << "3- Samsung S26 - 5000$" << endl;
                cout << "4- iPhone 17 Pro Max - 6000$" << endl;
                cout << "Escolha a sua opção: " << endl;
                cin >> modelo;

                switch (modelo)
                {
                case 1:
                    comprar(saldo, totalgasto, 2000, "o Poco X7 Pro");
                    break;
                case 2:
                    comprar(saldo, totalgasto, 2000, "o Oppo Reno Pro");
                    break;
                case 3:
                    comprar(saldo, totalgasto, 5000, "o Samsung S26");
                    break;
                case 4:
                    comprar(saldo, totalgasto, 6000, "o iPhone 17 Pro Max");
                    break;
                default:
                    cout << "Opção inválida." << endl;
                }
                break;

            case 5:
                cout << "1- Lenovo LOQ - 5500$" << endl;
                cout << "2- Acer Nitro V - 5800$" << endl;
                cout << "3- Asus TUF Gaming - 6100$" << endl;
                cout << "4- Dell G15 - 5500$" << endl;
                cout << "Escolha a sua opção: " << endl;
                cin >> modelo;

                switch (modelo)
                {
                case 1:
                    comprar(saldo, totalgasto, 5500, "o Lenovo LOQ", true);
                    break;
                case 2:
                    comprar(saldo, totalgasto, 5800, "o Acer Nitro V", true);
                    break;
                case 3:
                    comprar(saldo, totalgasto, 6100, "o Asus TUF Gaming", true);
                    break;
                case 4:
                    comprar(saldo, totalgasto, 5500, "o Dell G15", true);
                    break;
                default:
                    cout << "Opção inválida." << endl;
                }
                break;

            default:
                cout << "Opção inválida." << endl;
            }

            if (escolha >= 1 && escolha <= 5)
            {
                cout << "Deseja repetir o dashboard financeiro? 1- Sim | 0- Não" << endl;
                cin >> repetir;
                if (repetir == 0)
                    opcao = 0;
            }
        }

    } while (opcao != 0);

    return 0;
}