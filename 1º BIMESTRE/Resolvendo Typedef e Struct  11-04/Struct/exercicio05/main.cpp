#include <iostream>

using namespace std;

    struct Restaurante{
        string nomePrato;
        int quantidade;
        float valor;
    };

int main()
{

    cout << endl;
    cout << "Insira os dados do pedido: " << endl;
    cout << "Pamonha - R$ 5,00" << endl;
    cout << "Cural - R$ 5,00" << endl;
    cout << "Milho - R$ 5,00" << endl;
    cout << endl;

    Restaurante pedido;


    do{
        cout << "Digite o nome do prato" << endl;
        getline(cin, pedido.nomePrato);

        if (pedido.nomePrato == "0"){
            break;
        }

        cout << "Digite a quantidade: " << endl;
        cin >> pedido.quantidade;

        cout << "Digite o valor total: " << endl;
        cin >> pedido.valor;

        if (pedido.valor == "15"){
            break;
        }

        cout << "--------------Informacoes do Pedido--------------" << endl;
       cout << "Nome do item: " << film.notaEnredo << endl;
       cout << "Nota da Atuacao: "  << film.notaAtuacao << endl;
       cout << "Nota do Efeitos Especiais: " << film.notaEfEs << endl << endl;
       cout << "Nota media do filme: " << media << endl;
       cout << endl;
       cout << endl;

    }


}
