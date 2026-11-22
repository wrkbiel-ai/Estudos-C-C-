#include <bits/stdc++.h>
using namespace std;

int main()
{
    int opcao;
    int repetir;
    int escolha = 0;
    int note;
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
            cout << "O seu atual saldo: " << saldo << endl;
        }
        else if (opcao == 3)
        {
            cout << "Digite o seu deposito: " << endl;
            cin >> deposito;
            saldo += deposito;
        }
        else if (opcao == 4)
        {
            cout << "Oque deseja comprar?" << endl;
            cout << " 1- Fast food: 45$ " << endl;
            cout << " 2- Sair com amigos: 250$ " << endl;
            cout << " 3- Compras do mes: 850$ " << endl;
            cout << " 4- Celular: Modelos a seguir. " << endl;
            cout << " 5- Notebook: Modelos a seguir. " << endl;
            cin >> escolha;

            switch (escolha)
            {
            case 1:
                if (saldo < 45)
                {
                    cout << "Saldo insuficiente." << endl;
                    cout << "Adicione mais saldo a sua conta." << endl;
                }
                else
                {
                    cout << "Pedido realizado com sucesso! Seu lanche está a caminho." << endl;
                    saldo -= 45;
                    totalgasto += 45;
                }
                break;

            case 2:
                if (saldo < 250)
                {
                    cout << "Saldo insuficiente." << endl;
                    cout << "Adicione mais saldo a sua conta." << endl;
                }
                else
                {
                    cout << "Aproveite o role com o teus amigos!" << endl;
                    saldo -= 250;
                    totalgasto += 250;
                }
                break;

            case 3:
                if (saldo < 850)
                {
                    cout << "Saldo insuficiente para a compra do mes, vai ficar com fome" << endl;
                    cout << "Adicione mais saldo a sua conta." << endl;
                }
                else
                {
                    cout << "Compra do mes realizada!" << endl;
                    saldo -= 850;
                    totalgasto += 850;
                }
                break;

            case 4:
                cout << "1- Lenovo LOQ - 5500$" << endl;
                cout << "2- Acer Nitro V - 5800$" << endl;
                cout << "3- Asus TUF Gaming - 6100$" << endl;
                cout << "4- Dell G15 - 5500$" << endl;
                cout << "Escolha a sua opcao" << endl;
                cin >> note;

                switch (note)
                {
                case 1:
                    if (saldo < 5500)
                    {
                        cout << "Saldo insuficiente para comprar o Lenovo Loq" << endl;
                        cout << "Adicione mais saldo a sua conta." << endl;
                    }
                    else
                    {
                        cout << "Compra do seu lenovo loq realizada com sucesso!" << endl;
                        cout << "Previsão de chegada: 20 dias" << endl;
                        saldo -= 5500;
                        totalgasto += 5500;
                    }
                    break;

                case 2:
                    if (saldo < 5800)
                    {
                        cout << "Saldo insuficiente para comprar o Acer Nitro V" << endl;
                        cout << "Adicione mais saldo a sua conta." << endl;
                    }
                    else
                    {
                        cout << "Compra do seu Acer Nitro V realizada com sucesso!" << endl;
                        cout << "Previsão de chegada: 20 dias" << endl;
                        saldo -= 5800;
                        totalgasto += 5800;
                    }
                    break;

                case 3:
                    if (saldo < 6100)
                    {
                        cout << "Saldo insuficiente para comprar o Asus TUF Gaming" << endl;
                        cout << "Adicione mais saldo a sua conta." << endl;
                    }
                    else
                    {
                        cout << "Compra do seu Asus TUF Gaming realizada com sucesso!" << endl;
                        cout << "Previsão de chegada: 20 dias" << endl;
                        saldo -= 6100;
                        totalgasto += 6100;
                    }
                    break;

                case 4:
                    if (saldo < 5500)
                    {
                        cout << "Saldo insuficiente para comprar o Dell G15" << endl;
                        cout << "Adicione mais saldo a sua conta." << endl;
                    }
                    else
                    {
                        cout << "Compra do seu Dell G15 realizada com sucesso!" << endl;
                        cout << "Previsão de chegada: 20 dias" << endl;
                        saldo -= 5500;
                        totalgasto += 5500;
                    }
                    break;
                }
                break;
            }

            cout << "Deseja repetir o dashboard financeiro? 1- Sim | 0- Não" << endl;
            cin >> repetir;
            if (repetir == 0)
            {
                opcao = 0;
            }
        }

    } while (opcao != 0);

    return 0;
}