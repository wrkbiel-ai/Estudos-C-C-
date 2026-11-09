#include <bits/stdc++.h>
using namespace std;
void dobrarptr(int *p)
{

    *p = *p * 3;
}
void atualizar(int *p1, int *p2)
{

    *p1 = 15;
    *p2 = 45;
}
void multiplicar(int *ptro)
{

    *ptro = *ptro * 5;
}
void operacoes(int *p1, int *p2, int *p3)
{

    *p1 = *p1 * 2;
    *p2 = *p2 + 10;
    *p3 = *p3 / 4;
}
void dividir(int *pr)
{

    *pr = *pr / 2;
}
void trocarvalores(int *ptr1, int *ptr2)
{

    *ptr1 = 50;
    *ptr2 = 10;
}
void aumentar (int *p){ 
*p = *p + 20; 
*p = *p * 2; 



}

void desconto(int *p) {
*p = *p - 15;
*p = *p /2 ;

}
void modificar (int *p1, int *p2) {
*p1 = *p1 +10;
*p2 = *p2 * 3;
*p2 = *p2 + *p1;

}
int main()
{
    /*
    int num = 10;
    int num2 = 10;
    dobrarptr(&num);
    dobrarptr(&num2);
    cout << num;
    cout << num2;
    int a = 20;
    int b = 10;
    int *p = &a;
    int *p1 = p;
    *p1 = 50;

    int dinheiro = 100;
    int *ptr = &dinheiro;
    *ptr = *ptr + 50;
    *ptr = *ptr -30;
    cout << *ptr;

    int a = 5;
    int b = 3;
    int c = 10;
    int d = 20;
    int num1 = 20;
    int num2 = 30;
    int num3 = 80;
    int nume1 = 10;
    int nume2 = 50;

    atualizar(&a, &b);
    multiplicar(&c);
    dividir(&d);
    trocarvalores(&nume1, &nume2);
    operacoes(&num1, &num2, &num3);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << nume1 << endl;
    cout << nume2 << endl;
    */
/*
    int idade = 22;
    int *ptr = &idade;
    *ptr = *ptr + 8;
    cout << idade << endl;

    int numero = 15;
    int *ptro = &numero;
    *ptro = *ptro + 5;
    *ptro = *ptro * 3;
    *ptro = *ptro - 10;
    cout << *ptro << endl;
    cout << ptro;
     
    int numero1 = 10;
    int numero2 = 15;
    int *ptro0 = &numero1;
    int *ptro1 = &numero2;
    *ptro0 = *ptro0 + *ptro1;
    *ptro1 = *ptro1 * 2;
    cout << *ptro0 << endl;
    cout << *ptro1 << endl;
    

    int dinheiro = 50;
    aumentar(&dinheiro);
    cout << dinheiro;
    

    int preco = 100;
    desconto(&preco);
    cout << preco;
    */
   int a = 20;
   int b = 5;
   modificar(&a, &b);
   cout << a << endl;
   cout << b << endl;
     return 0;
}