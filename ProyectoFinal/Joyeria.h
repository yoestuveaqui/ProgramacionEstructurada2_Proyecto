#include<iostream>
#include<fstream>

struct registroJoyeria{
    string codigo;
    string marca;
    string dimensiones;
    string estilo;
    string reajustable;
    string metal;
    string piedra principal;
    string tratamiento;
    string dureza;
    float precio;
    int cantidad;

};

ofstream fEscritura("TiendaJoyeria.dat", ios::out |ios::binary);
ifstream fLectura("TiendaJoyeria.dat", ios::out |ios::binary);

registroJoyeria entradaJ, saslidaJ;
