// Mario Brandon Muro Ramos

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificar_numero_positivo(int numero);

int verificar_numero_mayor1(int numero);

int verificar_numero_primo_while(int numero);

int verificar_numero_primo_for(int numero);

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();
void ejercicio11();
void ejercicio12();
void ejercicio13();
void ejercicio14();
void ejercicio15();

int main()
{

    //ejercicio1();

    // ejercicio2();

    // ejercicicio3();

    // ejercicio4();

    // ejercicio5();

    // ejercicio6();

    // ejercicio7();

    // ejercicio8();

    // ejercicio9();

    // ejercicio10();

    // ejercicio11();

    // ejercicio12();

    // ejercicio13();

    // ejercicio14();

    // ejericicio15();

    return 0;
}

int verificar_numero_positivo(int numero) { return (numero > 0) ? 1 : 0; }

int verificar_numero_mayor1(int numero) { return (numero > 1) ? 1 : 0; }

int verificar_numero_primo_while(int numero)
{

    int divisores = 0, aux = 1;

    int limite = sqrt(numero);
    while (aux <= limite)
    {
        if (numero % aux == 0)
        {
            divisores++;
            if (aux != numero / aux)
            {
                divisores++;
            }
        }
        aux++;
    }

    if (divisores == 2)
    {
        return 1;
    }

    return 0;
}

int verificar_numero_primo_for(int numero)
{

    int divisores = 0;
    int limite = sqrt(numero);

    for (int aux = 1; aux <= limite; aux++)
    {
        if (numero % aux == 0)
        {
            divisores++;
            if (aux != numero / aux)
            {
                divisores++;
            }
        }
    }

    if (divisores == 2)
    {
        return 1;
    }

    return 0;
}

void ejercicio1()
{
    int numero;
    printf("Ingrese un numero entero: ");

    scanf("%d", &numero);

    while (numero >= 0)
    {
        printf("\n %d", numero);
        numero -= 2;
    }
}

