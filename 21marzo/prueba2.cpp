#include <iostream>
using namespace std;

int main(){
     char nombre[20], apellido[20];
     cout<<"ingrese el nombre: ";
     cin.getline(nombre, 20);
     cout<<"ingrese el apellido: ";
     cin.getline(apellido, 20);

     cout << nombre<< "\t";
     cout << apellido;

     return 0;
}