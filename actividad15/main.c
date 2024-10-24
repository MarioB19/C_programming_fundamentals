#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 


int main() {




    /*
    //Ejercicio 1
    for(int i=1;i<=100;i++){
        if(i % 7 == 0) continue;

        printf("\n Numero: %d",i);
    }
    */



    /*

    //Ejercicio 2
    int numero, sum_divisores = 0;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    if(numero<0 || numero == 0)
    {
        printf("Estas mal pa");
        return 0;
    }


    for(int i=1;i<numero;i++){
        if(numero %i == 0){
            sum_divisores += i;
            
        }
    }

    if(sum_divisores == numero){
        printf("El numero %d es perfecto",numero);
    }    
    else{
         printf("El numero %d no es perfecto",numero);
    }



    */



    /*

    //Ejercicio 3

    for(int i=0;i<=26;i++){
        
        for(int j = 122-i;j>=97;j--){
            printf("%c", (char)j);
        }
        printf("\n");
    }

    */
    
    return 0;
}

