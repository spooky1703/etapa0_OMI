#include <iostream>
using namespace std;
int main(){
    char c;
    cout<< "introduzca una vocal: ";
    cin>>c;
    if (c == 'i' || c== 'u'){
            cout << "introduzca una vocal cerrada: "<<  endl;
    }else {
        if (c == 'a'|| c == 'e' || c=='o') {
            cout << "la vocal introducida es abierta: "<<endl ;
    }else{
        cout<<"no introdujo vocal: " << endl;
    }
}
}