#include<fstream>
#include<iostream>

using namespace std;

struct Registro{
    int codigo;
    string nombreArticulo;
    string marca;
    string estiloArticulo;
    string talla;
    float precio;
    string color;
    int inventario;
};

Registro entrada, salida;

ofstream fEscritura("TiendaRopa.dat", ios::out |ios::binary);
ifstream fLectura("TiendaRopa.dat", ios::in | ios::binary);

void ingresoArticulos(){
    string bandera="S";
    while(bandera=="S"||bandera=="s"){
        if(fEscritura.is_open()){
            system("cls");
            cout<<"\t\t\t------------------------------------------------"<<endl;
            cout<<"\t\t\tIngrese el codigo del articulo: ";
            cin>>entrada.codigo;
            cout<<"\t\t\tIngrese el nombre del articulo: ";
            cin>>entrada.nombreArticulo;
            cout<<"\t\t\tIngrese la marca del articulo: ";
            cin>>entrada.marca;
            cout<<"\t\t\tIngrese el estilo del articulo: ";
            cin>>entrada.estiloArticulo;
            cout<<"\t\t\tIngrese la talla del articulo: ";
            cin>>entrada.talla;
            cout<<"\t\t\tIngrese el precio del articulo:  ";
            cin>>entrada.precio;
            cout<<"\t\t\tIngrese el color del articulo:  ";
            cin>>entrada.color;
            cout<<"\t\t\tIngrese la cantidad disponible: ";
            cin>>entrada.inventario;
            cout<<"\t\t\t-------------------------------------------------"<<endl;
            fEscritura.write(reinterpret_cast<char *>(&entrada), sizeof(Registro));
            cout<<"\t\t\tDesea seguir ingresado articulos? S/N"<<endl;
            cout<<"\t\t\tElija una opción [ ]\b\b";
            cin>>bandera;
        }
        else{
            cout<<"\t\t\tError al abrie el fichero"<<endl;
        }
    }
    fEscritura.close();
}

void lecturaArticulos(){
    fLectura.read(reinterpret_cast<char *>(&salida), sizeof(Registro));
    cout<<"\t\t\t"<<salida.codigo<<endl;
    cout<<"\t\t\t"<<salida.nombreArticulo<<endl;
    cout<<"\t\t\t"<<salida.marca<<endl;
    cout<<"\t\t\t"<<salida.estiloArticulo<<endl;
    cout<<"\t\t\t"<<salida.talla<<endl;
    cout<<"\t\t\t"<<salida.precio<<endl;
    cout<<"\t\t\t"<<salida.color<<endl;
    cout<<"\t\t\t"<<salida.inventario<<endl;
    system("pause");
    fEscritura.close();
}

void eliminarArticulo(){
}

void buscarArticulo(){
}

void modificarArticulo(){
}
