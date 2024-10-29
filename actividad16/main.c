//Mario Brandon Muro Ramos

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Biblioteca de funciones de cadenas


void imprimir_arreglo(int n, int arreglo[])
{

  for(int i=0; i<n; i++){
    printf("%d ,", arreglo[i]);
  }
  
}


void multiplicar_arreglo(int n, int arreglo1[], int arreglo2[]){

  int arreglo3 [10];

  for(int i=0;i<n;i++){
    arreglo3[i] = arreglo1[i] *arreglo2[i];
  }

  printf("\n \n Vector a partir del producto del Vector 1 y Vector 2\n ");
  
  imprimir_arreglo(n, arreglo3);
}

int main() {


  /*
  //Ejercicio 1

  int numero1 [10] = {4,5,24,12,17,2,4,5,6,7,};
  int numero2 [10] = {6,7,7,1,3,6,10,11,11,1,};

  printf("\n Vector 1 \n");
  imprimir_arreglo(10, numero1);
  printf("\n Vector 2 \n");
  imprimir_arreglo(10, numero2);

  multiplicar_arreglo(10, numero1, numero2);

  */


  /*

  //Ejercicio 2

  char cadena [] = "estructuras";
  int cont;

  for(int i=0;i<strlen(cadena);i++){
    printf("%c , ", cadena[i]);
  }

  printf("\n");

  for(int i=0;i<strlen(cadena);i++){
    cont = 0;

    for(int j=0;j<strlen(cadena);j++){

      if(cadena[i] == cadena[j]){
        cont++;
      }
      
    }
    printf("%d , " ,cont);
  }


  */


  /*
  //Ejercicio 3

  int cantidad_cadenas;

  printf("\n Ingrese la cantidad de cadenas a ingresar: ");
  scanf("%d", &cantidad_cadenas);

  char cadenas [cantidad_cadenas][100];


  for(int i=0;i<cantidad_cadenas;i++){
    printf("\n Ingrese la cadena %d : ", i+1);
    scanf("%s", cadenas[i]);
    fflush(stdin);
  }



  printf("\n Longitud de las cadenas \n");
  for(int i=0;i<cantidad_cadenas;i++){
    printf("\n %s : %d ", cadenas[i], (int) strlen(cadenas[i]));
   
  }

  
  */


  return 0;
}

