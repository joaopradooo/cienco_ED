#include <iostream>
#include <string.h>

using namespace std;

void inverte (char nome[])
{
    int tam = strlen(nome);
    for (int i = tam - 1; i >= 0; i--)
    {
        cout << nome[i];
    }
}


int main()
{

    char nome[] = "joao";
    inverte(nome);
    cout << endl;

    if (isalpha(nome[0]))
    {
        cout << "caractere alfabetico" << endl;
    }
    else
    {
        cout << "caractere numerico" << endl;
    }

    if(isalpha(nome[0]))
    {
        cout << "letra" << endl;
    }
    else
    {
        cout << "numero" << endl;
    }

    if (isupper(nome[0]))
    {
        cout << "maisculo" << endl;
    }
    return 0;


}


