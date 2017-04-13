#include<iostream>

using namespace std;

class Mensaje{
    private:
        int opcionPrincipal, opcionAdministrativo;
        int opcionCliente, opcionDepartamentos;

    public:
        void tituloCabecera();
        int menuPrincipal();
        int menuAdministrador();
        int menuCliente();
        int menuDepartamentos();
};

class MensajeBebe{
    private:

    public:

};

void Mensaje::tituloCabecera(){
    cout<<"\t\t\t----------------------------------------------------------------"<<endl;
    cout<<"\t\t\t                      TIENDA DEPARTAMENTAL"<<endl;
    cout<<"\t\t\t----------------------------------------------------------------"<<endl;
    cout<<"\t\t\t   CAMISAS| PANTALONES/FALDAS| ZAPATOS| JOYERIA| JUGUETERIA"<<endl;
    cout<<"\t\t\t      DERECHOS RESERVADOS A TEAM JOW 2017| PROYECTO FINAL "<<endl;
    cout<<"\t\t\t----------------------------------------------------------------"<<endl;
}

int Mensaje::menuPrincipal(){
    cout<<"\t\t\t -----------------------------------"<<endl;
    cout<<"\t\t\t 1- Ingresar como administrador"<<endl;
    cout<<"\t\t\t 2- Ingresar como cliente"<<endl;
    cout<<"\t\t\t 3- Salir del sistema"<<endl;
    cout<<"\t\t\t ------------------------------------"<<endl;
    cout<<"\t\t\t Ingrese su opcion [ ]"<<"\b\b";
    cin>>opcionPrincipal;
    return opcionPrincipal;
}

int  Mensaje::menuAdministrador(){
    cout<<"\t\t\t    Acceso Administrativo | Opciones del sistema"<<endl;
    cout<<"\t\t\t****************************************************"<<endl;
    cout<<"\t\t\t1- Ingresar Articulo"<<endl;
    cout<<"\t\t\t2- Modificar Articulo"<<endl;
    cout<<"\t\t\t3- Eliminar Articulo"<<endl;
    cout<<"\t\t\t4- Buscar Articilo"<<endl;
    cout<<"\t\t\t5- Ver inventario de Articulos"<<endl;
    cout<<"\t\t\t6- Salir"<<endl;
    cout<<"\t\t\t*****************************************************"<<endl;
    cout<<"\t\t\t Seleccione una opcion [ ]\b\b";
    cin>>opcionAdministrativo;
    return opcionAdministrativo;
}

int  Mensaje::menuCliente(){
    cout<<"\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t      Bienvenidos a nuestra tienda"<<endl;
    cout<<"\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t        Escoga una categoria"<<endl;
    cout<<"\t\t\t      1- Hombre"<<endl;
    cout<<"\t\t\t      2- Mujer"<<endl;
    cout<<"\t\t\t      3- Jovenes"<<endl;
    cout<<"\t\t\t      4- Bebes"<<endl;
    cout<<"\t\t\t---------------------------------------"<<endl;
    cout<<"\t\t\t   Ingrese una opcion [ ]\b\b";
    cin>>opcionCliente;
    return opcionCliente;
}

int Mensaje::menuDepartamentos(){
    cout<<"\t\t\t----------------------------"<<endl;
    cout<<"\t\t\t 1- Camisas"<<endl;
    cout<<"\t\t\t 2- Pantalones"<<endl;
    cout<<"\t\t\t 3- Zapatos"<<endl;
    cout<<"\t\t\t 4- Sport"<<endl;
    cout<<"\t\t\t 5- Joyeria"<<endl;
    cout<<"\t\t\t----------------------------"<<endl;
    cout<<"\t\t\t Selecciones una opcion [ ]\b\b";
    cin>>opcionDepartamentos;
    return opcionDepartamentos;
}







