#include <bits/stdc++.h>
using namespace std;
int somar(int a, int b)
{

    return a + b;
}
int somar (int c, int d, int e) {

return c + d + e;
}
double somar (double x, double y, double z) {
return x + y + z;

}
int dobro(int n1)
{

    return n1 * 2;
}
int calcular (int n2, int n3) {

return n2 * n3;
}
int calcular (int n2, int n3, int n4) {

<<<<<<< HEAD
return n2 + n3 + n4;
}
double calcular (double n2, double n3) {

return n2 / n3;
}
int quadrado(int qd)
{

    return qd * qd;
}
void mostrarDadosdb(int numero)
{

    cout << "O dobro do seu numero e: " << dobro(numero) << endl;
}

void mostrarDadoqd(int n3)
{
    cout << "Seu numero ao quadrado eh: " << quadrado(n3) << endl;
}
int ehpar(int a)
{

    if (a % 2 == 0)
    {

        return 1;
    }

    else
    {

        return 0;
    }
}

int classificar(int n2)
{
    if (n2 > 0)
    {
        return 1;
    }

    else if (n2 == 0)
    {

        return 0;
    }

    else
    {
        return -1;
    }
}
void saudacao(string nome, int idade)
{
    cout << "Oi!" << nome << endl;
    cout << "Voce tem: " << idade << " anos." << endl;
}

int main()
{
    
    int par;

    par = ehpar(3);

    if (par == 1)
    {

        cout << "Seu numero eh par!";
    }

    else
    {

        cout << "Seu numero eh impar";
    }
        
    
    int num;
    num = classificar (3);

    if (num == 1) {

    cout << "Seu numero e maior que zero";
    }

    else if (num == 0) {

    cout << "Seu numero e igual que zero";

    }
    else {

    cout << "Seu numero e menor que zero";

    }
    
    mostrarDadosdb(6);
    mostrarDadoqd(4);
    

    cout << somar(5, 10) << endl;
    cout << somar(5, 10, 15) << endl;
    cout << somar(2.50, 5.50, 7.50) << endl;
    cout << calcular(5, 3) << endl; 
    cout << calcular(5, 10, 15) << endl;
    cout << calcular(10.00, 2.00) << endl;
    return 0;
}
