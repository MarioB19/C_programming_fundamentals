//Mario Brandon Muro Ramos
#include <stdio.h>


int main(void) {



  /*
  //Ejercicio 1

  for(int i=90;i>=65;i--){

    printf("%c ", (char) i);
    
  }

  */


  /*


  //Ejercicio 2

  for(int i=65;i<=90;i++){

    if( i == 'C' || i == 'O' || i== 'S' || i == 'U' || i == 'Q'){
      continue;
      
    }

    printf("%c ", (char) i);

  }

    */


  /*

    //Ejercicio 3
  int cont = 0;

  for(int i=65;i<=90;i++){

    if( i == 'C' || i == 'O' || i== 'S' || i == 'U' || i == 'Q'){
      cont ++;
    }
    printf("%c ", (char) i);

    if(cont ==3) break;

  }

  */

  /*

    //Ejercicio 4

  char letra1, letra2;
  printf("Ingrese el rango de letras que desea imprimir\n");
  printf("Primer letra : ");
  scanf("%c", &letra1);
  getchar();
  printf("Segunda letra : ");
  scanf("%c", &letra2);

  if((letra1 <65 || letra1 >90) || (letra2 <65 || letra2 >90)){
    printf("No ingreso letras mayusculas");
    return 0;
  }

  if(letra1 > letra2){
    for(int i=letra1;i>=letra2;i--){

      printf("%c ", (char) i);

    }

    return 0;


  }

  for(int i=letra1;i<=letra2;i++){

    printf("%c ", (char) i);

  }


  */

  

  


  


  return 0;

}


