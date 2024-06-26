#include <iostream>
#include <stdio.h>
#include<string>
using namespace std;

int main(){
     char nombre[20], apellido[20];
     cout<<"ingrese el nombre: ";
     gets(nombre);
     cout<<"ingrese el apellido: ";
     gets(apellido);

     puts(nombre);
     puts(apellido);
}