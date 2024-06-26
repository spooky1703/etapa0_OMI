#include <iostream>
#include <cstdlib>
#include <ctime>

#define FILAS 5
#define COLUMNAS 6
#define Max_valor 10

using namespace std;

void llenarMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas);
void mostrarMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas);
int sumarElementosMatriz(int matriz [FILAS][COLUMNAS], int filas, int columnas);
int sumarParesMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas);
int sumarImparesMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas);
void mostrarSumaColumnas(int matriz[FILAS][COLUMNAS], int filas, int columnas);
void mostrarSumaFilas(int matriz[FILAS][COLUMNAS], int filas, int columnas);
void mostrarMatrizTranspuesta(int matriz[FILAS][COLUMNAS], int filas, int columnas);
 
 int main(){
    srand (time(NULL)); //usada para generar numeros aleatorios cada que se ejecute
    
//SE DECLARA LA MATRIZ
    int matriz[FILAS][COLUMNAS];
    int suma = 0;
    int sumaPares =0;
    int sumaImpares = 0;
    int sumaDiagonalPrincipal= 0;
//a) Almacene numeros aleatorios (menores que 100) en una matriz de 5*6
    llenarMatriz(matriz, FILAS, COLUMNAS);
//b) Recorre la matriz: mostrando sus elementos
    mostrarMatriz(matriz, FILAS, COLUMNAS);
//c) Imprima la suma de los numeros almacenados en la matriz
    suma = sumarElementosMatriz(matriz, FILAS, COLUMNAS);
    cout << "\n la suma de los elementos de la matriz es: " << suma << endl;
//d) Imprima la suma de los numeros pares almacenados en la matriz
    sumaPares= sumarParesMatriz(matriz, FILAS, COLUMNAS);
    cout << "\n La suma de los numeros PARES de la matriz es: " << sumaPares << endl;
//e) Imprima la suma de los numeros impares en la matriz
    sumaImpares = sumarImparesMatriz(matriz, FILAS, COLUMNAS);
    cout << "\n La suma de los numeros IMPARES de la matriz es: " << sumaImpares << endl;
//f) Imprima la suma de solo COLUMNAS
    mostrarSumaColumnas(matriz, FILAS, COLUMNAS);
//g) Imprima la suma de solo FILAS
    mostrarSumaFilas(matriz, FILAS, COLUMNAS);
//i) Imprima la transpuesta de la matriz
    mostrarMatrizTranspuesta(matriz, FILAS, COLUMNAS);
	return 0;
 }

void llenarMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas){
    for(int i=0 ; i < filas; ++i){
        for (int j=0;j<columnas;++j ){
            matriz [i][j] = rand( )%(Max_valor+1); //dara numeros aleatorios menores o iguales a valor max
 }  }   }
 void mostrarMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas) {
    cout << "la matriz es: " << endl;
    for (int i = 0; i < filas; i++) {
        cout << "|";
        for (int j = 0; j < columnas; j++) {
            cout << "\t" << matriz[i][j] << "\t";
        }
        cout << "|" << endl;
    }
}

int sumarElementosMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas){
    int suma =0;
    for (int i=0;  i<filas; ++i) {
        for (int j=0; j<columnas; ++j) {
            suma += matriz[i][j];
}   }
return suma;
}
int sumarParesMatriz(int matriz[FILAS][COLUMNAS], int filas, int columas){
    int suma = 0;
    for (int i=0; i< filas; ++i){
        for(int j=0; j< columas; ++j){
            if (matriz[i][j]%2==0){
                suma +=matriz[i][j];
            }
}  } 
    return suma;
}
int sumarImparesMatriz(int matriz[FILAS][COLUMNAS], int filas, int columnas){
    int suma =0;
    for(int i =0; i< filas; ++i){
        for(int j=0 ; j< columnas; ++j){
            if (matriz[i][j] % 2 !=0){
                suma+= matriz[i][j];
            }
}   }   
return suma;
}
void mostrarSumaFilas(int matriz[FILAS][COLUMNAS], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        int suma = 0;
        for (int j = 0; j < columnas; j++) {
            suma += matriz[i][j];
        }
        cout << "La suma de la fila " << i + 1 << " es: " << suma << endl;
    }
}

void mostrarSumaColumnas(int matriz[FILAS][COLUMNAS], int filas, int columnas) {
    for (int j = 0; j < columnas; j++) {
        int suma = 0;
        for (int i = 0; i < filas; i++) {
            suma += matriz[i][j];
        }
        cout << "La suma de la columna " << j + 1 << " es: " << suma << endl;
    }
}
void mostrarMatrizTranspuesta(int matriz[FILAS][COLUMNAS], int filas, int columnas){
    cout<<"\n la matriz transpuesta es: "<< endl;// las filas las vuelve columas y vicerza
    for(int j = 0 ; j < columnas ; ++j){
        for (int i = 0 ; i < filas ; ++i ){
            cout << "\t "<< matriz [i][j];
        }
        cout << endl;
    }
}

