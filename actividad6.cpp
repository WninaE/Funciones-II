//actividad6.cpp
//6. Juego de piedra, papel y tijeras
//Nina Estuco, William André
#include <iostream>
#include <time.h>

using namespace std;

int main(){
    int user, comp, i, u, c, e;
    e=0; u=0; c=0; i=1;
    while(u<3&&c<3){
        cout<<"\nRonda "<<i<<"\n";
        i=i+1;
        
        cout<<"\nIngrese piedra(1), papel(2) o tijera(3): ";
        cin>>user;

        switch(user){
            case 1:
                cout<<"El usuario ingreso piedra.";
                break;
            case 2:
                cout<<"El usuario ingreso papel.";
                break;
            case 3:
                cout<<"El usuario ingreso tijera.";
                break;
        }

        srand(time(NULL));
        comp=(rand()%2)+1;

        if(comp==1){
            cout<<"\nEl ordenador ingreso piedra.";
        } else if(comp==2){
            cout<<"\nEl ordenador ingreso papel.";
        } else if(comp==3){
            cout<<"\nEl ordenador ingreso tijera.";
        }

        if(user==1&&comp==2){
            cout<<"\nGano el ordenador";
            c=c+1;
        } else if(user==1&&comp==3){
            cout<<"\nGano el usuario";
            u=u+1;
        } else if(user==2&&comp==1){
            cout<<"\nGano el usuario";
            u=u+1;
        } else if(user==2&&comp==3){
            cout<<"\nGano el ordenador";
            c=c+1;
        } else if(user==3&&comp==1){
            cout<<"\nGano el ordenador";
            c=c+1;
        } else if(user==3&&comp==2){
            cout<<"\nGano el usuario";
            u=u+1;
        } else if(user==comp){
            cout<<"\nEmpataron";
            e=e+1;
        }

        cout<<"\nUsuario gano "<<u<<" ronda(s).";
        cout<<"\nOrdenador gano "<<c<<" ronda(s).";
        cout<<"\nEmpataron "<<e<<" ronda(s).\n";
    }
    cout<<"\nEl ganador final del juego es el ";
    if(u==3){
        cout<<"usuario.";
    } else{
        cout<<"ordenador.";
    }
    return 0;
}