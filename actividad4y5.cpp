//actividad5.cpp
//5. Función calcular raíces
//Nina Estuco, William André
#include <iostream>
#include <cmath>
using namespace std;

void raices(int m, int n, int o);

int main(){
    int a, b, c;
    cout<<"Ingrese los coeficientes: ";
    cin>>a>>b>>c;
    cout<<"Las raices de la ecuacion cuadratica son ";
    raices(a, b, c);
    return 0;
}

void raices(int m, int n, int o){
    float d, r1, r2, r;
    d=pow(n,2)-(4*m*o);
    if(d>0){
        cout<<"reales, tiene dos soluciones.\n";
        r1=(-n+sqrt(d))/(2*m);
        r2=(-n-sqrt(d))/(2*m);
        cout<<"Las raices son "<<r1<<" y "<<r2<<endl;
    } else if(d==0){
        cout<<"una unica solucion real.\n";
        r=-n/(2*m);
        cout<<"La raiz es "<<r<<endl;
    } else{
        cout<<"imaginarias, no tiene soluciones reales."<<endl;
    }
}