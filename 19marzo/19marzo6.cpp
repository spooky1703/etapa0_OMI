#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){
    float notas[20];
    int i = 0;
    float suma = 0, media =0;

    for (i=0; i <20; i++){
        cout << "Alumno numero " << i+1 << " su nota final es de: ";
        cin >> notas[i];
    }
    for( i = 0 ; i<20; i++){
        suma = suma +notas[i];
    }
    media = suma/20;

    cout << fixed << setprecision(2); //solo va a tomar 2 decimales par la impresion
    cout << endl << endl << "nota media de curso: "<< media << endl;

    cout << "listado de notas superiores a la media"<< endl;
    cout << "----------------------------------------"<< endl;

    for(i = 0 ; i < 20 ; i++)
    if(notas[i] > media)
    {                     //dejame 3 espacios
        cout << "Alumno " << setw(3) << i+1;
        cout << "nota final: " <<notas[i] <<endl;
    }
    cout<< endl;
    system("pause");
    return 0;
}