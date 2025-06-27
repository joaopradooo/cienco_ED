#include <iostream>

using namespace std;

    struct Livro {
        string titulo;
        string autor;
        int ano;
    };


int main()
{
    cout << endl;
    cout << "Responda as informações correspondente: " << endl;
    cout << endl;

    Livro liv;

    do {
        cout << "Digite o titulo do livro: " << endl;
        getline(cin, liv.titulo);

        if(liv.titulo == "crepusculo"){
            break;
        }

        cout << "Digite o nome do autor do livro: " << endl;
        getline(cin, liv.autor);

        cout << "Digite o ano do livro: " << endl;
        cin >> liv.ano;

        cout << "--------------Informacoes do Livro--------------" << endl;
       cout << "Titulo: " << liv.titulo << endl;
       cout << "Autor: "  << liv.autor << endl;
       cout << "Ano: " << liv.ano << endl << endl;

    } while (true);

    return 0;

}





