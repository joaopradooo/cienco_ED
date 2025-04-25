#include <iostream>

using namespace std;

    struct Filme{
        float notaEnredo;
        float notaAtuacao;
        float notaEfEs;
    };

int main()

{
    float media;

    cout << endl;
    cout << "Avalie os seguintes quesitos do filme: " << endl;
    cout << endl;

    Filme film;

    do {
        cout << "Digite uma nota para o enredo do filme: " << endl;
        cin >> film.notaEnredo;

        if(film.notaEnredo == 0){
            break;
        }


        cout << "Digite uma nota para a atuacao do filme: " << endl;
        cin >> film.notaAtuacao;

        cout << "Digite uma nota para os efeitos especiais do filme: " << endl;
        cin >> film.notaEfEs;

        media = (film.notaEnredo + film.notaAtuacao + film.notaEfEs) / 3;

        cout << "--------------Notas do Filme--------------" << endl;
       cout << "Nota do Enredo: " << film.notaEnredo << endl;
       cout << "Nota da Atuacao: "  << film.notaAtuacao << endl;
       cout << "Nota do Efeitos Especiais: " << film.notaEfEs << endl << endl;
       cout << "Nota media do filme: " << media << endl;
       cout << endl;
       cout << endl;

    } while (true);

    return 0;


}
