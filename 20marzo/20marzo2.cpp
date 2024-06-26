#include <iostream>
using namespace std;

int main(){

    int fila, columna, i,j;
    cout<<"cuantas filas tendra la matriz: ";
    cin>> fila;
    cout<<"cuantas columnas tendra: ";
    cin >>columna;

    int matrizPrueba[fila][columna]; //Declarmos una matriz con dimensiones dadas por el usuario
    cout << endl;

    for (i=0; i<fila; i++)    { // corrected line
        for (j = 0 ; j<columna;j++){
            cout<<"ingrese elemento en la posicion [ " << i << " , " << j << " ] = ";
            cin >>matrizPrueba[i][j] ;
        }
        cout << endl;
    }

    cout << "\n la matriz resultantes es: \n";
    for(i=0; i<fila; i++ )   {
        for (j=0; j<columna; j++){
            cout<< matrizPrueba[i][j]<< "\t";
        }
        cout<< endl;
    }
    return 0;
}