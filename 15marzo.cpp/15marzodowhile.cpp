#include <iostream>
using namespace std;

int main(){
    double dividendo, divisor;
    cout <<"introduzca el dividendo: ";
    cin>> dividendo;
    do {
        cout<<"introduzca el divisor (distinto de cero)";
        cin >>divisor;
    }while (divisor ==0);
         cout << "el resultado de la division es: " << dividendo/divisor<<endl;

    return 0;

}