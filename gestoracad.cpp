#include <iostream>
#include <string>
using namespace std;
int main()
{
    int opcao;
    int repetir;
    double saldo;
    double gasto;
    double totalgasto;
    cout << "=== CONTROLE FINANCEIRO ===" << endl;
    cout << "Digite o seu saldo: " << endl;
    cin >> saldo;
    do
    {
        cout << "\n Registro de Saldo" << endl;
        cout << "1- Ver resumo financeiro" << endl;
        cout << "2- Ver saldo" << endl;
        cout << "3- adicionar saldo" << endl;
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
            cout << "O seu atual saldo: " << endl;
        }
        else if (opcao == 3) {
            cout << "Digite o seu deposito: " << endl;
            cin >> saldo;
        }

        cout << "Deseja repetir o dashboard financeiro? 1- Sim | 0- Não" << endl;
        cin >> opcao;

    } while (repetir = !1);

    return 0;
}