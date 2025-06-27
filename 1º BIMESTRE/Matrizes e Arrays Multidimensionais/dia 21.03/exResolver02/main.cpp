#include <iostream>

using namespace std;

int main()
{
    int quantidade;
    float nota[20];
    float mediaTurma, soma;
    int acima = 0;

    cout << "Quantos alunos serão contabilizados? ";
    cin >> quantidade;

    for (int i = 0; i < quantidade; ++i) {
        cout << "Digite a nota:\n";
        cin >> nota[i];
        soma += nota[i];
    }


    mediaTurma = soma / quantidade;
    cout << "A Media eh: " << mediaTurma << endl;

    for(int i = 0; i < nota[i]; i++)
        {
        if (nota[i] > mediaTurma)
        {
            acima++;
        }
    }

    cout << "Valores acima da média: " << acima << endl;






}
