#include <iostream>
using namespace std;
int main(){
    double x,y;
    char op;
    cout << "introduzca un primer valor real: ";
    cin >> x;
    cout << "introduzca un segundo valor real: ";
    cin  >> y;
    cout<< "1: sumar valores \n";
    cout<< "2: restar valores \n";
    cout<< "3: multiplicar valores \n";
    cout<< "4: dividir valores \n";
    cout  << "Introduzca la opcion (1-4)";
    cin >> op;
    switch (op)
    {
    case '1':
        cout<< "suma: " << x+y<< endl;
        break;
    case '2':
        cout<< "resta: " << x-y <<endl;
        break;
    case '3':
        cout<< "multiplicacion: " <<x*y<<endl;
        break;  
    case '4':
    cout <<"division: "<< x/y<<endl;
    default:
    cout <<"Opcion no válida" << endl;
        break;
    }

    return 0;
}