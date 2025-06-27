#include <iostream>

using namespace std;

int main()
{
    float salario, salReajuste;

    cout << "Digite seu salario: ";
    cin >> salario;

    if (salario < 1000){
        salReajuste = salario + salario * 15/100;
    } else if(salario <= 1500){
        salReajuste = salario + salario * 10/100;
    } else{
        salReajuste = salario + salario * 5/100;
    }

    cout << salReajuste;
}
