#include <iostream>
#include <stdlib.h>

using namespace std;

float suma(float x);
float producto(float x);

int main(){
    float x;
    cout << "ingrese el valor de x: ";
    cin >> x;
    cout << "el resultado de la invocacion de funciones anindadas es: " << suma ( producto (x) )<< "\n";
return 0;
}
float suma(float s){
    return s+10;
}
float producto(float x){
    return x*5;
}