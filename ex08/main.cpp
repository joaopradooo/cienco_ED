#include <iostream>

using namespace std;

int main()
{
    int opcao;
    int cand1, cand2, nulo, branco;



    do {
    cout << endl;
    cout << "Opção 1 - Candidato 1" << endl;
    cout << "Opção 2 - Candidato 2" << endl;
    cout << "Opção 3 - Voto nulo" << endl;
    cout << "Opção 4 - Voto em branco" << endl;
    cout << endl;
    cout << "Digite uma das opções abaixo: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cand1++;
            break;
        case 2:
            cand2++;
            break;
        case 3:
            nulo++;
            break;
        case 4:
            branco++;
            break;
        default:
            cout << endl;
            cout << "Opção inválida" << endl;
            break;
    }



    } while (opcao != 0);

    cand1 = cand1/100;
    cand2 = cand2/100;
    nulo = nulo/100;
    branco = branco/100;

    cout << "Porcentagem do candidato 1: " << cand1 << endl;
    cout << "Porcentagem do candidato 2: " << cand2 << endl;
    cout << "Porcentagem de voto nulo: " << nulo << endl;
    cout << "Porcentagem de voto em branco: " << branco << endl;

    return 0;

}
