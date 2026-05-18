#include <iostream>
using namespace std;

int main() {
    int n=0, a;
    
    cout<<"podrias ingresar un numero que sera tu limite";
   cin >> a;
    for (int i = 1; i <= a; i++) { // palabra reservada, su funcion es, recibe un condicion, su condicion es iniciaf una Va, iterador
        //  va comenzar en 1 i=1 y terminamos cuando iterador <=a cuando se pone un numero a y cuando lo haga el iterador 
        // Imprimir el valor actual de i
        cout << i << " ";
    }

    cout << endl;  // Salto de línea al final
    return 0;
}