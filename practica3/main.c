//Mario Brandon Muro Ramos 224778908

#include <stdio.h>

// Funcion ejercicio 2
void is_anio_bisiesto(int anio);
// Funciones ejercicio 4
void celciusToFarenheit();

void celciusToKelvin();

void farenheitToCelcius();

void kelvinToCelcius();

// Funciones ejercicio 8

float conversion(int cm, int tipo);
// perdon pero era justa y necesaria :)
const char *getTipoPorNumero(int tipo);

// Funcion ejercicio 10
void clasificarLetra(char letra);

int main() {

  /*
      Ejercicio 1
  int dato1, dato2;

  printf("\n Ingrese el primer dato: ");
  scanf("%d", &dato1);
  printf("\n Ingrese el segundo dato: ");
  scanf("%d", &dato2);

  if(dato1>dato2){
      printf("\n Los numeros ingresados en orden ascendente son: %d
  %d",dato2,dato1); printf("\n Los numeros ingresados en orden descendente son:
  %d %d",dato1,dato2);
  }
  else{
          printf("\n Los numeros ingresados en orden ascendente son: %d
  %d",dato1,dato2); printf("\n Los numeros ingresados en orden descendente son:
  %d %d",dato2,dato1);
  }
  */

  /*
      Ejercicio 2
  int anio;
  printf("Ingrese el anio: ");
  scanf("%d", &anio);
  is_anio_bisiesto(anio);
  */

  /*
      Ejercicio 3
  int edad;

  printf("Introduce la edad: ");
  scanf("%d", &edad);

  if(edad>=0 && edad <=120){

      if(edad <=12){
          printf("Usted es niño");
          return 0;
      }


      if(edad <=17){
          printf("Usted es adolescente");
          return 0;
      }

      if(edad <=80){
          printf("Usted es adulto");
          return 0;
      }

      printf("Usted es anciano");


  }
  else{
      printf("Dato invalido");
  }
  */

  /*
      Ejercicio 4
  int op;

  printf("\n Bienvenido!! \n");

  printf("1. De Celsius °C a Farenheit °F\n");
  printf("2. De Celsius °C a Kelvin °K\n");
  printf("3. De Farenheit °F a Celsius °C\n");
  printf("4. De Kelvin °K a Celsius °C\n");

  printf("Selecciona una opcion: ");
  scanf("%d", &op);


  switch(op){
      case 01:
      celciusToFarenheit();
      break;

      case 02:
      celciusToKelvin();
      break;

      case 03:
      farenheitToCelcius();
      break;

      case 04:
      kelvinToCelcius();
      break;

      default:
          printf("Opcion invalida");
  }

  */

  /*
      Ejercicio 5

  int numero;

  printf("Ingrese el numero del dado (1-6): ");
  scanf("%d", &numero);


  switch(numero){
      case 01:
      printf("El numero de la cara opuesta del dado es: 6");
      break;
      case 02:
      printf("El numero de la cara opuesta del dado es: 5");
      break;
      case 03:
      printf("El numero de la cara opuesta del dado es: 4");
      break;
      case 04:
      printf("El numero de la cara opuesta del dado es: 3");
      case 05:
      printf("El numero de la cara opuesta del dado es: 2");
      break;
      case 06:
      printf("El numero de la cara opuesta del dado es: 1");
      break;

      default:
      printf("Un DADO no tiene ese numero");

  }

  */

  /*
      Ejercicio 6

int numero;

printf("Introduzca un numero entero: ");
scanf("%d", &numero);

if (numero > 0) {

  if (numero % 2 == 0) {

    if (numero % 7 == 0) {
      printf("%d es un numero positivo, es par y multiplo de 7", numero);

    } else {
      printf("%d es un numero positivo, es par y no es multiplo de 7",
             numero);
    }

  } else {

    if (numero % 7 == 0) {
      printf("%d es un numero positivo, es impar y multiplo de 7", numero);

    } else {
      printf("%d es un numero positivo, es impar y no es multiplo de 7",
             numero);
    }
  }

} else if (numero < 0) {

  if (numero % 2 == 0) {

    if (numero % 7 == 0) {
      printf("%d es un numero negativo, es par y multiplo de 7", numero);

    } else {
      printf("%d es un numero negativo, es par y no es multiplo de 7",
             numero);
    }

  } else {
    if (numero % 7 == 0) {
      printf("%d es un numero negativo, es impar y multiplo de 7", numero);
    } else {
      printf("%d es un numero negativo, es impar y no es multiplo de 7",
             numero);
    }
  }
} else {
  printf("El numero es 0, y es multiplo de 7");
}

  */

  /*
      Ejercicio 7

    int numero1, numero2, numero3, numero4, numero5;

    int mayor, menor;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);

    // inicializacion para comparacion
    mayor = numero1;
    menor = numero1;

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);
    if (mayor < numero2) {
      mayor = numero2;
    }

    else {

      if (menor > numero2) {
        menor = numero2;
      }
    }
    printf("Ingrese el tercer numero: ");
    scanf("%d", &numero3);

    if (mayor < numero3) {
      mayor = numero3;
    } else {
      if (menor > numero3) {
        menor = numero3;
      }
    }

    printf("Ingrese el cuarto numero: ");
    scanf("%d", &numero4);

    if (mayor < numero4) {
      mayor = numero4;
    } else {

      if (menor > numero4) {
        menor = numero4;
      }
    }

    printf("Ingrese el quinto numero: ");
    scanf("%d", &numero5);

    if (mayor < numero5) {
      mayor = numero5;
    } else {

      if (menor > numero2) {
        menor = numero5;
      }
    }

    printf("El numero mayor es %d, y el numero menor es %d", mayor, menor);


      */

  /*
      Ejercicio 8

  int tipo_unidad,op;
  float centimetros;

  printf("Que unidad desea trabajar");
  printf("\n (1) metros");
  printf("\n (2) centrimetros \n");
  scanf("%d", &tipo_unidad);

  switch(tipo_unidad){

      case 01:
      printf("Ingrese la cantidad de metros: ");
      scanf("%f", &centimetros);
      centimetros *= 100;
      break;

      case 02:
      printf("Ingrese la cantidad de centimetros: ");
      scanf("%f", &centimetros);
      break;

      default:
      printf("Opcion no valida");


  }

  printf("\n Selecciona una opcion de conversion: ");
  printf("\n (1) %s a yardas ", (tipo_unidad ==1) ? "metros" : "centimetros");
  printf("\n (2) %s a pies ", (tipo_unidad ==1) ? "metros" : "centimetros");
  printf("\n (3) %s a pulgadas \n", (tipo_unidad ==1) ? "metros" :
  "centimetros");

  scanf("%d", &op);

  if(op <1 || op>3){
      printf("Opcion invalida");
      return 0;
  }

  float cantidad_convertida = conversion(centimetros, op);

  printf("\n %.2f %s equivalen a %.2f %s", centimetros, (tipo_unidad ==1) ?
  "metros" : "centimetros", cantidad_convertida, getTipoPorNumero(op));

  */

  /*
      Ejercicio 9


  int horas, minutos, total_tiempo;
  float costo =0;
  int hora_por_minutos = 0;
  int tiempo_despues_4_horas= 0;

  printf("Ingrese la cantidad de horas: ");
  scanf("%d", &horas);
  printf("Ingrese la cantidad de minutos: ");
  scanf("%d", &minutos);

  total_tiempo = minutos + (horas * 60);




  if(total_tiempo<=10){
      costo = 0;
  }
  else if(total_tiempo >=11 && total_tiempo <= 30){
      costo = 6;
  }
  else if(total_tiempo>=31 && total_tiempo <240){

      if(total_tiempo %60 != 0){
          hora_por_minutos++;
      }

      costo = (((total_tiempo /60)+hora_por_minutos) * 15) ;
  }
  else if(total_tiempo>240){

      tiempo_despues_4_horas = total_tiempo - 240;

      if(tiempo_despues_4_horas %60 != 0){
          hora_por_minutos++;
      }

      costo = (((tiempo_despues_4_horas /60)+hora_por_minutos) * 10) + 60;


      if(total_tiempo>600){
          costo *= 0.80;
      }


  }



  printf("El precio a pagar por %d horas y %d minutos es de $%.2f", horas,
  minutos, costo);


  */


/*
    Ejercicio 10

  char letra;

  printf("Ingrese una letra mayuscula de la (A-Z): ");
  scanf("%c", &letra);
  clasificarLetra(letra);

    */


    /*
        Ejercicio 11

    char caracter;
    int numero1, numero2;

    printf("\n Ingrese un caracter: ");
    scanf("%c", &caracter);
    getchar();
    printf("\n Ingrese el primer numero: ");
    scanf("%d", &numero1);
    printf("\n Ingrese el segundo numero: ");
    scanf("%d", &numero2);

  
        switch(caracter){
            case '+':
                printf("\n%d + %d = %d", numero1, numero2, numero1+numero2);
            break;
            case '-':
                printf("\n%d - %d = %d", numero1, numero2, numero1-numero2);
            break;
            case '*':
                printf("\n%d * %d = %d", numero1, numero2, numero1*numero2);
            break;
            case '/':
                printf("\n%d / %d = %d", numero1, numero2, numero1/numero2);
            break;
            case '%':
                printf("\n%d %% %d = %d", numero1, numero2, numero1%numero2);
            break;
            default:
                printf("Error, caracter no valido");
        }

    */
    


    

  return 0;
}


