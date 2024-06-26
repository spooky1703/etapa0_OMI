#include <iostream>
#include <string>
using namespace std;

int main(){
    string nombre;
    cout << "introduzca su nombre completo: ";
    getline(cin,nombre); // para capturar el salto de linea al final del nombre
    cout<< "nombre completo: " << nombre << endl;
    cout << "introduzca su nombre completo: ";
    cin >> nombre; //solo lee una palabra
    cout<< "nombre completo: " << nombre << endl; 
    
    return 0;
}