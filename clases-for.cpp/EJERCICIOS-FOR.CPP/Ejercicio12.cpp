#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int resultado = 1;

    cout << "ingresa dos numeros, a= base, b=exponente:" << endl;
    cin >> a;
    cin >> b;

    for (int i = 0; i < b; i++)
    {
        resultado = resultado * a;
    }
    cout << "El resultado es" << resultado << endl;

    return 0;
}