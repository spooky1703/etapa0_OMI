#include <iostream>
#include <string>
using namespace std;
int main(){
    //busqueda de incidencias en una cadena
    const string FRASE = "burro grande, ande o no ande";
    int cont =0;
    char c;
    cout <<"introduzca un caracter: ";
    cin>> c;
    for(int i =0 ; i<FRASE.length() ;i++){
        if  (c == FRASE[i]){
            cont++;
        }
    }
    cout << cont << " apariciones de " << c << " en " << FRASE << endl;
    return 0;
}