void ejercicio2()
{
    int numero, aux, fact = 1;
    printf("\n Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    if (verificar_numero_positivo(numero))
    {
        aux = numero;

        while (numero > 0)
        {
            fact *= numero;
            numero--;
        }
        printf("El factorial de %d es %d", aux, fact);
    }
    else if (numero == 0)
    {
        printf("El factorial de 0 es 1");
    }
    else
    {
        printf("\n El numero debe ser positivo");
    }
}

void ejercicio3()
{
    int numero;
    printf("\n Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    if (verificar_numero_positivo(numero))
    {
        printf("La conjetura de ULAM para el numero %d es: ", numero);

        while (1)
        {
            printf("\n %d", numero);

            if (numero == 1)
            {
                break;
            }

            (numero % 2 == 0) ? numero /= 2 : (numero = numero * 3 + 1);
        }
    }
    else
    {
        printf("El numero debe ser positivo");
    }
}

void ejercicio4()
{

    int numero;
    printf("\n Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (verificar_numero_mayor1(numero))
    {

        if (verificar_numero_primo_while(numero))
        {
            printf("El numero %d es primo", numero);
        }
        else
        {
            printf("El numero %d NO es primo", numero);
        }
    }
    else
    {
        printf("\n El numero tienen que ser mayor a 1");
    }
}

void ejercicio5()
{
    int termino, aux = 0, fib_ant1, fib_ant2;
    printf("\n Ingrese hasta que termino de fibonacci: ");
    scanf("%d", &termino);

    if (verificar_numero_positivo(termino))
    {

        while (aux < termino)
        {

            if (aux == 0)
            {
                fib_ant1 = 0;
                fib_ant2 = 0;
            }

            else if (aux == 1)
            {
                fib_ant1 = 1;
                fib_ant2 = 0;
            }
            else
            {

                fib_ant1 = fib_ant1 + fib_ant2;
                fib_ant2 = fib_ant1 - fib_ant2;
            }

            printf("\n %d", fib_ant1);

            aux++;
        }
    }
    else
    {
        printf("El numero debe ser positivo");
    }
}

void ejercicio6()
{

    int numero, cont = 0, aux;
    printf("\n Ingrese un numero entero: ");
    scanf("%d", &numero);

    aux = numero;

    do
    {
        numero /= 10;
        cont++;

    } while (numero > 0);

    printf("El numero %d tiene %d digitos", aux, cont);
}

void ejercicio7()
{

    int cont = 1;
    int numero = 0;

    srand(time(NULL));
    int aleatorio = (rand() % 20) + 1;

    do
    {

        printf("\n \n Ingrese un numero entero, intento %d/5: ", cont);

        scanf("%d", &numero);

        if (numero > aleatorio)
        {
            printf("\n El numero que ingreso es mayor al escondido");
        }
        else if (numero == aleatorio)
        {
            printf("\n Felicidades lo lograste en %d intentos", cont);
            return;
        }
        else
        {
            printf("\n El numero que ingreso es menor al escondido");
        }

        cont++;

    } while (cont <= 5);

    printf("\n \n Suerte para la proxima, el numero era %d", aleatorio);
}

void ejercicio8()
{

    int numero1, numero2, limite, cont = 0, mcd;
    printf("\n Ingrese el primer numero: ");
    scanf("%d", &numero1);

    printf("\n Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    if (verificar_numero_positivo(numero1) &&
        verificar_numero_positivo(numero2))
    {

        int limite = numero1 > numero2 ? numero1 : numero2;

        cont = limite;
        do
        {
            if (numero1 % cont == 0 && numero2 % cont == 0)
            {
                mcd = cont;
                break;
            }

            cont--;

        } while (cont > 0);

        printf("El maximo comun divisor de %d y %d es %d", numero1, numero2, mcd);
    }
    else
    {
        printf("Los numeros deben ser positivos");
    }
}

void ejercicio9()
{

    int numero, impares = 0, pares = 0, aux;
    printf("\n Ingrese un numero entero positivo: ");
    scanf("%d", &numero);
    aux = numero;

    if (verificar_numero_positivo(numero))
    {

        do
        {
            if ((numero % 10) % 2 == 0)
            {
                pares++;
            }
            else
            {
                impares++;
            }

            numero /= 10;

        } while (numero > 0);

        printf("El numero %d tiene %d digitos pares y %d digitos impares", aux,
               pares, impares);
    }
    else
    {
        printf("El numero debe ser positivo");
    }
}

void ejercicio10()
{

    int numero, cont = 1;
    printf("\n Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (verificar_numero_positivo(numero))
    {

        printf("Los divisores de %d son: \n ", numero);

        do
        {

            if (numero % cont == 0)
            {
                printf("%d ", cont);
            }

            cont++;

        } while (cont <= numero);
    }
    else
    {
        printf("El numero debe ser un entero positivo");
    }
}

void ejercicio11()
{
    int cont_primos = 0, cont = 2;

    printf("Los primeros 20 numeros primos son: \n");

    for (;;)
    {
        if (cont_primos == 20)
        {
            break;
        }

        if (verificar_numero_primo_for(cont))
        {
            printf("%d , ", cont);
            cont_primos++;
        }

        cont++;
    }
}

void ejercicio12()
{
    int numero1, numero2, limite, cont = 0, mcd;
    printf("\n Ingrese el primer numero: ");
    scanf("%d", &numero1);

    printf("\n Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        printf("El numero 2 tiene que ser mayor que el numero 1");
        return;
    }

    if (verificar_numero_positivo(numero1) &&
        verificar_numero_positivo(numero2))
    {

        printf("\n Los primos entre %d y %d son: \n ", numero1, numero2);

        for (int i = numero1; i <= numero2; i++)
        {
            if (verificar_numero_primo_for(i))
            {
                printf("%d , ", i);
            }
        }
    }

    else
    {
        printf("Los numeros deben ser positivos");
    }
}

void ejercicio13()
{

    srand(time(NULL));

    int MAX_CALIFICACIONES = 24, num_aprobados = 0, num_rebrobados = 0, cal_total = 0, cal_mayor, cal_menor;

    printf("\n Las calificaciones son las siguientes: \n");

    for (int i = 0; i < MAX_CALIFICACIONES; i++)
    {

        int aleatorio = (rand() % 100);

        if (i == 1)
        {
            cal_mayor = aleatorio;
            cal_menor = aleatorio;
        }

        printf("%d , ", aleatorio);

        // Procesos
        (aleatorio > 60) ? num_aprobados++ : num_rebrobados++;
        cal_total += aleatorio;

        if (cal_menor > aleatorio)
        {
            cal_menor = aleatorio;
        }

        if (cal_mayor < aleatorio)
        {
            cal_mayor = aleatorio;
        }
    }

    printf("\n \n ----------------------------------- \n \n");

    printf("La calificacion promedio del grupo fue de: %d \n", cal_total / MAX_CALIFICACIONES);
    printf("Hay %d alumnos aprobados y %d reprobados \n", num_aprobados, num_rebrobados);
    printf("La mayor calificacion fue de %d y la menor de %d \n", cal_mayor, cal_menor);
}

void ejercicio14()
{

    int filas;
    printf("\n Ingrese la cantidad de filas que quiere visualizar en el triangulo: ");
    scanf("%d", &filas);

    if (verificar_numero_positivo(filas))
    {

        for (int i = 1; i <= filas; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
            printf("\n");
        }
    }
    else
    {
        printf("La cantidad de filas debe ser positiva");
    }
}

void ejercicio15()
{
    int terminos, sum = 0, aux;
    printf("\n Ingrese la cantidad de terminos: ");
    scanf("%d", &terminos);

    if (verificar_numero_positivo(terminos))
    {

        printf("La serie para %d terminos es: \n", terminos);

        for (int i = 0; i < terminos; i++)
        {
            aux = 0;

            for (int j = 0; j <= i; j++)
            {
                printf("1");
                aux += pow(10, j);
            }

            sum += aux;

            if (i != terminos - 1)
                printf(" + ");
        }

        printf("\n La suma total es: %d", sum);
    }
    else
    {
        printf("La cantidad de terminos debe ser positiva");
    }
}