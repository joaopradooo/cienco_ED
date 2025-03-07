#include <iostream>

using namespace std;

int main()
{
  int idade;

  cout << "Digite a idade do nadador: ";
  cin >> idade;


  if (idade < 5){
    cout << "Não se encaixa em nenhuma categoria";
  } else if (idade >= 5 && idade <= 7){
    cout << "Classificado na categoria INFANTIL A";
  } else if (idade >= 8 && idade <= 10){
    cout << "Classificado na categoria INFANTIL B";
  } else if (idade >= 11 && idade <= 13){
    cout << "Classificado na categoria JUVENIL A";
  } else if (idade >= 14 && idade <= 17){
    cout << "Classificado na categoria JUVENIL B";
  } else {
    cout << "Classificado na categoria SENIOR";
  }

  return 0;
}
