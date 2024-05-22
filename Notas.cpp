#include <iostream>
using namespace std;
int main(){
    float notas[6];
    float promedio=0;
    
    for(int J=0;J<6;J++){cout<<"Introduzca sus notas:"<<endl;
    cin>>notas[J]; promedio=promedio+notas[J];
}
promedio=promedio/6;
cout<<"Su promedio es "<<promedio<<endl;
return 0;
}