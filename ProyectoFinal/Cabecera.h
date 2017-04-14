#include<iostream>
#include<string>
#include<conio2.h>
#define Usuario "root"
#define Password "yofui"

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
        string tipoCliente();
};

class Seguridad{
private:
    string password;
    string usuario;
    char letra;
public:
    bool menuLogeo();
    string contrasenia();
};

void Mensaje::tituloCabecera(){
    cout<<"\t\t\t----------------------------------------------------------------"<<endl;
    cout<<"\t\t\t                      TIENDA DEPARTAMENTAL"<<endl;
    cout<<"\t\t\t----------------------------------------------------------------"<<endl;
    cout<<"\t\t\t   CAMISAS| PANTALONES/FALDAS| ZAPATOS| JOYERIA| JUGUETERIA"<<endl;
    cout<<"\t\t\t      DERECHOS RESERVADOS A TEAM JOW 2017| PROYECTO FINAL "<<endl;
    cout<<"\t\t\t----------------------------------------------------------------"<<endl;
    cout<<"======================================================================================================================"<<endl<<endl;
}

int Mensaje::menuPrincipal(){
    tituloCabecera();
    cout<<"\t\t\t -----------------------------------"<<endl;
    cout<<"\t\t\t 1- Ingresar como administrador"<<endl;
    cout<<"\t\t\t 2- Ingresar como cliente"<<endl;
    cout<<"\t\t\t 3- Salir del sistema"<<endl;
    cout<<"\t\t\t ------------------------------------"<<endl;
    cout<<"\t\t\t Ingrese su opción [ ]"<<"\b\b";
    cin>>opcionPrincipal;
    system("cls");
    return opcionPrincipal;
}

int  Mensaje::menuAdministrador(){
    tituloCabecera();
    cout<<"\t\t\t    Acceso Administrativo | Opciones del sistema"<<endl;
    cout<<"\t\t\t****************************************************"<<endl;
    cout<<"\t\t\t1- Ingresar Articulo"<<endl;
    cout<<"\t\t\t2- Modificar Articulo"<<endl;
    cout<<"\t\t\t3- Eliminar Articulo"<<endl;
    cout<<"\t\t\t4- Buscar Articilo"<<endl;
    cout<<"\t\t\t5- Ver inventario de Articulos"<<endl;
    cout<<"\t\t\t6- Salir"<<endl;
    cout<<"\t\t\t*****************************************************"<<endl;
    cout<<"\t\t\t Seleccione una opción [ ]\b\b";
    cin>>opcionAdministrativo;
    system("cls");
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
    cout<<"\t\t\t   Ingrese una opción [ ]\b\b";
    cin>>opcionCliente;
    system("cls");
    return opcionCliente;
}

int Mensaje::menuDepartamentos(){
    string clientes=tipoCliente();
    if(clientes!="invalido"){
        tituloCabecera();
        cout<<"\t\t\t-------------------------------------------"<<endl;
        cout<<"\t\t\t  Bienvenido(a) al Departamento de "<<clientes<<endl;
        cout<<"\t\t\t-------------------------------------------"<<endl;
        cout<<"\t\t\t 1- Camisas"<<endl;
        cout<<"\t\t\t 2- Pantalones"<<endl;
        cout<<"\t\t\t 3- Zapatos"<<endl;
        cout<<"\t\t\t 4- Sport"<<endl;
        cout<<"\t\t\t 5- Joyeria"<<endl;
        if(clientes=="Bebes"){
        cout<<"\t\t\t 6- Jugueteria"<<endl;
        }
        cout<<"\t\t\t----------------------------"<<endl;
        cout<<"\t\t\t Selecciones una opción [ ]\b\b";
        cin>>opcionDepartamentos;
        system("cls");
        return opcionDepartamentos;
    }
}

string Mensaje::tipoCliente(){
    tituloCabecera();
    switch(menuCliente()){
    case 1:
        return "Hombre";
        break;
    case 2:
        return "Mujer";
        break;
    case 3:
        return "Jovenes";
        break;
    case 4:
        return "Bebes";
        break;
    default:
        cout<<"\t\t\tOpción Invalida"<<endl;
        system("cls");
        return "invalido";
        break;
    }
}

bool Seguridad::menuLogeo(){
    cout<<"\t\t\t****************************"<<endl;
    cout<<"\t\t\tUsuario"<<endl;
    cout<<"\t\t\t-> ";
    cin>>usuario;
    cout<<"\t\t\tContraseña"<<endl;
    cout<<"\t\t\t-> ";
    contrasenia();
    cout<<endl;
    cout<<"\t\t\t****************************"<<endl;
    if(usuario==Usuario&&password==Password){
        cout<<"\t\t\tAdvertencia use esta herramienta con precaución"<<endl;
        cout<<"\t\t\tBienvenido "<<usuario<<endl;
        return true;
    }
    else{
        cout<<"\t\t\tUsuario o contraseña invalidos"<<endl;
        return false;
    }
}

string Seguridad::contrasenia(){
    char letra;
    letra=getch();
    password="";
    while(letra!=13){
        if(letra!=8){
            password.push_back(letra);
        }
        else{
            if(password.length()>0){
                cout<<"\b\b";
                password=password.substr(0, password.length()-1);
            }
        }
        letra=getch();
    }
    return password;
}



