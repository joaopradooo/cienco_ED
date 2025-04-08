#include <iostream>

using namespace std;

int main()
{
    int vetor[10];


    for(int i = 0; i < 10; i++){
        cout << "Digite um numero para entrar no vetor: " << endl;
        cin >> *(vetor+i);
    }

    cout << endl;
    cout << endl;

     for(int i = 0; i < 10; i++){
        cout << *(vetor+i) << endl;

    }

    cout << endl;
    cout << endl;

     for(int i = 9; i > 0; i--){
        cout <<*(vetor+i) << endl;

    }

}
