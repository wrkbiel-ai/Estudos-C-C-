#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string palavra;
    cin >> palavra;
    string letras = "AEIOUaeiou";
    int vogais = 0;
    for (int i = 0; i < palavra.size(); i++)
    {
        cout << palavra[i] << endl;

        if (letras.find(palavra[i]) != string::npos)
        {
            vogais++;
        }
    }
    cout << vogais << endl;
    cout << palavra.size();
}