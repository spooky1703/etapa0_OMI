#include <iostream>
using namespace std;

int main (){
    const double IVA = 0.04;
    double precio;
    cout<< "precio del libro: ";
    cin >> precio;
    cout << "Precio con IVA " << precio + precio*IVA<<'\n';
    return 0;

}