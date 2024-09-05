#include "stdio.h"
#include "math.h"

int main()
{


    while (1)
    {

        int op,var1,var2;

        printf(" \n \n Que programa quieres correr :");
        scanf("%d", &op);

        switch (op)
        {

        case 01:
        {

            char nombre[70] = "Mario Brandon Muro Ramos";
            int edad = 19;
            char universidad[70] = "Universidad de Guadalajara";
            int codigo = 224778908;
            int semestre = 1;
            char carrera[50] = "Ingenieria informatica";

            printf("Hola Mundo mi nombre es %s tengo %d anios, estudio en %s la carrera de %s, actualmente curso el semestre %d y mi codigo de alumno es %d", nombre, edad, universidad, carrera, semestre, codigo);

            break;
        }

        case 02:
     
             var1 = 19;
             var2 = 7;
            printf("\n La suma de %d + %d es : %d", var1, var2, var1 + var2);
            printf("\n La resta de %d - %d es : %d", var1, var2, var1 - var2);
            printf("\n La multiplicacion de %d * %d es : %d", var1, var2, var1 * var2);
            printf("\n La division de %d / %d es : %.2f", var1, var2, (float)var1 / var2); // casteo :)
            printf("\n El modulo de %d %% %d es : %d", var1, var2, var1 % var2);
            printf("\n El cubo de %d es : %.2f", var1, pow(var1, 3));
            printf("\n El cubo de %d es : %.2f", var2, pow(var2, 3));

            break;
        

        case 03:
        
        
           var1 = 19;
            var2 = 17;

            printf("\n  %d == %d : %d", var1, var2, var1 == var2);
            printf("\n  %d != %d : %d", var1, var2, var1 != var2);
            printf("\n  %d > %d : %d", var1, var2, var1 > var2);
            printf("\n  %d < %d : %d", var1, var2, var1 < var2);
            printf("\n  %d >= %d : %d", var1, var2, var1 >= var2);
            printf("\n  %d <= %d : %d", var1, var2, var1 <= var2);
        

            break;

        

        case 04:
         var1 = 19;
         var2 = 17;

         printf("Operacion 1:  %d \n", !(var1-5 >=var2+9 && var2!=var1));
         
         printf("Operacion 2 : %d \n", var2 * 5 < var1 /3 || !(var1 == pow(var2,2)));



            break;

      
        default:

            printf("\n Dele pa afuera");
        }
    }

    return 0;
}