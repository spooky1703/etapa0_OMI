#include<iostream>
using namespace std;

int main(){

float valor, suma=0;
    cout << "introduzca un valor (0 para terminar)";
    cin >> valor;
    while (valor !=0){
        suma += valor;
        cout <<"introduzca otro valor (0 para terminar)";
        cin >> valor;
    }
    cout << "el resultado de la suma es: " <<suma <<endl;
    return 0;
}