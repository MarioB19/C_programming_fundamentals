
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

#define MAX_JUGADORES 50 // Maximo de jugadores defenido en 50 por default
#define NUM_DESAFIOS 30 //10 faciles, 10 intermedios, 10 dificiles

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
	"¿Cuánto es el logaritmo base 10 de 1000?"};

int respuestas[NUM_DESAFIOS] = {
	// Respuestas sencillos
	4, 2, 5, 12, 13, 5, 8, 5, 6, 4,
	// Respuestas intermedios
	36, 12, 25, 100, 6, 5, 30, 11, 100, 75,
	// Respuestas difíciles
	1024, 120, 480, 24, 3, 5040, 10, 243, 100, 3};

// Definir rangos de índices
int inicio_sencillos = 0, fin_sencillos = 9;
int inicio_intermedios = 10, fin_intermedios = 19;
int inicio_dificiles = 20, fin_dificiles = 29;


//Variables globales para el funcionamiento del juego
int indice_jugador = 0;
int puntuaciones_jugadores[MAX_JUGADORES];
char nombres_jugadores[MAX_JUGADORES][100];



void inicializar_jugadores(); //Inicializa jugadores con nombres determinados


int verificar_jugador_existe(char nombre[100]);
// Permite verificar si un nombre ya esta registrado (Devuelve 1 si existe y 0 si no existe)


//Funciones esteticas con arte ascii y printf
void imprimir_encabezado();
void imprimir_ascii_registrar();
void imprimir_ascii_ranking();
void imprimir_ascii_acertijos();
void imprimir_ascii_facil();
void imprimir_ascii_intermedio();
void imprimir_ascii_dificil();
void imprimir_ascii_puntuaciones();
void imprimir_ascii_error();
void mostrar_menu();
void despedida();
void limpiar_pantalla(); //se abstrae la logica de limpiar pantalla en una funcion
void imprimir_ranking(int indice_jugador_ranking); //se imprime el ranking, resaltando la posicion del jugador que se busca


//Funcion para registrar jugador
void registrar_jugador();


//Funciones para ver puntuaciones

void verificar_puntuaciones(); //Funcion general para ver las puntuaciones
int obtener_posicion_jugador(char nombre[100]); //Devuelve posicion del jugador en el ranking
void generar_ranking(); // Se genera/actualiza el ranking



//Funciones juego

void jugar(); //Esta es la funcion inicial del juego
void iniciar_partida(char nombre[100]); //Esta funcion permite que inicie la partida
void actualizar_puntuacion(char nombre[100], int puntuacion);// Actualiza la puntuacion de un jugador, siempre y cuando se maneor a la actual
int obtener_puntaje(int numero_intentos, int acertijos_correctos, int puntaje); //se obtiene el puntaje con el multiplicador
int generar_acertijo(int tipo); //Genera un acertijo de forma aleatoria dependiendo del tipo, tipo = 0 (facil), tipo 1 (intermedio), tipo 2 (dificil)
//Devuelve 1 si la respuesta fue correcta, 0 si la respuesta fue incorrecta




int main()
{
	system("chcp 65001 > nul"); //Permite configurar la terminal para caracteres espciales

	int eleccion; //Guarda la opcion que ingresa el usuario en el menu

	inicializar_jugadores(); //Carga los jugadores predefinidos

	srand(time(NULL)); //Inicializar semilla

	do
	{
		mostrar_menu(); //Se muestra el menu de forma repetida

		scanf("%d", &eleccion);

		system("cls");

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
		    //En caso que ingrese un valor no considerado en las opciones se muestra un mensaje.
			imprimir_ascii_error();
			printf(" \n Has ingresado un numero de opcion no valida \n");
		}

		limpiar_pantalla(); //se limpia la pantala en cada iteracion

	} while (eleccion != 4); //se repetira, siempre y cuando no se ingrese 4 (salir)

	return 0;
}




void inicializar_jugadores()
{
    //5 jugadores, con puntuaciones por default
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

	indice_jugador = 5; //esto es la cantidad de jugadores que se ingresaron por default
}



