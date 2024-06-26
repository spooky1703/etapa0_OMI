#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"introduzca 2 valores enteros: ";
    cin >> x >>y;
    if(x>y){
        cout<<x << " es mayor." <<endl;
    } else{
        if(y>x){
            cout<< y<< " es mayor"<< endl;
        }
        else {
            cout<< "los dos valores son iguales"<< endl;
        }
    }

}