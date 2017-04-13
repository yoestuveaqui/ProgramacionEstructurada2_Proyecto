#include<iostream>

using namespace std;

class Mensaje{
    public:
        void tituloCabecera(){
            cout<<"\t\t\t----------------------------------------------------------------"<<endl;
            cout<<"\t\t\t                      TIENDA DEPARTAMENTAL"<<endl;
            cout<<"\t\t\t----------------------------------------------------------------"<<endl;
            cout<<"\t\t\t   CAMISAS| PANTALONES/FALDAS| ZAPATOS| JOYERIA| JUGUETERIA"<<endl;
            cout<<"\t\t\t      DERECHOS RESERVADOS A TEAM JOW 2017| PROYECTO FINAL "<<endl;
            cout<<"\t\t\t----------------------------------------------------------------"<<endl;
        }
        void menuPrincipal(){
            cout<<"\t\t\t ------------------------"<<endl;
            cout<<"\t\t\t 1- Ingresar como administrador"<<endl;
            cout<<"\t\t\t 2- Ingresar como cliente"<<endl;
            cout<<"\t\t\t 3- Salir del sistema"<<endl;
            cout<<"\t\t\t -------------------------"<<endl;
            cout<<"\t\t\t Ingrese su opcion [ ]"<<"\b\b";
        }
        void menuAdministrador(){
            cout<<"\t\t\t    Acceso Administrativo | Opciones del sistema"<<endl;
            cout<<"\t\t\t****************************************************"<<endl;
            cout<<"\t\t\t1- Ingresar Articulo"<<endl;
            cout<<"\t\t\t2- Modificar Articulo"<<endl;
            cout<<"\t\t\t3- Eliminar Articulo"<<endl;
            cout<<"\t\t\t4- Buscar Articilo"<<endl;
            cout<<"\t\t\t5- Ver inventario de Articulos"<<endl;
            cout<<"\t\t\t6- Salir"<<endl;
            cout<<"\t\t\t*****************************************************"<<endl;
            }

        void menuCliente(){
            cout<<"\t\t\t----------------------------------------"<<endl;
            cout<<"\t\t\t       Bienvenidos a nuestra tienda"<<endl;
            cout<<"\t\t\t----------------------------------------"<<endl;
            cout<<"\t\t\t Escoga una categoria"
        }
};