// Funcion ejercicio 2
void is_anio_bisiesto(int anio) {

  if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0) {
    printf("El año %d es bisiesto\n", anio);
  } else {
    printf("El año %d NO es bisiesto\n", anio);
  }
}

// Funciones ejercicio 4
void celciusToFarenheit() {
  float celcius;
  printf("Ingrese la temperatura en grados Celcius: ");
  scanf("%f", &celcius);
  float farenheit = (celcius * 9 / 5) + 32;
  printf("%.2f grados Celcius equivalen a %.2f grados Farenheit\n", celcius,
         farenheit);
}

void celciusToKelvin() {
  float celcius;
  printf("Ingrese la temperatura en grados Celcius: ");
  scanf("%f", &celcius);
  float kelvin = celcius + 273.15;
  printf("%.2f grados Celcius equivalen a %.2f grados Kelvin\n", celcius,
         kelvin);
}

void farenheitToCelcius() {
  float farenheit;
  printf("Ingrese la temperatura en grados Farenheit: ");
  scanf("%f", &farenheit);
  float celcius = (farenheit - 32) * 5 / 9;
  printf("%.2f grados Farenheit equivalen a %.2f grados Celcius\n", farenheit,
         celcius);
}

void kelvinToCelcius() {
  float kelvin;
  printf("Ingrese la temperatura en grados Kelvin: ");
  scanf("%f", &kelvin);
  float celcius = kelvin - 273.15;
  printf("%.2f grados Kelvin equivalen a %.2f grados Celcius", kelvin, celcius);
}

