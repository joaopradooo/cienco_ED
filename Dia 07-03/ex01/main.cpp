#include <iostream>

using namespace std;

int main()
{
    float peso, altura, imc;

    cout << "Digite seu peso: ";
    cin >> peso;

    cout << "Digite sua altura: ";
    cin >> altura;

    imc = peso / (altura*altura);

    if (imc < 20){
        cout << "Você está abaixo do peso.";
    } else if(imc >= 20 && imc < 25){
        cout << "Você está no peso ideal.";
    }else{
        cout << "Você está acima do peso";
    }
}
