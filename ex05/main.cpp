#include <iostream>

using namespace std;

int main()
{
    float preco, total;
    int cond;

    cout << "Digite o valor do produto: ";
    cin >> preco;

    cout << endl;
    cout << endl;
    cout << "Digite a condi��o de pagamento: " << endl;
    cout << "Op��o 1 - � vista em dinheiro ou cheque, com 10% de deconto" << endl;
    cout << "Op��o 2 - � vista com cart�o de cr�dito, com 5% de deconto" << endl;
    cout << "Op��o 3 - Em 2 vezes, pre�o normal de etiqueta sem juros;" << endl;
    cout << "Op��o 4 - Em 3 vezes, pre�o de etiqueta com acr�scimo de 10%" << endl;
    cin >> cond;

    switch (cond) {
        case 1:
            total = preco - preco * 10/100;
            cout << "Total a pagar: " << total;
            break;
        case 2:
            total = preco - preco * 5/100;
            cout << "Total a pagar: " << total;
            break;
        case 3:
            total = preco;
            cout << "Total a pagar: " << total;
            break;
        case 4:
            total = preco + preco * 10/100;
            cout << "Total a pagar: " << total;
            break;
        default:
            cout << "Op��o inv�lida.\n";
            break;
    }

    return 0;
}
