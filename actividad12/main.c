//Mario Brandon Muro Ramos
#include <stdio.h>


int main(void) {


  /*

  //Ejercicio 1

  float number1 =0, number2 =0;


  while(1){
    printf("\n Ingrese el primer numero: ");
    scanf("%f", &number1);
    printf("\n Ingrese el segundo numero: ");
     scanf("%f", &number2);

    if(number1 == 0 || number2 ==0){
      printf("Opps uno de los ingresados es 0, bye");
      break;
    }

    printf("El producto es %.2f", number1*number2);

  }

  */



  /*

  //Ejercicio 2
  int num_alumnos;
  int cont =0, aprobados =0, reprobados = 0, aux ;

  printf("Ingrese la cantidad de alumnos: ");
  scanf("%d", &num_alumnos);

  while(cont<num_alumnos){
    aux =-1;
    cont++;

    while(aux<0 || aux>100){
    printf("\n Ingrese la calificacion del alumno %d: ", cont);
    scanf("%d", &aux);

      if(aux <0 || aux>100){
        printf("\n Calificacion invalida, ingrese una calificacion entre 0 y 100");
      }
      else if(aux >60)
        aprobados++;
      else
        reprobados++;

    }

  }

  printf("En su clase hay %d alumnos, %d aprobados y %d reprobados", num_alumnos, aprobados,reprobados);


  */


  //Ejercicio 3

  /*

  int cont=1;
  int sum =0;

  do{

    printf("\n %d", cont);
    sum += cont;
    cont +=2;


  }while(cont<50);

  printf("\n La sumatoria es %d", sum);

  */



  /*
  //Ejercicio 4

  int cont =1;

  do{
    printf("\n %d", cont);
    cont++;
  }while(cont<=10);

  */






  return 0;

}

