#include <iostream>
#include <cstdlib> //cambiamos stdlib.h por cstdlib

using namespace std;

float suma(float x);
float producto(float x);

int main(){
    float x;
    cout << "Ingresa el valor de x: ";
    cin >> x;
    cout << "El resultado de la invocacion de funciones anidadas es: " << suma ( producto (x)) << "\n";
    //getch(); eliminamos esta línea
    system("pause"); //agregamos esta línea para pausar la ejecución
    return 0;
    }
float suma(float x){
    return x+10;
}
float producto(float x){
    return x*5;
}