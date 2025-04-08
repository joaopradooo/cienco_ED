#include <iostream>

using namespace std;

int main()
{
   int quantidade = 10;
   string nome[quantidade];
   string nomeBusca;

   for (int i = 0; i < quantidade; ++i) {
        cout << "Digite os nomes: ";
        cin >> nome[i];
    }

    cout << "Digite um nome para pesquisar: ";
    cin >> nomeBusca;

    bool encontrado = false;
    for(int i = 0; i < quantidade; i++)
    {
        if (nome[i] == nomeBusca)
        {
            encontrado = true;
            break;
        }
    }

    if (encontrado)
    {
        cout << "Nome encontrado!\n";
    } else
    {
        cout << "Nome nao encontrado!\n";
    }
}
