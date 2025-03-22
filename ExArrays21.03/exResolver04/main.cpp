#include <iostream>

using namespace std;

int main()
{
   int vetor[20];

   for(int i = 0; i < 20; i++)
   {
       cout << "Digite um numero: " << endl;
       cin >> vetor[i];
   }

   cout << endl;

   for(int i = 19; i >= 0; i--)
   {
       cout << vetor[i] << endl;
   }

   return 0;
}