int verificar_jugador_existe(char nombre[100]) //Devuelve 1 si el jugador ya esta registrado, 0 si no esta registrado
{
	for (int i = 0; i < indice_jugador; i++)
	{
		if (strcmp(strupr(nombre), strupr(nombres_jugadores[i])) == 0) //Comparar si el nombre de un jugador ya existe (mayusculas = minusculas)
		{
			return 1;
		}
	}

	return 0;
}


//Funcion para registrar un jugador
void registrar_jugador()
{
	char nombre[100];

	while (1) // se repite infinatamente
	{
		imprimir_ascii_registrar();
		printf("\n Ingrese el nombre del jugador: ");
		scanf("%s", nombre);
		getchar();

		if (verificar_jugador_existe(nombre)) //verifica que el nombre ingresado, no exista previamente
		{
			printf("\n El jugador ingresado ya existe \n");
			printf(" Ingrese un nombre diferente ... \n \n");
			limpiar_pantalla();
		}
		else
		{
			break; //se rompe hasta que se ingrese un nombre que no exista
		}
	}

	strcpy(nombres_jugadores[indice_jugador], strupr(nombre)); //se guarda el nombre del nuevo jugador en mayusculas
	puntuaciones_jugadores[indice_jugador] = 0; // se inicializa su puntuacion en 0

	indice_jugador++; //se aumenta la cantidad de jugadores actuales

	printf("\n Jugador Registrado Exitosamente... \n \n");
}




void verificar_puntuaciones() //Funcion principal que hace la gestion de las puntuaciones
{
	char nombre[100];
	int posicion_jugador; //variable para obtener la posicion de un jugador en el ranking

	imprimir_ascii_ranking();

	generar_ranking(); //se actualiza/genera el ranking

	printf("\n Ingrese el nombre del jugador: ");

	scanf("%s", nombre);
	getchar();

	if (verificar_jugador_existe(nombre)) //si el jugador existe se muestra su posicion en el ranking.
	{
		posicion_jugador = obtener_posicion_jugador(nombre); //se obtiene la posicion de un jugador en el ranking dependiendo de su nombre

		printf("\n Hola %s , tu puntuacion mas alta es : %d \n", nombre, puntuaciones_jugadores[posicion_jugador]);
		printf("\n Actualmente te encuentras en la posicion %d, del ranking \n \n", posicion_jugador + 1);
	}
	else
	{
	    //Si el jugador no existe se mostrara el ranking, pero sin resaltar un nombre.
		printf("\n No existe un jugador con ese nombre ... \n \n");
		posicion_jugador = -1;
	}

	imprimir_ranking(posicion_jugador); //Imprime el ranking
}



int obtener_posicion_jugador(char nombre[100]) //retorna la posicion de un jugador en el ranking
{
	for (int i = 0; i < indice_jugador; i++)
	{
		if (strcmp(strupr(nombre), nombres_jugadores[i]) == 0) // se compara el nombre del jugador con el ranking, sin importar mayusculas y minusculas.
			return i;
	}
}

void generar_ranking() //Funcion que permita ordenar los nombres de los jugadores dependiendo de sus puntuaciones
{
	int aux_puntuacion;
	char aux_nombre[100];


	// Permite recorrer las puntuaciones para ordenarlas de mayor a menor, ademas de tambien ordenar los nombres
	for (int i = 0; i < indice_jugador; i++)
	{
		for (int j = i + 1; j < indice_jugador; j++)
		{

			if (puntuaciones_jugadores[i] < puntuaciones_jugadores[j]) // si la puntuacion es menor que la siguiente, se recorre y se intercambia
			{

			//se guarda en variables auxiliares el nombre y la puntuacion del jugador, para hacer el intercambio
				strcpy(aux_nombre, nombres_jugadores[i]);
				aux_puntuacion = puntuaciones_jugadores[i];

            //se hace el intercambio de los nombres y puntuaciones, generando que siempre la puntuacion mas alta quede al inicio, ademas de igual forma el nombre
				puntuaciones_jugadores[i] = puntuaciones_jugadores[j];
				strcpy(nombres_jugadores[i], nombres_jugadores[j]);

				puntuaciones_jugadores[j] = aux_puntuacion;
				strcpy(nombres_jugadores[j], aux_nombre);
			}
		}
	}
}



