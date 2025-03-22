#include <iostream>

using namespace std;

int main()
{
    int dias = 365;
    float vetor[dias];
    float media;
    float soma = 0;

    for(int i = 0; i < dias; i++)
    {
        cout << "Digite a temperatura do dia " << i + 1 << ": " << endl;
        cin >> vetor[i];
        soma += vetor[i];
    }

    float maior = vetor[0];
    float menor = vetor[0];

    media = soma / dias;
    cout << "A Media eh: " << media << endl;

    for(int i = 0; i < dias; i++)
    {
    if (vetor[i] > maior)
    {
        maior = vetor[i];
    }

    if (vetor[i] < menor)
    {
        menor = vetor[i];
    }

    }

    cout << "A maior temperatura foi: " << maior << endl;
    cout << "A menor temperatura foi: " << menor << endl;


}
