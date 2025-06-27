#include <iostream>

using namespace std;

int main()
{
    float numHora, salMin, salReceber;
    float horaTrab, salBruto, imposto;

    cout << "Digite o numero de horas trabalhadas: ";
    cin >> numHora;

    cout << "Digite o valor do salario minimo: ";
    cin >> salMin;

    horaTrab = salMin / 2;

    salBruto = numHora * horaTrab;

    imposto = salBruto * 3 / 100;

    salReceber = salBruto - imposto;


    cout << "Salário bruto :" << salBruto << endl;
    cout << "Salário a receber: " << salReceber << endl;




}
