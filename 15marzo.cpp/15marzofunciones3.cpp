#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float vol_cilindro(float r, float a);
int main(){
    float radio, altura, volumen;
    cout << "Ingresa el radio: ";
    cin >> radio;
    cout << "Ingresa la altura: ";
    cin >> altura;
    volumen = vol_cilindro(radio, altura);
    cout << "El volumen del cilindro es: " << volumen << "\n";
return 0;}
float vol_cilindro(float r, float a)
{
    float v = M_PI*r*r*a;
    return v;
}