//Funcion que gestiona el juego
void jugar()
{
	char nombre[100]; //nombre del jugador que empezara la partida

	imprimir_ascii_acertijos();

	printf("\n Ingrese el nombre del jugador: ");
	scanf("%s", &nombre);
	getchar();

	if (verificar_jugador_existe(nombre)) // si el jugador existe, se le da inicio a la partida
	{
		Sleep(1000);
		system("cls");
		iniciar_partida(nombre); //se inicia la partida, con el nombre del jugador que se ingreso
	}
	else
	{
	    //si el jugador no existe, se la da salida y se le invita a registrarse
		printf("\n El jugador ingresado no existe \n");
		printf("\n Asegurese de registrarse primero \n");
	}
}



//Esta hace la gestion de la partida como tal, mostrando los 8 ejercicios, numero de intentos y numero de ejercicios es como la plantilla
void iniciar_partida(char nombre[100])
{
	int numero_intentos = 0; // se inicializa el nuero de
	int numero_acertijo = 1; //numero de acertijo actual
	int tipo = 0; // se inicializa el tipo de ejericio que se hara en facil (0)

	int puntaje = 0; //variable para guardar el puntaje

	int acertijos_correctos = 0; //variable para guardar la cantidad de acertijos correctos

	int numeros_faciles = (rand() % 2) + 2; //se genera de forma aleatoria el numero de acertijos faciles (2 a 3)
	int numeros_intermedios = (rand() % 2) + 2; // se genera de forma aleatoria el numero de acertijos intermedios (2 a 3)
	int numeros_dificiles = 8 - (numeros_faciles + numeros_intermedios); //se obtiene la cantidad de dificiles, siendo el complemento de los faciles e intermedios

	while (numero_acertijo <= 8) //se ejecuta el ciclo hasta que se muestren 8 ejercicios
	{
		if (numero_intentos == 3) //si la persona llega a 3 intentos, se rompe el ciclo ya que perdio el juego
		{
			printf("\n Numero de intentos fallidos %d / 3 \n", numero_intentos);
			printf("\n Alcanzaste el maximo de intentos \n");

			break;
		}

		//se muestra el numero de intentos fallidos y el numero de acertijo
		printf("\n Numero de intentos fallidos %d / 3 \n", numero_intentos);
		printf("\n Numero de acertijo %d / 8 \n", numero_acertijo);

		//Dependiendo del numero de acertijo se define la dificultad del ejercicio que se generara
		if (numero_acertijo <= numeros_faciles)
		{
			tipo = 0; // facil
		}
		else if (numero_acertijo <= numeros_faciles + numeros_intermedios)
		{
			tipo = 1; //intermedio
		}
		else
		{
			tipo = 2; //dificil
		}

		if (generar_acertijo(tipo) == 0) //se genera el ejercicio segun la dificultad
		{
			numero_intentos++; // si la respuesta es incorrecta se incrementa el numero de intentos
		}
		else
		{
			acertijos_correctos++; // si la respuesta es correcta se incrementa el numero de acertijos correctos


			//dependiendo del tipo de ejercicio correcto se le suma la cantidad correspondiente al puntaje
			if (tipo == 0)
			{
				puntaje += 10;
			}
			else if (tipo == 1)
			{
				puntaje += 20;
			}
			else if (tipo == 2)
			{
				puntaje += 30;
			}
		}

		numero_acertijo++; //se aumenta el numero de acertijo sin importa si respondio bien o mal
	}

	puntaje = obtener_puntaje(numero_intentos, acertijos_correctos, puntaje); //se obtiene el puntaje, con sus potencializadores dependiendo de acertijos correctos y numero de intentos
	actualizar_puntuacion(nombre, puntaje); //se llama a la funcion de actualizar puntaje

	Sleep(1000);
	system("cls");

	//se muestran los resultados que obtuvo el jugador
	imprimir_ascii_puntuaciones();
	printf("\n En total acertaste %d / 8 \n", acertijos_correctos);
	printf("\n Tu puntuacion final es : %d \n \n", puntaje);
}


