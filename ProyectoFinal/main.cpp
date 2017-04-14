#include<iostream>
#include<cstdlib>
#include<string>
#include "Cabecera.h"

int main(){
    string bandera="S";
    string opcionCliente;
    Mensaje titulo, Menu;
    Seguridad Sesion;
    titulo.tituloCabecera();
    while(bandera=="S"||bandera=="s"){
        system("cls");
        switch(Menu.menuPrincipal()){
        case 1:
            if(Sesion.menuLogeo()==false){
                cout<<"Alto ahi malechor"<<endl;
            }
            else{
                cout<<"Todo tuani"<<endl;
            }
            break;
        case 2:
            cout<<endl;
            Menu.menuDepartamentos();
            break;

        case 3:
            exit(0);

        default:
            cout<<"Opcion Invalida"<<endl;

        }
        cout<<"\t\t\tDesea volver al menur principal? S/N"<<endl;
        cout<<"\t\t\tIngrese una opcion [ ]\b\b";
        cin>>bandera;
    }
    return 0;
}
