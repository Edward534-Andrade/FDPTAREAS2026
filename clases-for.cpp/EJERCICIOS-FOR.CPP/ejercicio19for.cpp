#include <iostream>
using namespace std;
int main(){

    int N;

cout<<"porfavor ingrese la altura (N) que desearia para formar el tringulo de asteriscos: "<< endl;
cin>> N;
    for (int i = 1; i <= N; i++) {
       
   
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; 
    }


    return 0;
}