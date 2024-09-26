/*
Mario Brandon Muro Ramos
*/

#include <stdio.h>


//Funcion ejercicio 1
int get_promedio(int cal_examen, int promedio_prepa);
int main() {

  /*
  //Ejemplo 1
  int cal_examen, promedio_prepa;

  printf("\n Ingrese la calificacion del examen de admision: ");
  scanf("%d", &cal_examen);

  printf("\n Ingrese la calificacion de la preparatoria: ");
  scanf("%d", &promedio_prepa);


  if(get_promedio(cal_examen, promedio_prepa)>=85){
      printf("Has sido admitido");

  }
  else{
      printf("No has sido admitido");
  }

  */

  /*
  //Ejemplo 2

  int is_alumno; // 1 = si, 0 = no
  int costo_inscripcion = 500, costo_mensualidad = 1750;

  printf("\n Eres alumno (1 = si, 0 = no): ");
  scanf("%d", &is_alumno);

  switch(is_alumno){
      case 0:
          printf("\n Al no ser alumno, no tienes descuento");
          printf("\n Debes pagar %d", (costo_inscripcion+costo_mensualidad));
      break;
      case 1:
          printf("\n Al ser alumno, tienes un descuento del 35 porciento");
          printf("\n Solo debes pagar %.2f",
  (costo_inscripcion+costo_mensualidad)*0.65); break;

      default:
      printf("\n Opps ingresaste algo mal");


  }

  */


    /*
  // Ejemplo 3

  int numero_mes;

  printf("\n Ingrese el numero del mes: ");
  scanf("%d", &numero_mes);

  switch (numero_mes) {
  case 1:
    printf("\n Enero");
    printf("\n Tiene 31 dias");
    break;
  case 2:

  {

    int is_bisiesto;
    printf("\n Febrero");

    printf("Es anio bisiesto? (1 = si, 0 = no): ");
    scanf("%d", &is_bisiesto);

    if (is_bisiesto == 1) {
      printf("\n Tiene 29 dias");

    } else if (is_bisiesto == 0) {
      printf("\n Tiene 28 dias");
    } else {
      printf("\n Opps ingresaste algo mal");
    }

    break;
  }
  case 3:
    printf("\n Marzo");
    printf("\n Tiene 31 dias");
    break;
  case 4:
    printf("\n Abril");
    printf("\n Tiene 30 dias");
    break;
  case 5:
    printf("\n Mayo");
    printf("\n Tiene 31 dias");
    break;
  case 6:
    printf("\n Junio");
    printf("\n Tiene 30 dias");
    break;
  case 7:
    printf("\n Julio");
    printf("\n Tiene 31 dias");
    break;
  case 8:
    printf("\n Agosto");
    printf("\n Tiene 31 dias");
    break;
  case 9:
    printf("\n Septiembre");
    printf("\n Tiene 30 dias");
    break;
  case 10:
    printf("\n Octubre");
    printf("\n Tiene 31 dias");
    break;
  case 11:
    printf("\n Noviembre");
    printf("\n Tiene 30 dias");
    break;
  case 12:
    printf("\n Diciembre");
    printf("\n Tiene 31 dias");

    break;

  default:
    printf("Ese mes no existe");
  }

  return 0;

    */
}


int get_promedio(int cal_examen, int promedio_prepa) {

  return (cal_examen + promedio_prepa) / 2;
}
