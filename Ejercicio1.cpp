//Ejercicio 1: Simulación de Cajero Automático
//Nina Estuco, William André
#include <iostream>
using namespace std;

int saldo = 0;

void depositar(){
    saldo+=100;
    cout<<"Se han depositado 10 unidades. Nuevo saldo: "<<saldo<<endl;
}

void retirar(){
    if(saldo>=100){
        saldo-=100;
        cout<<"Se han retirado 100 unidades. Nuevo saldo: "<<saldo<<endl;
    } else{
        cout<<"Saldo insuficiente."<<endl;
    }
}

void mostrarSaldo(){
    cout<<"Saldo actual: "<<saldo<<endl;
}

void menu(){
    int opcion;
    do{
        cout<<"\n--- Cajero Automático ---"<<endl;
        cout<<"1. Depositar 100"<<endl;
        cout<<"2. Retirar 100"<<endl;
        cout<<"3. Mostrar Saldo"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Selecccione una opcion:";
        cin>>opcion;

        switch(opcion){
            case 1:
                depositar();
                break;
            case 2:
                retirar();
                break;
            case 3:
                mostrarSaldo();
                break;
            case 4:
                cout<<"Saliendo..."<<endl;
                break;
            default:
                cout<<"Opcion no valida. Intente denuevo."<<endl;
        }
    } while(opcion!=4);
}
int main(){
    menu();
    return 0;
}
