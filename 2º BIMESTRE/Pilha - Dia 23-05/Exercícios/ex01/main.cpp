#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> pilha;
    int opcao, valor;

    do{
    cout << endl;
    cout << "==========ESCOLHA UMA OPCAO:==========" << endl;
    cout << endl;
    cout << "1 - Inserir elemento" << endl;
    cout << "2- Remover elemento do topo" << endl;
    cout << "3- Verificar elemento do topo" << endl;
    cout << "4- Verificar se a pilha esta vazia" << endl;
    cout << "5- Exibir tamanho da pilha" << endl;
    cout << "0- Sair" << endl;
    cout << endl;
    cout << endl;
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Você escolheu a opção 1." << endl;
            cout << "Vamos inserir um elemento..." << endl;
            cout << endl;
            cout << "Digite um valor para inserir na pilha: " << endl;
            cin >> valor;

            pilha.push(valor);

            break;
        case 2:
            cout << "Você escolheu a opção 2." << endl;
            cout << "Vamos remover o elemento do topo..." << endl;
            cout << endl;

            if (!pilha.empty()) {
        cout << "Valor removido: " << pilha.top() << endl;
        pilha.pop();
            }else {
        cout << "A pilha está vazia!" << endl;
            }
            break;
        case 3:
            cout << "Você escolheu a opção 3." << endl;
            cout << "Vamos verificar o elemento do topo..." << endl;
            cout << endl;
            if (!pilha.empty()){
                cout << "Elemento do topo eh: " << pilha.top() << endl;
            } else{
                cout << "A pilha está vazia!" << endl;
            }

            break;
        case 4:
            cout << "Você escolheu a opção 4." << endl;
            cout << "Vamos verificar se a pilha esta vazia..." << endl;
            cout << endl;
            cout << (pilha.empty() ? "A pilha está vazia!" : "A pilha contém elementos.") << endl;

        case 5:
            cout << "Você escolheu a opção 5." << endl;
            cout << "Vamos verificar o tamanho da pilha..." << endl;
            cout << endl;
            cout << "Tamanho da pilha: " << pilha.size() << endl;

            break;
        case 0:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 0);

    return 0;
}
