#include <iostream>

using namespace std;

int main()
{
    char nome[] = "joao";
    int i = 0;

    while (nome[i] != '\0')
    {
        cout << nome[i];
        i++;
    }
    return 0;
}
