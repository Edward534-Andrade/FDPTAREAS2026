//Tabla de Multiplicar
//Pide un número al usuario y muestra su tabla de multiplicar del 1 al 10.
#include <iostream>
using namespace std;

int main() {
    int numero;
  
    cout <<"ingresa un numero"<< endl;
    cin >> numero;
 cout <<"tabla del"<< numero << endl;
    for (int i = 1; i <= 10; i++) {
     cout << numero << "x"<< i << "="<< numero * i<< endl;
    }

    return 0;
}