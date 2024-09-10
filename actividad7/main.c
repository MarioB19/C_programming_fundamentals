/*
    Para devolver un valor en C es necesario indicar el tipo de dato que se retonará.

        void -> No devuelve ningún valor
        char -> Devuelve un valor de tipo caracter
        int -> Devuelve un valor de tipo entero
        float -> Devuelve un valor de tipo flotante


Mario Brandon Muro Ramos
*/

#include <stdio.h>
/*Una Variable global se encuentra por 
fuera de cualquier función o estructura*/
int global = 100;

//Función sin paso de parámetros y sin retorno de valores
void saludar()//void -> valor nulo (no retorno)
{
    printf("\n¡Hola mundo!");
}

//Función con paso de parámetros y sin retorno de valores
void saludar2(char nombre[])
{
    printf("\nHola %s, ¡Bienvenido!", nombre);
}

//Función sin paso de parámetros y retorno de valores
int suma()
{
    int a, b, resultado; //Variables locales
    printf("\nIngresa el valor de a: ");
    scanf("%d", &a);
    printf("Ingresa el valor de b: ");
    scanf("%d", &b);
    resultado = a + b;
    return resultado; //Devuelve un valor entero
}

//Función con paso de parámetros y retorno de valores
int suma2(int a, int b)
{
    return a+b;    
}

//Función con paso de parámetros y sin retorno de valores
void suma3(int a, int b)
{
   printf("\n%d + %d = %d", a, b, a+b);
}

//Función sin paso de parámetros y sin retorno de valores
void variables(){
    int codigo = 2965324; //Variable local
    global = 1; //Actualizo el valor de la variable global
    printf("\nValor de la variable local = %d\n", codigo); //Impresión variable local
    printf("Valor actual de la variable global = %d", global);
}

int main() //Función principal
{   
    /*
    //Ejemplo 1
    printf("Funcion sin parametros y sin retorno");
    saludar(); //Llamado directo a función sin parámetros
    */

    /*
    //Ejemplo 2
    printf("Funcion con parametros y sin retorno");
    saludar2("Mario Muro"); //Llamado directo a función con parámetros
    */


    /*
    //Ejemplo 3
    printf("Funcion sin parametros y con retorno");
    int resultado = suma();//Llamado a función sin parámetros con retorno en una variable
    printf("\nSuma = %d", resultado);
    */


    //Ejemplo 3.1
    printf("Funcion sin parametros y con retorno");
    printf("\nSuma = %d", suma()); //Llamado a función sin parámetros con retorno en printf()


    /*
    //Llamado Ejemplo 4
    printf("--- Ejemplo 4: Funcion con parametros y con retorno ---\n");
    printf("\nSuma = %d", suma2(15, 28)); //Llamado a función con parámetros y con retorno en printf()
    printf("\n\n-------------------------------------------------------\n\n");
    */

    
/*
    //Ejemplo 5
    printf("Funcion con parametros y sin retorno");
    suma3(17,4);//Llamado a función con parámetros y con retorno directo
    suma3(75,104);
    suma3(587,12);
    */
  

    //Ejemplo 6
    printf("Variable global");
    printf("\nValor inicial de la variable global = %d\n", global); //Imprimir valor de variable global
    global = 92; //Cambiar el valor de la variable global
    printf("Variable actual de la variable global = %d", global); //Imprimir valor de variable global
    variables(); //Llamado a función sin parámetros y sin retorno

    
    printf("\nSaliendo del programa...");
    return 0;
}