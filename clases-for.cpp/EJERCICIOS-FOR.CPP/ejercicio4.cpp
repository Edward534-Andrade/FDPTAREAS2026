#include <iostream>
using namespace std;
int main(){
    int numero;
    cout<<"Ingresa un numero:"<< endl;
    cin>> numero;
    cout <<"tabla del:"<< numero << endl;
    for ( int i = 1; i <= 12; i++)
    {
        cout << numero << "x" << i << "=" << numero * i<< endl;
    }

    return 0;
}
    