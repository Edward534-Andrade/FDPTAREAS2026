#include <iostream>
using namespace std;
int main(){
 int numero;


 cout<<"ingrese un numero";
 cin>> numero;

int invertido = 0;

for (; numero > 0; numero = numero / 10)
{
    int ultimoDigito = numero % 10;
    invertido = (invertido * 10) + ultimoDigito;
}

cout << "El numero invertido es: "<< invertido << endl;







    return 0;

}

