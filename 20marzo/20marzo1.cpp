#include <iostream>
using namespace std;

int main(){
    int i,j;
    //imprimir una matriz ya dada
    int Mat[3][3]= {{4,-7,9},{5,8,13},{2,6,10}};  
        for(i=0 ; i<3 ; ++i) {
            for (j=0; j<3; j++){
                cout<< Mat[i][j]<<"  ";
            }
            cout<<endl;
        }
    return 0;
}