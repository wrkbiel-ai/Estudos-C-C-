#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int numeros[5];
    for (int i = 0; i <= 4; i++)
    {
        cin >> numeros[i];
    }
    sort(numeros, numeros + 5);
    for (int j = 0; j <= 4; j++)
    {
        cout << numeros[j];
    }
}
