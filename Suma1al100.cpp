#include <iostream>
using namespace std;
int main(){
    int num[100];
    int suma=0;
    
    for(int J = 0; J<100;J++){
        num[J]= J+1;
        suma=suma+num[J];
        

    }
cout<<"La suma de los numeros es "<<suma<<endl;    
    return 0;
}