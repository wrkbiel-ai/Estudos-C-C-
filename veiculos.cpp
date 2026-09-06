#include <iostream>
#include <string>
using namespace std;

struct Carro
{
    string marca;
    string modelo;
    int ano;
    float preco;
    bool ligado = false;
};

struct Moto 
{
string marca;
string modelo;
int ano;
float preco;
int cilindradas;
};

void buzinar(const Carro& c)
{
    cout << "O " << c.marca << " " << c.modelo << " esta buzinando!" << endl;
}

void ligar(Carro& c)
{
    if (c.ligado)
        cout << "O " << c.marca << " " << c.modelo << " ja esta ligado!" << endl;
    else
    {
        c.ligado = true;
        cout << "O " << c.marca << " " << c.modelo << " foi ligado!" << endl;
    }
}

void desligar(Carro& c)
{
    if (!c.ligado)
        cout << "O " << c.marca << " " << c.modelo << " ja esta desligado!" << endl;
    else
    {
        c.ligado = false;
        cout << "O " << c.marca << " " << c.modelo << " foi desligado!" << endl;
    }
}

void exibirDados(const Carro& c)
{
    cout << "\nMarca: " << c.marca
         << "\nModelo: " << c.modelo
         << "\nAno: " << c.ano
         << "\nPreco: R$" << c.preco
         << "\nStatus: " << (c.ligado ? "Ligado" : "Desligado") << "\n" << endl;
}
void acelerar(Moto m)
{

cout << "A " << m.modelo << "Esta acelerando" << endl;

}
void frear(Moto m)
{
    cout << "A" << m.modelo << "Esta freando" << endl;
}
void exibirDados(const Moto& m)
{
    cout << "\nMarca: " << m.marca
         << "\nModelo: " << m.modelo
         << "\nAno: " << m.ano
         << "\nPreco: R$" << m.preco
         << "\nCilindradas: " << m.cilindradas << "\n" << endl;
}
int main()
{
    Carro meuCarro;
    meuCarro.marca = "Fiat";
    meuCarro.modelo = "Fastback";
    meuCarro.ano = 2026;
    meuCarro.preco = 150000.00f;

    Moto minhamoto;
    minhamoto.modelo = "Mt07";
    minhamoto.marca = "Yamaha";
    minhamoto.cilindradas = 650;
    minhamoto.preco = 50000.00;


    int opcao;
    do
    {
        cout << "\n=== Menu Veiculos ===" << endl;
        cout << "1 - Ligar o carro" << endl;
        cout << "2 - Desligar o carro" << endl;
        cout << "3 - Buzinar" << endl;
        cout << "4 - Exibir dados" << endl;
        cout << "5 - Acelerar com a moto" << endl;
        cout << "6 - Frear com a moto" << endl;
        cout << "7 - Exibir dados da moto" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao)
        {
            case 1: ligar(meuCarro); break;
            case 2: desligar(meuCarro); break;
            case 3:
                if (meuCarro.ligado) buzinar(meuCarro);
                else cout << "Carro desligado, nao pode buzinar!" << endl;
                break;
            case 4: exibirDados(meuCarro); break;
            case 5: acelerar(minhamoto); break;
            case 6: frear(minhamoto); break;
            case 7: exibirDados(minhamoto); break;
            case 0: cout << "Saindo..." << endl; break;
            default: cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 0);

    return 0;
}