#include <iostream>
using namespace std;
int main(){
    const char VOCAL = 'e';
    char vocal;

    cout<< "introduzca una vocal: ";
    cin >> vocal;
    if (vocal == VOCAL){
        cout<< "ACERTADO \n";
    }else{
        cout<<"mala suerte \n";
    }
}