//actividad2.cpp
//2. Generador de números aleatorios
//Nina Estuco, William André
#include <iostream>
#include <cstdlib>
using namespace std;

int NumAlea(int a, int b);

int main(){
    int NM=0, CNA=0, NR;
    cout<<"El numero minimo es 0.\n";
    cout<<"Ingrese el numero maximo: ";
    cin>>NM;
    cout<<"Cantidad de numeros aleatorios: ";
    cin>>CNA;
    cout<<"Los numeros aleatorios son:\n";
    NR=NumAlea(NM, CNA);
    return 0;
}

int NumAlea(int a, int b){
    int NA;
    for(int i=1; i<=b; i++){
        NA=1+rand()%a;
        cout<<NA<<"\n";
    }
    return NA;
}