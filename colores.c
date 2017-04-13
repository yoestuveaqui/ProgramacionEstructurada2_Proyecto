#include<stdio.h>
#include<conio.h>

int main(){
    printf("\n Colores en C");

    //Colores para textos disponibles del 0 al 15
    //Funcion -> textcolor(int);

    printf("\n\n Colores para textos disponibles del 0 al 15");
    printf("\n Funcion -> textcolor(int);");

    textcolor(0);
    printf("\n Negro ");

    textcolor(1);
    printf("Azul ");

    textcolor(2);
    printf("Verde ");

    textcolor(3);
    printf("Celeste ");

    textcolor(4);
    printf("Rojo ");

    textcolor(5);
    printf("Morado ");

    textcolor(6);
    printf("Cafe ");

    textcolor(7);
    printf("Gris claro ");

    textcolor(8);
    printf("Gris oscuro ");

    textcolor(9);
    printf("Azul claro ");

    textcolor(10);
    printf("\n Verde claro ");

    textcolor(11);
    printf("Celeste claro ");

    textcolor(12);
    printf("Rojo claro ");

    textcolor(13);
    printf("Morado claro ");

    textcolor(14);
    printf("Amarillo ");

    textcolor(15);
    printf("Blanco ");

    //Colores para fondos de textos disponibles del 0 al 15
    //Funcion -> textbackground(int);

    printf("\n\n Colores para fondos de textos disponibles del 0 al 15");
    printf("\n Funcion -> textbackground(int);");

    textbackground(0);
    printf("\n Negro ");

    textbackground(1);
    printf("Azul ");

    textbackground(2);
    printf("Verde ");

    textbackground(3);
    printf("Celeste ");

    textbackground(4);
    printf("Rojo ");

    textbackground(5);
    printf("Morado ");

    textbackground(6);
    printf("Cafe ");

    textbackground(7);
    printf("Gris claro ");

    textbackground(8);
    printf("Gris oscuro ");

    textbackground(9);
    printf("Azul claro ");

    textbackground(10);
    printf("\n Verde claro ");

    textbackground(11);
    printf("Celeste claro ");

    textbackground(12);
    printf("Rojo claro ");

    textbackground(13);
    printf("Morado claro ");

    textbackground(14);
    printf("Amarillo ");

    textbackground(15);
    printf("Blanco ");

    //textcolor(0);
    //textbackground(15);
    //printf("\n\n Negro con blanco ");

    getche();
    return 0;
};
