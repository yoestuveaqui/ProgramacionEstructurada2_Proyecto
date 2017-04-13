#include<iostream>
#include<cstdlib>
#include<string>
#include "Cabecera.h"

int main(){
    string bandera="S";
    int opcionCliente;
    Mensaje titulo;
    Mensaje Menu;
    titulo.tituloCabecera();
    while(bandera=="S"||bandera=="s"){
        system("cls");
        switch(Menu.menuPrincipal()){
        case 1:
            break;
        case 2:
            opcionCliente=Menu.menuCliente();
            switch(opcionCliente){
            default:
                cout<<"Opcion ingesada invalida"<<endl;
                break;
            }
            break;
        default:
            cout<<"Opcion ingresada invalida"<<endl;
            break;
        }
        cout<<"Desea volver al menur principal? S/N"<<endl;
        cout<<"Ingrese una opcion [ ]\b\b";
        cin>>bandera;

    }
    return 0;
}
