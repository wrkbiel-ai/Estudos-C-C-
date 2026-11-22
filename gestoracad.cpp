#include <bits/stdc++.h>
using namespace std;
int main()
{
    int opcao;
    int repetir;
    double saldo = 0;
    double totalgasto = 0;
    double deposito = 0;
    deposito = saldo;
    int escolha;
    cout << "=== CONTROLE FINANCEIRO ===" << endl;
    cout << "Digite o seu saldo: " << endl;
    cin >> saldo;
    do
    {
        cout << "\n Registro de Saldo" << endl;
        cout << "1- Ver resumo financeiro" << endl;
        cout << "2- Ver saldo" << endl;
        cout << "3- adicionar saldo" << endl;
        cout << "4- Comprar" << endl;
        cout << "Ver gastos" << endl;
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
        }

        else if (opcao == 4)
        {
            cout << "Oque deseja comprar?" << endl;
            cout << " 1- Fast food: 45$ " << endl;
            cout << " 2- Sair com amigos: 250$ " << endl;
            cout << " 3- Compras do mes: 850$ " << endl;
            cout << " 4- Celular: Modelos a seguir. " << endl;
            cout << " 5- Notebook: Modelos a seguir. " << endl;
            cout << "Oque deseja comprar?" << endl;
            cin >> escolha;
        }
        switch (escolha)
        {
        case 1:
            if (saldo < 45)
            {
                cout << "Saldo insuficiente." << endl;
                cout << "Saldo insuficiente." << endl;
                cout << "Adicione mais saldo a sua conta." << endl;
                cout << "Adicione mais saldo a sua conta." << endl;
                cout << "Saldo insuficiente." << endl;
            }
            else if (saldo >= 45)
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
            else if (saldo >= 250)
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
            else if (saldo >= 850)
            {

                cout << "Compra do mes realizada!" << endl;
            }
            break;
        case 4:
            cout << "1- Lenovo LOQ - 5500$" << endl;
            cout << "2- Acer Nitro V - 5800$" << endl;
            cout << "3- Asus TUF Gaming - 6100$" << endl;
            cout << "4- Dell G15 - 5500$" << endl;
            int note;
            cout << "Escolha a sua opcao" << endl;
            cin >> note;
            switch (note)
            {
            case 1:
                if (saldo < 5500)
                {
                    cout << "Saldo insuficiente para comprar o Lenovo Loq" << endl;
                    cout << "Saldo insuficiente para comprar o Lenovo Loq" << endl;
                    cout << "Saldo insuficiente para comprar o Lenovo Loq" << endl;
                    cout << "Adicione mais saldo a sua conta." << endl;
                    cout << "Adicione mais saldo a sua conta." << endl;
                    cout << "Adicione mais saldo a sua conta." << endl;
                }
                else if (saldo >= 5500)
                {

                    cout << "Compra realizada com sucesso, seu Lenovo LOQ está a caminho!" << endl;
                    cout << "Compra realizada com sucesso, seu Lenovo LOQ está a caminho!" << endl;
                    cout << "Compra realizada com sucesso, seu Lenovo LOQ está a caminho!" << endl;
                    cout << "Prazo de entrega: 20 Dias" << endl;
                    cout << "Prazo de entrega: 20 Dias" << endl;
                    cout << "Prazo de entrega: 20 Dias" << endl;
                }
                break;
                
                case 2:
                if (saldo < 5800)
                {
                    
                    cout << "Saldo insuficiente para comprar o Acer Nitro V." << endl;
                    cout << "Adicione mais saldo a sua conta." << endl;
                }
                else if(saldo >=5800) {
                    
                    cout << "Compra realizada com sucesso, seu Acer Nitro V está a caminho!" << endl;
                    cout << "Prazo de entrega: 20 Dias" << endl;


                }

                break;
            }
        }

        cout << "Deseja repetir o dashboard financeiro? 1- Sim | 0- Não" << endl;
        cin >> repetir;

    } while (repetir != 0);

    return 0;
}