#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string palavra;
    cin >> palavra;
    char letra;
    cin >> letra;
    int contador = 0;
    string letras = "AEIOUaeiou";
    int vogais = 0;
    for (int i = 0; i < palavra.size(); i++)
    {
        if (letras.find(palavra[i]) != string::npos)
            vogais++;
    }
    cout << vogais << endl;
    for (int i = 0; i < palavra.size(); i++)
    {
        cout << palavra[i] << endl;
        if (palavra[i] == letra)
        {
            contador++;
        }
    }
    cout << palavra.size() << endl;
    cout << contador << endl;
}