#include <iostream>

using namespace std;

    struct Estudante{
        string nome;
        float nota;
        string aprovacao;
    };


int main()
{
    string resultado;


    cout << endl;
    cout << "Insira os dados do aluno: " << endl;
    cout << endl;

    Estudante aluno;

    do {
        cout << "Digite o nome do aluno: " << endl;
        getline(cin, aluno.nome);


        cout << "Digite sua nota: " << endl;
        cin >> aluno.nota;
        cin.ignore();

        if (aluno.nota >= 7){
            cout << "--------------Resultado--------------" << endl;
       cout << "Nome do Aluno: " << aluno.nome << endl;
       cout << "Nota: " << aluno.nota << endl;
       cout << "Parabéns, voce foi aprovado!" << endl;
       cout << endl;
       cout << endl;
        } else {
            cout << "--------------Resultado--------------" << endl;
       cout << "Nome do Aluno: " << aluno.nome << endl;
       cout << "Nota: " << aluno.nota << endl;
       cout << "Poxa, voce foi reprovado!" << endl;
       cout << endl;
       cout << endl;
        }


    } while (true);

    return 0;
}
