#include<iostream>
#include<cstdlib>
#include "Cabecera.h"

int main(){
    string bandera="S";
    string opcionCliente;
    Mensaje titulo, Menu;
    Seguridad Sesion;
    titulo.tituloCabecera();
    system("pause");
    while(bandera=="S"||bandera=="s"){
        system("cls");
        switch(Menu.menuPrincipal()){
        case 1:
            if(Sesion.menuLogeo()==false){
            }
            else{

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
