//actividad3.cpp
//3. Cálculo de la hipotenusa
//Nina Estuco, William André
#include <iostream>
#include <cmath>
using namespace std;

int Hipotenusa(int m, int n);

int main(){
    int co, ca; float H;
    cout<<"Ingrese el cateto opuesto: "; cin>>co;
    cout<<"Ingrese el cateto adyacente: "; cin>>ca;
    H=Hipotenusa(co, ca);
    cout<<"La hipotenusa del triangulo rectangulo es "<<H<<endl;
    return 0;
}

int Hipotenusa(int m, int n){
    float h;
    h=sqrt(pow(m,2)+pow(n,2));
    return h;
}