#include <iostream>

using namespace std;
#define ESTUDANTES 5

int main()
{
    int indice = 0;
    float total, nota[ESTUDANTES];

    //prescrever o vetor
    while (indice < ESTUDANTES){
        cout << "Entre com a nota do estudante " << indice + 1 << ": ";
        cin >> nota[indice];
        indice = indice + 1;
    }

    cout << "---------------------------------------------" << endl;

    total = 0;
    int qtd = 1;

    for(int i = 0; i < ESTUDANTES; i++){
        cout << "Nota " << qtd << ": " << nota[i] << endl;
        total = total + nota[i];
        qtd++;
    }

    cout << endl << "M�dia: " << total / ESTUDANTES << endl;
    return 0;

}
