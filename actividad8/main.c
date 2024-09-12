/*
Integrantes
Mario Brandon Muro Ramos
Eduardo Roberto Quinio Perez

*/

#include <stdio.h>


int km, m, cm;

void  proceso (int);


void salida(int , char [20]);

int main() 
{   

    int input;

    printf("\n Ingrese la cantidad de cm a convertir: ");
    scanf("%d",&input);

    proceso(input);

    salida(km, "kilometro(s)");
    salida(m, "metro(s)");
    salida(cm, "centimetro(s)");

    return 0;
}

void proceso (int input)
{

    km = input / 100000;

    m = (input % 100000) /100;

    cm = (input % 100000) % 100;

}


void salida(int total, char denominacion [20]){
    printf("\n %d  %s ", total, denominacion);
}
