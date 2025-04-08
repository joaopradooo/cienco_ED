#include <iostream>

using namespace std;

int main()
{
    int valorN;


    cout << "Digite um tamanho para os dois vetores: " << endl;
    cin >> valorN;

    int vetorA[valorN];
    int vetorB[valorN];
    int vetorC[valorN];

    cout << endl;
    cout << "==============================================" << endl;
    cout << endl;

    for (int i = 0; i < valorN; i++)
    {
        cout << "Digite os valores para o vetor A" << endl;
        cin >> vetorA[i];
    }

    cout << endl;
    cout << "==============================================" << endl;
    cout << endl;

    for (int i = 0; i < valorN; i++)
    {
        cout << "Digite os valores para o vetor B: " << endl;
        cin >> vetorB[i];
    }

    cout << endl;
    cout << "==============================================" << endl;
    cout << endl;


    for(int i = 0; i < valorN; i++)
    {
        vetorC[i] = (vetorA[i] + vetorB[i]);

        cout << vetorC[i] << endl;
    }

    return 0;

}
