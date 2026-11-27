#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    int contador;
   cout << "=== CONTAGEM REGRESSIVA ===" << endl;
   cout << "Digite o numero que voce deseja que seja contado ate zero: " << endl;
   cin >> contador;
   while (contador >=1 ) {

   cout << contador << endl;
   contador--;
   }
   int tabuada;
   cout << "Digite o numero que vocÇe deseja ver a tabuada:" << endl;
   cin >> tabuada;
for (int i = 1; i <=10; i++) {
       cout << tabuada << " x " << i << " = " << tabuada * i << endl;

}

   int numero;
   int soma = 0;
   for (int i = 1; i <= 5; i++)
   {
       cout << "Digite o numero: " << i << endl;
       cin >> numero;
       soma += numero ;
   }
   cout << "A soma de todos os numeros e igual a: " << soma << endl;
   int n1;
   int positivos = 0;
   cout << "Quantos numeros são positivos?" << endl;
   for (int i = 1; i <= 10; i++) {
       cout << "Digite o numero " << i << endl;
       cin >> n1;
       if (n1 > 0) {
         positivos++;

       }

       }
       cout << "Total de numeros positivos: " << positivos << endl;
      int sum = 0;
      int num = 0;
      cout << "Soma de todos os numeros" << endl;
      for (int i = 1; i <=5; i++) {
       cout << "Digite o numero " << i << endl;
       cin >> num;
       sum = num += sum;

      }
      cout << "A soma de todos os numeros e igual a: " << sum << endl;

     cout << "Media da notas da turma!" << endl;
     float med;
     float nota;
     for (int i = 1; i <=5; i++) {
         cout << "Digite a nota do aluno " << i << endl;
         cin >> nota;
         nota = med += nota;
       }
       med = nota / 5;
       cout << "A media da turma e igual a: " << med <<  endl;

      int n2;
      int par = 0;
      cout << "Quantos numeros são pares?" << endl;
      for (int i = 1; i <= 10; i++) {
       cout << "Digite um numero " << i << endl;
       cin >> n2;
       if (n2 % 2 == 0)  {
        par++;

        }
        }
        cout << "Essa foi a quantidade de numeros pares: " << par << endl;
        */
    int primos = 0;
    int n;
    cout << "Numeros primos" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Digite um numero " << i << endl;
        cin >> n;
        int divisores = 0;
        for (int j = 1; j <= n; j++)
        {
            if (n % i == 0)
            {
                divisores++;
            }
            if (divisores == 2)
            {
                primos++;
            }
        }
    }
    cout << "A quantidade de numeros primos e: " << primos << endl;
    return 0;
}