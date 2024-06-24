//Ejercicio 4: Generacion de Numeros Aleatorios con cstdlib
//Nina Estuco, William André
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    srand(time(0));
    int numeroMagico=rand()%100+1;
    int intento;

    cout<<"Adivina el numero magico (entre 1 y 100): ";
    while(true){
        cin>>intento;
        if(intento>numeroMagico){
            cout<<"Muy alto. Intenta denuevo: ";
        } else if(intento<numeroMagico){
            cout<<"Muy bajo. Intenta denuevo: ";
        } else{
            cout<<"Correcto El numero mágico es "<<numeroMagico<<endl;
            break;
        }
    }
    return 0;
}