#include <bits/stdc++.h>
using namespace std;
void dobrarptr(int *p)
{

    *p = *p * 3;
}
void atualizar (int *p1, int *p2) {

*p1 = 15;
*p2 = 45;

}
void multiplicar(int *ptro) {

*ptro = *ptro * 5;

}
void operacoes(int *p1, int *p2, int *p3) {

*p1 = *p1 * 2;
*p2 = *p2 + 10;
*p3 = *p3 / 4;

}
void dividir(int *pr) {

*pr = *pr / 2;

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
 */
    int a = 5;
    int b = 3;
    int c = 10;
    int d = 20;
    int num1 = 20;
    int num2 = 30;
    int num3 = 80;
    atualizar(&a, &b);
    multiplicar(&c);
    dividir(&d);
    operacoes(&num1, &num2, &num3);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    return 0;
}