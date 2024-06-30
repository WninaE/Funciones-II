//actividad4.cpp
//4. Cálculo de raíces de una ecuación cuadrática
//Nina Estuco, William André
#include <iostream>
#include <cmath>
using namespace std;

void raices(int m, int n, int o);

int main(){
    int a, b, c, d, r1, r2, r;
    cout<<"Ingrese los coeficientes: ";
    cin>>a>>b>>c;
    cout<<"Las raices de la ecuacion cuadratica son ";
    d=pow(b,2)-(4*a*c);
    if(d>0){
        cout<<"reales, tiene dos soluciones.\n";
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        cout<<"Las raices son "<<r1<<" y "<<r2<<endl;
    } else if(d==0){
        cout<<"una unica solucion real\n";
        r=-b/(2*a);
        cout<<"La raiz es "<<r<<endl;
    } else{
        cout<<"imaginarias, no tiene soluciones reales."<<endl;
    }
    return 0;
}