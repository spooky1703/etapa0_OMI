#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
float vol_cilindro(float r, float a);
int main() {

    float radio,altura,volumen;

    cout <<"ingrese el radio";
    cin >>radio;
    cout << "ingrese la altura";
    cin>>altura;

    volumen = vol_cilindro(radio,altura);
    cout << "el volumen del cilindro es: " << volumen<<"\n";
return 0;
}
float  vol_cilindro(float r, float a){
    float v = M_PI*r*r*a;
    return v;
}