

/*
Eso es un comentario de tipo
multilínea y no afecta en la ejecución
*/

// Este es un comentario de una sola línea

/* 
    Tipos de datos primitivos        Clave de impresión/lectura
        int -> entero                   %d, %i -> lectura
        float -> flotante/real          %f -> flotantes
        char -> caracter                %c -> caracter
        char[int] -> cadena             %s -> cadena
*/

#include <stdio.h> // Biblioteca para entrada de dados e saída de dados
#include <math.h> //Biblioteca para funciones matematicas

int main(void) { // Programa principal
  //Declarar variables de distinto tipo de dato
  int entero = 10;
  float flotante = 5.86;
  char caracter ='F'; //Comillas simples para un solo caracter
  char cadena[5] = "Mario"; //Comillas dobles para cadenas de caracteres

  //Visualizar valores de variables
  //Diagonl invertida n -> \n -> salto de linea

  printf("Numero entero: %d\n", entero);
  printf("Numero flotante: %f\n", flotante); 
  printf("Caracter: %c\n", caracter);
  printf("Dato cadena: %s\n", cadena);


    // Operadores aritméticos
    printf("\n---Operadores aritméticos---\n");
    printf("Suma = %d\n", entero + 8);
    printf("Resta = %d\n", entero - 3);
    printf("Multiplicación = %d\n", entero / 3);
    printf("División = %d\n", entero / 5);
    printf("Módulo = %d\n", entero % 2);
    int power = pow(entero, 2);
    printf("Potencia = %d\n", power);
    
    // Operadores relacionales
    int a = 9, b = 4, c = 2; 
    printf("\n---Operadores relacionales---\n");
    printf("%d mayor que %d = %d\n", b, a, b>a);
    printf("%d menor que %d = %d\n", b, c, b<c);
    printf("%d mayor o igual que %d = %d\n", a, c, a>=c);
    printf("%d menor o igual que %d = %d\n", c, b, c<=b);
    printf("%d igual a %d = %d\n", c, c, c==c);
    printf("%d diferente a %d = %d\n", a, a, a!=a);
  
  



  //Operadores logicos and -> && , or -> || , not -> !
  int op_and, op_or, op_not;
  op_and = 5 == 5 && 7>3 *2;
  op_or = 40 != pow(5,2) || 4 %2 == 0;
  op_not = !(3+7 >= 3*3);
  printf(" \n Operadores logicos \n");
  printf("Opérador AND: %d\n", op_and);
  printf("Operador OR: %d\n", op_or);
  printf("Operador NOT: %d\n", op_not);
  
  return 0; // Retorna un dato entero 0
}