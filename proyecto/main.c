
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

#define MAX_JUGADORES 50
#define NUM_DESAFIOS 30


 char desafios[NUM_DESAFIOS][256] = {
        // Sencillos
        "¿Cuánto es 2 + 2?",
        "¿Cuánto es 5 - 3?",
        "¿Cuánto es 10 / 2?",
        "¿Cuánto es 4 * 3?",
        "¿Cuánto es 6 + 7?",
        "¿Cuánto es 9 - 4?",
        "¿Cuánto es 8 * 1?",
        "¿Cuánto es 15 / 3?",
        "¿Cuánto es 3 + 3?",
        "¿Cuánto es 12 - 8?",
        // Intermedios
        "¿Cuánto es 12 * 3?",
        "¿Cuánto es 144 / 12?",
        "Resuelve: 5^2 (5 al cuadrado)",
        "¿Cuánto es 25 * 4?",
        "¿Cuál es el MCD de 12 y 18?",
        "¿Cuánto es (15 + 5) / 4?",
        "Resuelve: 3 * (6 + 4)",
        "¿Cuánto es la raíz cuadrada de 121?",
        "¿Cuánto es 10 * 10?",
        "¿Cuánto es 100 - (50 / 2)?",
        // Difíciles
        "Resuelve: 2^10 (2 elevado a la 10)",
        "¿Cuál es el factorial de 5?",
        "Resuelve: (25 + 35) * (2^3)",
        "¿Cuánto es 144 / (12 - 6)?",
        "¿Cuánto es la raíz cúbica de 27?",
        "Resuelve: 7! (factorial de 7)",
        "¿Cuánto es 1000 / (25 * 4)?",
        "¿Cuánto es 3^5 (3 elevado a la 5)?",
        "Resuelve: (6^2) + (8^2)",
        "¿Cuánto es el logaritmo base 10 de 1000?"
    };


    int respuestas[NUM_DESAFIOS] = {
        // Respuestas sencillos
        4, 2, 5, 12, 13, 5, 8, 5, 6, 4,
        // Respuestas intermedios
        36, 12, 25, 100, 6, 5, 30, 11, 100, 75,
        // Respuestas difíciles
        1024, 120, 480, 24, 3, 5040, 10, 243, 100, 3
    };

    // Definir rangos de índices
    int inicio_sencillos = 0, fin_sencillos = 9;
    int inicio_intermedios = 10, fin_intermedios = 19;
    int inicio_dificiles = 20, fin_dificiles = 29;


int indice_jugador = 0;

int puntuaciones_jugadores[MAX_JUGADORES];

char nombres_jugadores[MAX_JUGADORES][100];

void inicializar_jugadores()
{
	puntuaciones_jugadores[0] = 30;
	strcpy(nombres_jugadores[0], "JUAN");

	puntuaciones_jugadores[1] = 70;
	strcpy(nombres_jugadores[1], "ANA");

	puntuaciones_jugadores[2] = 80;
	strcpy(nombres_jugadores[2], "CARLOS");

	puntuaciones_jugadores[3] = 0;
	strcpy(nombres_jugadores[3], "LAURA");

	puntuaciones_jugadores[4] = 120;
	strcpy(nombres_jugadores[4], "MIGUEL");

	indice_jugador = 5;
}

void limpiar_pantalla()
{
	system("pause");
	system("cls");
}

int verificar_jugador_existe(char nombre[100])
{

	for (int i = 0; i < indice_jugador; i++)
	{
		if (strcmp(strupr(nombre), strupr(nombres_jugadores[i])) == 0)
		{
			return 1;
		}
	}

	return 0;
}

void mostrar_menu()
{
	printf("1) Registrar jugador \n");
	printf("2) Verificar puntuaciones \n");
	printf("3) Jugar \n");
	printf("4) Salir \n ");
}

void registrar_jugador()
{
	char nombre[100];

	while (1)
	{
		printf("\n Ingrese el nombre del jugador:  \n");
		scanf("%s", nombre);
		getchar();

		if (verificar_jugador_existe(nombre))
		{
			printf("\n El jugador ingresado ya existe \n");
			printf(" Ingrese un nombre valido ... \n");
		}
		else
		{
			return;
		}
	}

	strcpy(nombres_jugadores[indice_jugador], strupr(nombre));
	puntuaciones_jugadores[indice_jugador] = 0;

	indice_jugador++;

	printf("\n Jugador Registrado Exitosamente... \n");
}

void verificar_puntuaciones()
{

	char nombre[100];
	int posicion_jugador;

	generar_ranking();

	printf("\n Ingrese el nombre del jugador \n");

	scanf("%s", nombre);
	getchar();

	if (verificar_jugador_existe(nombre))
	{

		posicion_jugador = obtener_posicion_jugador(nombre);
		printf("\n Hola %s , tu puntuacion mas alta es : %d \n", nombre, puntuaciones_jugadores[posicion_jugador]);
		printf("\n Actualmente te encuentras en la posicion %d, del ranking \n", posicion_jugador + 1);
	}
	else
	{
		printf("\n No existe un jugador con ese nombre ... \n");
		posicion_jugador = -1;
	}

	imprimir_ranking(posicion_jugador);
}

