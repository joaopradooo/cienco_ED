#include <iostream>

using namespace std;

int main()
{
  int a[10];
  int x;
  int b[10];

  for(int i = 0; i < 10; i++)
  {
      cout << "Digite um valor para entrar no vetor: " << endl;
      cin >> a[i];
  }

  cout << "--------------------------------------------" << endl;
  cout << "Digite um valor X para multiplicar: " << endl;
  cin >> x;

  cout << endl;
  cout << "Resultado abaixo:  --------------------------" << endl;

  for(int i = 0; i < 10; i++)
  {
      b[i] = a[i] * x;
      cout << b[i] << " " ;
  }

}

