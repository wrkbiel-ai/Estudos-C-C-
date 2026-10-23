#include <iostream>
using namespace std;

int main()
{
    int continuar = 0;
    int quantidade = 0;
    double preco = 0;
    double preco2 = 0;
    double limite = 0;
    double totalgeral = 0;
    do
    {
        cout << "Digite o seu limite para compras: " << endl;
        cin >> limite;

        cout << "Digite o primeiro preco: " << endl;
        cin >> preco;

        cout << "Digite o segundo preco: " << endl;
        cin >> preco2;

        double preco3 = preco + preco2;
        quantidade = quantidade + 1;
        totalgeral = totalgeral + preco3;
        cout << "Total da compra: " << preco3 << endl;
        
        if (preco3 > limite)
        {
            double faltou = preco3 - limite;
            cout << "Voce ultrapassou o limite em: " << faltou << endl;
        }
        else if (limite == preco3)
        {
            cout << "Voce usou exatamente todo o limite!" << endl;
        }
        else
        {
            double sobra = limite - preco3;
            cout << "Ainda restam: " << sobra << endl;
        }

        cout << "Deseja fazer outra simulacao? 1 = Sim, 0 = Nao" << endl;
        cin >> continuar;

    } while (continuar == 1);
    double media = totalgeral / 2;
    cout << "Voce realizou " << quantidade << " simulacoes." << endl;
    cout << "O seu gasto total foi equivalente a: " << totalgeral << endl;
    cout << "Obrigado! Volte sempre!" << endl;
    cout << "A sua media de gastos com as compras foi: " << media << endl;
    return 0;
}