/*
Integrantes
Mario Brandon Muro Ramos
Eduardo Roberto Quinio Perez

*/

#include <stdio.h>


void  proceso (int);


void salida(int , char [20]);

int main() 
{   

    int input;

    printf("\n Ingrese la cantidad de cm a convertir: ");
    scanf("%d",&input);

    proceso(input);


    return 0;
}

void proceso (int input)
{

    int km, m, cm;

    km = input / 100000;

    m = (input % 100000) /100;

    cm = (input % 100000) % 100;

    salida(km, "kilometro(s)");
    salida(m, "metro(s)");
    salida(cm, "centimetro(s)");


}


void salida(int total, char denominacion [20]){
    printf("\n %d  %s ", total, denominacion);
}
