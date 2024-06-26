#include <iostream>
using namespace std;

int main(){
    int v[6], i;
    for (i=0 ; i<5 ; i++){
        cin >> v[i];

    }
    v[5]=10;
    cout <<"los vectores del conjunto son: " << endl;
    for(i=0 ; i<6; i++){
        cout << v[i]<<endl; 
    }
return 0;
}