int obtener_posicion_jugador(char nombre[100])
{
	for (int i = 0; i < indice_jugador; i++)
	{
		if (strcmp(strupr(nombre), nombres_jugadores[i]) == 0)
			return i;
	}
}


void jugar()
{
    char nombre [100];

    printf("\n Ingrese el nombre del jugador: ");
    scanf("%s", &nombre);
    getchar();

    if(verificar_jugador_existe(nombre)){
            Sleep(1000);
        system("cls");
        iniciar_partida();

    }
    else{
        printf("\n El jugador ingresado no existe \n");
        printf("\n Asegurese de registrarse primero \n");
    }



}

void iniciar_partida(){
    int numero_intentos = 0;
    int numero_acertijo = 1;

    int numeros_faciles = (rand() % 2) + 2;
    int numeros_intermedios = (rand() % 2) + 2;
    int numeros_dificiles = 8 - (numeros_faciles + numeros_intermedios);


    //Generar faciles
    for(int i=0;i<numeros_faciles;i++){
            printf("\n Numero de intentos fallidos %d / 3 \n", numero_intentos);
            printf("\n Numero de acertijo %d / 8 \n", numero_acertijo);

        if(generar_acertijo(0) == 0){
            numero_intentos++;
        }
        numero_acertijo++;

    }

    //Generar intermedios
    for(int i=0;i<numeros_intermedios;i++){
            printf("\n Numero de intentos fallidos %d / 3 \n", numero_intentos);
            printf("\n Numero de acertijo %d / 8 \n", numero_acertijo);

        if(generar_acertijo(1) == 0){
            numero_intentos++;
        }
        numero_acertijo++;

    }

    //Generar dificiles

        for(int i=0;i<numeros_dificiles;i++){
            printf("\n Numero de intentos fallidos %d / 3 \n", numero_intentos);
            printf("\n Numero de acertijo %d / 8 \n", numero_acertijo);

        if(generar_acertijo(2) == 0){
            numero_intentos++;
        }
        numero_acertijo++;

    }



}

int generar_acertijo(int tipo ){ // tipo = 0 (facil), tipo 1 (intermedio), tipo 2 (dificil)

    int random_index,respuesta;

    if(tipo ==0){
        random_index = inicio_sencillos + rand() % (fin_sencillos - inicio_sencillos + 1);
    }
    else if(tipo ==1){
        random_index = inicio_intermedios + rand() % (fin_intermedios - inicio_intermedios + 1);
    }

    else if(tipo ==2){
        random_index = inicio_dificiles + rand() % (fin_dificiles - inicio_dificiles + 1);
    }

    printf(desafios[random_index]);

    printf("\n Ingrese la respuesta del acertijo \n");
    scanf("%d", &respuesta);



    if(respuestas[random_index] == respuesta){

        printf("\n Respuesta correcta pasas al siguiente ejercicio... \n");

    Sleep(2000);
    system("cls");

        return 1;

    }
    else{

                  printf("\n Respuesta incorrecta... \n");

    Sleep(2000);
    system("cls");

        return 0;

    }



}

void despedida()
{
	printf("\n Muchas gracias por jugar \n");
}

void generar_ranking()
{

	int aux_puntuacion;
	char aux_nombre[100];

	for (int i = 0; i < indice_jugador; i++)
	{
		for (int j = i + 1; j < indice_jugador; j++)
		{

			if (puntuaciones_jugadores[i] < puntuaciones_jugadores[j])
			{

				strcpy(aux_nombre, nombres_jugadores[i]);
				aux_puntuacion = puntuaciones_jugadores[i];

				puntuaciones_jugadores[i] = puntuaciones_jugadores[j];
				strcpy(nombres_jugadores[i], nombres_jugadores[j]);

				puntuaciones_jugadores[j] = aux_puntuacion;
				strcpy(nombres_jugadores[j], aux_nombre);
			}
		}
	}
}

void imprimir_ranking(int indice_jugador_ranking)
{
	printf("\n RANKING \n");

	for (int i = 0; i < indice_jugador; i++)
	{
		if (indice_jugador_ranking != -1 && indice_jugador_ranking == i)
		{
			printf("%d. \033[1;32m%s\033[0m - \033[1;34m%d puntos\033[0m\n", i + 1, nombres_jugadores[i], puntuaciones_jugadores[i]);
		}

		else
		{
			printf("%d. %s - %d puntos\n", i + 1, nombres_jugadores[i], puntuaciones_jugadores[i]);
		}
	}
}

int main()
{

	int eleccion;

	inicializar_jugadores();
	srand(time(NULL));

	do
	{

		mostrar_menu();

		scanf("%d", &eleccion);

		switch (eleccion)
		{

		case 01:
			registrar_jugador();
			break;
		case 02:
			verificar_puntuaciones();
			break;
		case 03:
			jugar();
			break;
		case 04:
			despedida();
			break;
		default:
			printf("Has ingrado un numero de opcion no valida \n");
		}

		limpiar_pantalla();

	} while (eleccion >= 0 && eleccion <= 3);

	return 0;
}
