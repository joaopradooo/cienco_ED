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
        cout << "Voc� est� abaixo do peso.";
    } else if(imc >= 20 && imc < 25){
        cout << "Voc� est� no peso ideal.";
    }else{
        cout << "Voc� est� acima do peso";
    }
}
