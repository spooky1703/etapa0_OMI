#include <iostream>
using namespace std;
int main(){
    double nota;
    cout << "introduzca la nota: ";
    cin >> nota;
    if (nota < 0 || nota > 10){
        cout << "nota no valida \n";
    } else {
        if(nota < 5.0){
            cout << "reprobado \n";
        } else {
            if (nota <7.0){
                cout << "aprobado \n";
            } else {
                if (nota < 9.0){
                    cout << "notable \n";
                } else {
                    cout << "sobresaliente \n";
                }
            }
        }
    }
}