void actualizar_puntuacion(char nombre[100], int puntuacion)
{
	for (int i = 0; i < indice_jugador; i++)
	{
		if (strcmp(strupr(nombre), strupr(nombres_jugadores[i])) == 0)  //se obtiene el indice del jugador por su nombre, sin importar masyusculas o minusculas.
		{

			if (puntuaciones_jugadores[i] < puntuacion) //solo se actualiza la puntuacion siempre y cuando la puntuacion que obtuvo sea mayor a la que tiene actualmente
			{
				puntuaciones_jugadores[i] = puntuacion; //actualiza la puntuacion
				return; //sale del ciclo
			}
		}
	}
}


int obtener_puntaje(int numero_intentos, int acertijos_correctos, int puntaje) //Funcion que retorna el puntaje potenciado, dependiendo del numero de intentos y acertijos correctos
{

	if (numero_intentos == 0)
	{
		return puntaje * 2;
	}
	else if (numero_intentos == 1)
	{
		return puntaje + 30;
	}
	else if (numero_intentos == 2)
	{
		return puntaje + 25;
	}
	else if (numero_intentos == 3)
	{

		switch (acertijos_correctos)
		{
		case 7:
			return puntaje + 20;
		case 6:
			return puntaje + 15;
		case 5:
			return puntaje + 10;
		case 4:
			return puntaje - 5;
		case 3:
			return puntaje - 10;
		case 2:
			return puntaje - 15;
		case 1:
			return 1;
		}
	}
}

int generar_acertijo(int tipo) // tipo = 0 (facil), tipo 1 (intermedio), tipo 2 (dificil)
{

	int random_index, respuesta;

	if (tipo == 0) // acertijo facil
	{
	    //se obtiene la posicion de un acertijo facil de forma aleatoria
		random_index = inicio_sencillos + rand() % (fin_sencillos - inicio_sencillos + 1);
		imprimir_ascii_facil();
	}
	else if (tipo == 1) //acertijo intermedio
	{
	    //se obtiene la posicion de un acertijo intermedio de forma aleatorio
		random_index = inicio_intermedios + rand() % (fin_intermedios - inicio_intermedios + 1);
		imprimir_ascii_intermedio();
	}

	else if (tipo == 2) //acertijo intermedio
	{
	    //se obtiene la posicion de un acertijo dificil de forma aleatoria
		random_index = inicio_dificiles + rand() % (fin_dificiles - inicio_dificiles + 1);
		imprimir_ascii_dificil();
	}

	printf(desafios[random_index]); //se imprime el desafio

	printf("\n Ingrese la respuesta del acertijo: ");
	scanf("%d", &respuesta); // el usuario ingresa la respuesta

	if (respuestas[random_index] == respuesta) //si la respuesta del usuario coincide con la del acertijo, se retorna 1
	{

		printf("\n Respuesta correcta ... \n");

		Sleep(1500);
		system("cls");

		return 1;
	}
	else //si la respuesta del usuario no coincide con la del acertijo se retorna 0
	{

		printf("\n Respuesta incorrecta... \n");

		Sleep(1500);
		system("cls");

		return 0;
	}
}


void mostrar_menu()
{

	imprimir_encabezado();

	printf("\n");
	printf("Seleccione una opción:\n\n");

	printf("  [1] Registrar jugador\n");
	printf("  [2] Verificar puntuaciones\n");
	printf("  [3] Jugar\n");
	printf("  [4] Salir\n");

	printf("\n========================================\n");
	printf("Ingrese su opción: ");
}

