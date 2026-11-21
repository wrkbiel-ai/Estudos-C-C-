#include <iostream>
#include <string>
using namespace std;
int main()
{
    int opcao;
    int repetir;
    double saldo = 0;
    double gasto = 0;
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
        cout << "Ver gastos";
        cout << "0- Sair do programa" << endl;
        cin >> opcao;
        if (opcao == 1)
        {
            cout << "=== Resumo Financeiro ===" << endl; 
            cout << "O seu saldo atual: " << saldo <<endl;
            cout << "O seu gasto atual: " << gasto << endl;
        }

        else if(opcao == 2) {
            cout << "O seu atual saldo: " << endl << endl;
        }
        else if (opcao == 3) {
            cout << "Digite o seu deposito: " << endl;
            cin >> deposito;
        }

        else if (opcao == 4) {
            cout << "Oque deseja comprar?" << endl;
            cout << " 1- Fast food: 45$ " << endl;
            cout << " 2- Sair com amigos: 250$ " << endl;
            cout << " 3- Compras do mes: 850$ " << endl;
            cout << " 4- Celular: 2500$ " << endl;
            cout << " 5- Notebook: 4500$ " << endl;
            cout << "Oque deseja comprar?" << endl; 
            cin >> escolha;


        }
       if (escolha == 1 && saldo < 45) {


       }
        

        cout << "Deseja repetir o dashboard financeiro? 1- Sim | 0- Não" << endl;
        cin >> repetir;

    } while (repetir != 1);

    return 0;
}