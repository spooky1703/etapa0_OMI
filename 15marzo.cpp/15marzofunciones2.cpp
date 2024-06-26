#include <iostream>
using namespace std;

double calcula_media(double,double);
int main() {
    double numero1, numero2, resultado;
    numero1 = numero2 = resultado =0;
    cout << "introduzca el primero numero: ";
    cin >> numero1;
    cout << "introduzca el segundo numero: ";
    cin >> numero2;

    resultado = calcula_media(numero1, numero2);
    
    cout<<"La media de " << numero1 << " y " << numero2 << " es: " << resultado << ". \n" << endl;
    return 0;
}

double calcula_media(double num1, double num2){
    double media;
    media = (num1 +num2)/2;
    return media;
}