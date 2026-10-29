#include <bits/stdc++.h>
using namespace std;
int main()
{
    int opcao;
    double num1;
    double num2;
    int repetir;
    do
    {
        cout << "=== CALCULADORA ===" << endl;
        cout << "1- Somar" << endl;
        cout << "2- Subtrair" << endl;
        cout << "3- Multiplicar" << endl;
        cout << "4- Divisao" << endl;
        cout << "=== Selecione a opreacao que voce deseja fazer: ===" << endl;
        cin >> opcao;
        cout << "Digite o valor do primeiro numero" << endl;
        cin >> num1;
        cout << "Digite o valor do segundo numero" << endl;
        cin >> num2;
        switch (opcao)
        {

        case 1:
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;

        case 2:

            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        case 3:
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

        case 4:
            if (num2 != 0)
            {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            else
            {

                cout << "Impossivel dividir por 0!" << endl;
            }
            break;

        default:
            cout << "Opcao invalida!" << endl;
            break;
        }
            cout << "Deseja utilizar a calculadora novamente? 1- Sim | 0 - Nao" << endl;
            cin >> repetir;
            
        
    } while (repetir !=0 );
    cout << "Obrigado por usar nossa calculadora!";
    return 0;
}