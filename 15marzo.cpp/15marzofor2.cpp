#include <iostream>
using namespace std;
int main(){
    int numero, i,fact=1;
    numero =i=0;

    cout << "Ingrese un numero entero positivo: ";
    cin>> numero;

    for (i=2; i<=numero; i++){
        fact *= i;
    }
    cout <<"el factorial de: " << numero << " es  " <<fact <<endl;

    return 0;
}