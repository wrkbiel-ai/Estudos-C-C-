#include <iostream>
using namespace std;
int main()
{
    int secreto = 5;
    int palpite = 0;
    int tentativas = 0;
    int continuar = 0;
    do
    {
        cout << "Jogo da Advinhacao!" << endl;
        cout << "Digite o seu palpite: " << endl;
        cin >> palpite;
        tentativas = tentativas + 1;
        if (palpite > secreto)
        {
            cout << "Seu palpite e maior que o numero secreto!" << endl;
            cout << "Tente novamente!" << endl;
        }

        else if (palpite < secreto)
        {

            cout << "Seu palpite e menor que o numero secreto" << endl;
            cout << "Tente novamente!" << endl;
        }

        else if (tentativas > 3)
        {

            cout << "Voce usou todas as tentativas disponiveis, fim de jogo" << endl;
            
        }
        else
        {

            cout << "Acertou!" << endl;
            cout << "Voce precisou de: " << tentativas << " tentativas para acertar!" << endl;
        }

        cout << "Deseja continuar? 1- Sim 0- Nao" << endl;
        cin >> continuar;

    } while (continuar == 1);
    {
        cout << "Obrigado por Jogar nosso jogo!" << endl;
    }
    return 0;
}