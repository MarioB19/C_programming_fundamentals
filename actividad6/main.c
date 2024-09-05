#include "stdio.h"

int main()
{

    // case 01
    int op, codigo;
    float sum_cals = 0.0, aux_cals;
    char nombre[50];

    // case 02
    char origen[50], destino[50];
    float cantidad_km, costo_km;

    // case 03
    float cantidad_cm;

    //case 04
    float grados_celcius;



while(1){

    printf(" \n \n Que programa quiere correr :");
    scanf("%d", &op);

    switch (op)
    {

    case 01:

        printf("\n Ingresa tu nombre: ");
        scanf("%s", nombre);
        fflush(stdin);
        printf("\n Ingresa tu codigo: ");
        scanf("%d", &codigo);

        for (int i = 0; i < 5; i++)
        {

            printf("\n Ingrese la cal ");
            printf("%d \n", i + 1);

            scanf("%f", &aux_cals);

            sum_cals += aux_cals;
        }

        printf("\nTu nombre es %s, tu codigo es %d, tu promedio es %.2f", nombre, codigo, sum_cals / 5);

        break;

    case 02:

        printf("\n Ingresa tu origen: ");
        scanf("%s", origen);
        fflush(stdin);
        printf("\n Ingresa tu destino: ");
        scanf("%s", destino);
        fflush(stdin);

        printf("\n Ingrese la cantidad de km: ");
        scanf("%f", &cantidad_km);

        printf("\n Ingrese el costo por km: ");
        scanf("%f", &costo_km);

        printf("\nTu origen es %s, tu destino es %s, el  costo del boleto con iva es: %.2f", origen, destino, (cantidad_km * costo_km) * 1.16);

        break;

    case 03:

        printf("\n Ingrese la cantidad de cm ");
        scanf("%f", &cantidad_cm);

        printf("\n %.4f centimetros equivalen a: %.4f metros", cantidad_cm, cantidad_cm * 0.01);

        break;

    case 04:
        printf("\n Ingrese la cantidad de grados celcius ");
        scanf("%f", &grados_celcius);

        printf("\n %.4f grados celcius equivalen a : %.4f grados farenheit", grados_celcius, (grados_celcius*1.8) +32);

        break;





    default:

      printf("\n Dele pa afuera mi loco");

    }

    }

    return 0;
}