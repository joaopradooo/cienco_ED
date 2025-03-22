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
    cout << "Digite a condição de pagamento: " << endl;
    cout << "Opção 1 - À vista em dinheiro ou cheque, com 10% de deconto" << endl;
    cout << "Opção 2 - À vista com cartão de crédito, com 5% de deconto" << endl;
    cout << "Opção 3 - Em 2 vezes, preço normal de etiqueta sem juros;" << endl;
    cout << "Opção 4 - Em 3 vezes, preço de etiqueta com acréscimo de 10%" << endl;
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
            cout << "Opção inválida.\n";
            break;
    }

    return 0;
}
