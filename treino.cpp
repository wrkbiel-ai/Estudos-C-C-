#include <bits/stdc++.h>
using namespace std;
int main()
{
    int positivos = 0;
    int negativos = 0;
    int zeros = 0;
    int n;
    for (int i = 1; i < 6; i++)
    {
        cout << "Digite o numero: " << i << endl;
        cin >> n;
        if (n > 0)
        {

            positivos++;
        }
        else if (n < 0)
        {

            negativos++;
        }

        else
        {

            zeros++;
        }
    }
    cout << "=== RELATORIO ===" << endl;
    cout << "Numeros positivos: " << positivos << endl;
    cout << "Numeros negativos: " << negativos << endl;
    cout << "Numeros zero: " << zeros << endl;
    return 0;
}