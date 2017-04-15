#include<iostream>
#include<fstream>

struct registroJugueteria{
    string codigo;
    string dimensiones;
    float peso;
    string materiales;
    string edadRecomendada;
    float precio;
    int cantidad;
};


ofstream fEscritura("TiendaJoyeria.dat", ios::out |ios::binary);
ifstream fLectura("TiendaJoyeria.dat", ios::out |ios::binary);

registroJugueteria entradaJt, salidaJt;
