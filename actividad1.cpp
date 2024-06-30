//actividad1.cpp
//1. Cálculo del área de un círculo
//Nina Estuco, William André
#include <iostream>
#include <cmath>
using namespace std;

int AreaCirculo(int a);

int main(){
    int r; float S;
    cout<<"Ingrese la radio: "; cin>>r;
    S=AreaCirculo(r);
    cout<<"El area del circulo es "<<S<<endl;
    return 0;
}

int AreaCirculo(int a){
    float A;
    A=M_PI*pow(a,2);
    return A;
}