//Mario Brandon Muro Ramos
#include <stdio.h>

// Variables ejercicio 4
char nombre_producto[50];
int cantidad_producto, descuento;
float precio, subtotal;

// Funcion ejercicio 1
float convertir_pesos_to_euro(float pesos);

// Funcion ejercicio 2
void obtener_hora_llegada(int hora_salida, int minutos_salida,
                          int segundos_salida);
// Funcion ejercicio 3
float obtener_ahorro();

// Funcion 1 ejercicio 4
float obtener_subtotal(int cantidad_producto, float precio);

// Funcion 2 ejercicio 4
float obtener_descuento(int cantidad_producto, float precio, int descuento);

// Funcion 3 ejercicio 4
float procesar_pedido();

// Funcion 1 ejercicio 5
void imprimir_billetes(int total, char denominacion[]);

// Funcion 2 ejercicio 5
void imprimir_monedas(int total, char denominacion[]);

// Funcion 3 ejercicio 5
void obtener_denominaciones(int cantidad);

int main(void) {

  /*
  Ejercicio 1

  float pesos;

  printf("Ingrese la cantidad de pesos : ");
  scanf("%f", &pesos);
  printf("%.2f pesos equivalen a %.2f euros",
  pesos,convertir_pesos_to_euro(pesos));

  */

  /*
    Ejercicio 2

  int segundos, minutos, hora;
  printf("\n Ingrese la hora de salida (hh): ");
  scanf("%d", &hora);
  printf("\n Ingrese los minutos de salida (mm): ");
  scanf("%d", &minutos);
  printf("\n Ingrese los segundos de salida (ss): ");
  scanf("%d", &segundos);

  obtener_hora_llegada(hora, minutos, segundos);

  */

  /*
    Ejercicio 3

  printf("Si ahorras un 15%% de tu salario semanal, en un año ahorraras:
  %.2f",obtener_ahorro());

  */

  /*
  Ejercicio 4
  float total;

  total = procesar_pedido();
  printf("\n El precio de %d piezas de %s sin descuento es %.2f",
  cantidad_producto, nombre_producto, subtotal); printf(" \n El precio total con
  %d %% de descuento es %.2f", descuento, total);

  */

  /*
  Ejercicio 5

  int pesos; // debe ser int para que podamos trabajar con el modulo

  printf("Ingrese la cantidad de pesos : ");
  scanf("%d", &pesos);

  obtener_denominaciones(pesos);

  return 0;

  */
}

// Funcion ejercicio 1
float convertir_pesos_to_euro(float pesos) { return pesos / 21.45; }

// Funcion ejercicio 2
void obtener_hora_llegada(int hora_salida, int minutos_salida,
                          int segundos_salida) {
  int total_viaje_segundos = 4785;

  int total_seconds =
      hora_salida * 3600 + minutos_salida * 60 + segundos_salida;

  int hora_llegada = (total_seconds + total_viaje_segundos) / 3600;
  int minutos_llegada = (total_seconds + total_viaje_segundos) % 3600 / 60;
  int segundos_llegada = (total_seconds + total_viaje_segundos) % 60;

  printf("Llegada a la ciudad  %02d:%02d:%02d\n", hora_llegada, minutos_llegada,
         segundos_llegada);
}

// Funcion ejercicio 3
float obtener_ahorro() {
  float salario;
  printf("Ingrese su salario semanal: ");
  scanf("%f", &salario);

  return (salario * 0.15) * 52;
}

// Funcion 1 ejercicio 4
float obtener_subtotal(int cantidad_producto, float precio) {
  return cantidad_producto * precio;
}

// Funcion 2 ejercicio 4
float obtener_descuento(int cantidad_producto, float precio, int descuento) {
  float subtotal = obtener_subtotal(cantidad_producto, precio);

  return subtotal * ((float)descuento / 100);
}

// Funcion 3 ejercicio 4
float procesar_pedido() {

  float cantidad_descuento;

  printf("\n Ingrese el nombre del producto: ");
  scanf("%s", nombre_producto);
  printf("\n Ingrese la cantidad del producto: ");
  scanf("%d", &cantidad_producto);
  printf("\n Ingrese el precio del produco: ");
  scanf("%f", &precio);
  printf("\n Ingrese el descuento del producto: ");
  scanf("%d", &descuento);

  cantidad_descuento = obtener_descuento(
      cantidad_producto, precio,
      descuento); // lo hize asi ya que solo puede retornar un valor, no como en
                  // python que puede retornar varios valores.

  subtotal = obtener_subtotal(cantidad_producto, precio);

  return subtotal - cantidad_descuento;
}


void imprimir_billetes(int total, char denominacion[]) {
  printf("%d billete(s) de %s pesos\n", total, denominacion);
}

// Funcion 2 ejercicio 5
void imprimir_monedas(int total, char denominacion[]) {
  printf("%d moneda(s) de %s pesos\n", total, denominacion);
}

// Funcion 3 ejercicio 5
void obtener_denominaciones(int cantidad) {
  imprimir_billetes(cantidad / 500, "500");
  imprimir_billetes((cantidad % 500) / 200, "200");
  imprimir_billetes(((cantidad % 500) % 200) / 100, "100");
  imprimir_billetes((((cantidad % 500) % 200) % 100) / 50, "50");
  imprimir_billetes(((((cantidad % 500) % 200) % 100) % 50) / 20, "20");
  imprimir_monedas((((((cantidad % 500) % 200) % 100) % 50) % 20) / 10, "10");
  imprimir_monedas(((((((cantidad % 500) % 200) % 100) % 50) % 20) % 10) / 5,
                   "5");
  imprimir_monedas(
      (((((((cantidad % 500) % 200) % 100) % 50) % 20) % 10) % 5) / 2, "2");
  imprimir_monedas(
      (((((((cantidad % 500) % 200) % 100) % 50) % 20) % 10) % 5) % 2, "1");
}