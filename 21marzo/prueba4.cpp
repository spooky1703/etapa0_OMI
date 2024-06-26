#include <iostream>
using namespace std;

int main(){
    char nombres [10][15];
    int j;
    //pedimos datos para llenar una matriz de cadenas
    for(j=0 ; j<10 ; j++){
        cout << "Ingrese un nombre: ";
        gets(nombres[j]);
    }
    //imprimimos una matriz que puede ya estar dada o no
    for(j=0; j<10 ; j++){
        puts(nombres[j]);
    }



}