#include<iostream>
#include<cstdlib>
#include<locale>
#include "Cabecera.h"
#include "ArticulosRopa.h"

int main(){
    setlocale(LC_ALL, "spanish");// Para poder imprimir las tildes y la �
    string bandera="S";
    string opcionCliente;
    Mensaje titulo, Menu;
    Seguridad Sesion;
    while(bandera=="S"||bandera=="s"){
        system("cls");
        switch(Menu.menuPrincipal()){
        case 1:
            system("cls");
            titulo.tituloCabecera();
            if(Sesion.menuLogeo()==false){

            }
            else{
                system("cls");
                switch(Menu.menuAdministrador()){
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    exit(0);
                    break;
                default:
                    cout<<"\t\t\tOpci�n ingresada es invalida"<<endl;
                    break;
                }
            }
            break;
        case 2:
            cout<<endl;
            Menu.menuDepartamentos();
            break;

        case 3:
            exit(0);

        default:
            cout<<"Opci�n Invalida"<<endl;

        }
        cout<<"\t\t\tDesea volver al menur principal? S/N"<<endl;
        cout<<"\t\t\tIngrese una opci�n [ ]\b\b";
        cin>>bandera;
    }
    return 0;
}