// Funciones ejercicio 8

float conversion(int cm, int tipo) {

  switch (tipo) {
  case 01: // cm a yardas
    return cm / 91.44;

  case 02: // cm a pies
    return cm / 30.48;

  case 03: // cm a pulgadas
    return cm / 2.54;
  }
}

// perdon pero era justa y necesario :)
const char *getTipoPorNumero(int tipo) {
  switch (tipo) {
  case 1:
    return "yardas";
  case 2:
    return "pies";
  case 3:
    return "pulgadas";
  }
}

// Funcion ejercicio 10
void clasificarLetra(char letra) {

  if (letra == 'A' || letra == 'E' || letra == 'F' || letra == 'H' ||
      letra == 'I' || letra == 'K' || letra == 'L' || letra == 'M' ||
      letra == 'N' || letra == 'T' || letra == 'V' || letra == 'W' ||
      letra == 'X' || letra == 'Y' || letra == 'Z') {
    printf("La letra %c es recta \n", letra);
  }

  else if (letra == 'C' || letra == 'O' || letra == 'S' || letra == 'U' ||
           letra == 'Q') {
    printf("La letra %c es curva \n", letra);
  }

  else if (letra == 'B' || letra == 'D' || letra == 'G' || letra == 'J' ||
           letra == 'P' || letra == 'R') {
    printf("La letra %c es curva y recta \n", letra);
  } else {
    printf("La letra %c no es una letra valida \n", letra);
  }
}