void imprimir_encabezado()
{
	system("cls");
	system("color 0E");
	printf("\n ------------------------------------------------------------------------------------ \n");
	printf("  ██╗      ██████╗ ███████╗     ██████╗ ██████╗ ██████╗ ███████╗██████╗ ███████╗\n");
	printf("  ██║     ██╔═══██╗██╔════╝    ██╔════╝██╔═══██╗██╔══██╗██╔════╝██╔══██╗██╔════╝\n");
	printf("  ██║     ██║   ██║███████╗    ██║     ██║   ██║██║  ██║█████╗  ██████╔╝███████╗\n");
	printf("  ██║     ██║   ██║╚════██║    ██║     ██║   ██║██║  ██║██╔══╝  ██╔══██╗╚════██║\n");
	printf("  ███████╗╚██████╔╝███████║    ╚██████╗╚██████╔╝██████╔╝███████╗██║  ██║███████║\n");
	printf("  ╚══════╝ ╚═════╝ ╚══════╝     ╚═════╝ ╚═════╝ ╚═════╝ ╚══════╝╚═╝  ╚═╝╚══════╝\n");
	printf("\n ------------------------------------------------------------------------------------ \n \n \n");
	;
}


void imprimir_ascii_registrar()
{

	printf("██████╗ ███████╗ ██████╗ ██╗███████╗████████╗██████╗  █████╗ ██████╗ \n");
	printf("██╔══██╗██╔════╝██╔════╝ ██║██╔════╝╚══██╔══╝██╔══██╗██╔══██╗██╔══██╗\n");
	printf("██████╔╝█████╗  ██║  ███╗██║███████╗   ██║   ██████╔╝███████║██████╔╝\n");
	printf("██╔══██╗██╔══╝  ██║   ██║██║╚════██║   ██║   ██╔══██╗██╔══██║██╔══██╗\n");
	printf("██║  ██║███████╗╚██████╔╝██║███████║   ██║   ██║  ██║██║  ██║██║  ██║\n");
	printf("╚═╝  ╚═╝╚══════╝ ╚═════╝ ╚═╝╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝\n");
	printf("\n ------------------------------------------------------------------------------------ \n \n \n");
}


void imprimir_ascii_ranking()
{
	printf("██████╗  █████╗ ███╗   ██╗██╗  ██╗██╗███╗   ██╗ ██████╗ \n");
	printf("██╔══██╗██╔══██╗████╗  ██║██║ ██╔╝██║████╗  ██║██╔════╝ \n");
	printf("██████╔╝███████║██╔██╗ ██║█████╔╝ ██║██╔██╗ ██║██║  ███╗\n");
	printf("██╔══██╗██╔══██║██║╚██╗██║██╔═██╗ ██║██║╚██╗██║██║   ██║\n");
	printf("██║  ██║██║  ██║██║ ╚████║██║  ██╗██║██║ ╚████║╚██████╔╝\n");
	printf("╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝ ╚═════╝ \n");
	printf("\n ------------------------------------------------------------------------------------ \n \n \n");
}


void imprimir_ascii_acertijos()
{
	printf(" █████╗  ██████╗███████╗██████╗ ████████╗██╗     ██╗ ██████╗ ███████╗\n");
	printf("██╔══██╗██╔════╝██╔════╝██╔══██╗╚══██╔══╝██║     ██║██╔═══██╗██╔════╝\n");
	printf("███████║██║     █████╗  ██████╔╝   ██║   ██║     ██║██║   ██║███████╗\n");
	printf("██╔══██║██║     ██╔══╝  ██╔══██╗   ██║   ██║██   ██║██║   ██║╚════██║\n");
	printf("██║  ██║╚██████╗███████╗██║  ██║   ██║   ██║╚█████╔╝╚██████╔╝███████║\n");
	printf("╚═╝  ╚═╝ ╚═════╝╚══════╝╚═╝  ╚═╝   ╚═╝   ╚═╝ ╚════╝  ╚═════╝ ╚══════╝\n");
	printf("\n ------------------------------------------------------------------------------------ \n \n \n");
}


