#include <iostream>

using namespace std;

struct Paciente {
        string nome;
        int idade;
        string sintoma;
    };



int main()
{
    cout << endl;
    cout << "Responda o questionario ou digite 0 (zero) para sair" << endl;
    cout << endl;

    Paciente p;

    do{
       cout << "Digite o nome do paciente: " << endl;
       getline(cin, p.nome);

       if(p.nome == "0"){
        break;
       }

       cout << "Digite sua idade: " << endl;
       cin >> p.idade;
       cin.ignore();

       cout << "Digite o sintoma: " << endl;
       getline(cin, p.sintoma);

       cout << "--------------Paciente Registrado--------------" << endl;
       cout << "Nome: " << p.nome << endl;
       cout << "Idade: " << p.idade << endl;
       cout << "Sintoma: " << p.sintoma << endl << endl;

    } while (true);

    return 0;
}
