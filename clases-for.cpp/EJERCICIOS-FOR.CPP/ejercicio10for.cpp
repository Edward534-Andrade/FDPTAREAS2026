#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingresa un numero N para ver la cantidad de numeros que quieres ver :"<< endl;
    cin>> n;

    int a = 0;
    int b = 1;
    cout <<"serie de Fibonacci:"<< endl;
    for (int i = 0; i < n; i++)
    {
        int siguiente = 0;
        cout<< a<<" "<< endl;
    siguiente=a+b;
        a=b;
        b=siguiente;
    }

    return 0;
}