void imprimir_ascii_facil()
{
	printf("\n \n ");
	printf("███████  █████   ██████ ██ ██      \n");
	printf("██      ██   ██ ██      ██ ██      \n");
	printf("█████   ███████ ██      ██ ██      \n");
	printf("██      ██   ██ ██      ██ ██      \n");
	printf("██      ██   ██  ██████ ██ ███████ \n");
	printf("                                   \n");
	printf("\n \n ");
}

void imprimir_ascii_intermedio()
{
	printf("\n \n ");
	printf("██ ███    ██ ████████ ███████ ██████  ███    ███ ███████ ██████  ██  ██████  \n");
	printf("██ ████   ██    ██    ██      ██   ██ ████  ████ ██      ██   ██ ██ ██    ██ \n");
	printf("██ ██ ██  ██    ██    █████   ██████  ██ ████ ██ █████   ██   ██ ██ ██    ██ \n");
	printf("██ ██  ██ ██    ██    ██      ██   ██ ██  ██  ██ ██      ██   ██ ██ ██    ██ \n");
	printf("██ ██   ████    ██    ███████ ██   ██ ██      ██ ███████ ██████  ██  ██████  \n");
	printf("                                                                             \n");
	printf("                                                                                \n \n ");
}

void imprimir_ascii_dificil()
{
	printf("\n \n ");
	printf("██████  ██ ███████ ██  ██████ ██ ██      \n");
	printf("██   ██ ██ ██      ██ ██      ██ ██      \n");
	printf("██   ██ ██ █████   ██ ██      ██ ██      \n");
	printf("██   ██ ██ ██      ██ ██      ██ ██      \n");
	printf("██████  ██ ██      ██  ██████ ██ ███████ \n");
	printf("                                         \n");
	printf("                                         \n \n ");
}

void imprimir_ascii_puntuaciones()
{
	printf("\n \n ");
	printf("██████  ██    ██ ███    ██ ████████ ██    ██  █████   ██████ ██  ██████  ███    ██ ███████ ███████ \n");
	printf("██   ██ ██    ██ ████   ██    ██    ██    ██ ██   ██ ██      ██ ██    ██ ████   ██ ██      ██      \n");
	printf("██████  ██    ██ ██ ██  ██    ██    ██    ██ ███████ ██      ██ ██    ██ ██ ██  ██ █████   ███████ \n");
	printf("██      ██    ██ ██  ██ ██    ██    ██    ██ ██   ██ ██      ██ ██    ██ ██  ██ ██ ██           ██ \n");
	printf("██       ██████  ██   ████    ██     ██████  ██   ██  ██████ ██  ██████  ██   ████ ███████ ███████ \n");
	printf("                                                                                                   \n");
	printf("                                         \n \n ");
}

void imprimir_ascii_error()
{
	printf("\n \n ");
	printf("███████ ██████  ██████   ██████  ██████  \n");
	printf("██      ██   ██ ██   ██ ██    ██ ██   ██ \n");
	printf("█████   ██████  ██████  ██    ██ ██████  \n");
	printf("██      ██   ██ ██   ██ ██    ██ ██   ██ \n");
	printf("███████ ██   ██ ██   ██  ██████  ██   ██ \n");
	printf("\n \n ");
}

void despedida()
{
	printf("\n Muchas gracias por jugar buen dia \n");
}


void imprimir_ranking(int indice_jugador_ranking)
{
	printf("\n RANKING \n");

	for (int i = 0; i < indice_jugador; i++)
	{
		if (indice_jugador_ranking != -1 && indice_jugador_ranking == i) //se imprime el nombre del jugador en el ranking siempre y cuando se haya ingresado un nombre valido
		{
		    //se remarca el nombre del jugador que se esta buscando
			printf("%d. \033[1;32m%s\033[0m - \033[1;34m%d puntos\033[0m\n", i + 1, nombres_jugadores[i], puntuaciones_jugadores[i]);
		}

		else
		{
		    //se imprime el ranking, especificando el puntaje y el nombre del jugador
			printf("%d. %s - %d puntos\n", i + 1, nombres_jugadores[i], puntuaciones_jugadores[i]);
		}
	}
}

void limpiar_pantalla()
{
	system("pause");
	system("cls");
}
