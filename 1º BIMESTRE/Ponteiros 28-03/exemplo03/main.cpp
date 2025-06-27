#include <iostream>

using namespace std;

//escopo global
int var = 0;

void passagemPorValor(int var){ //passagem de VALOR
	var = 20;
}

int main()
{
	var = 10;
	int *pvar;

	pvar = &var;

	passagemPorValor(var);

	cout << var << endl;
	return 0;
}



