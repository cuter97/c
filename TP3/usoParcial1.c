#include <stdio.h>
#include <stdlib.h>

#include "parcial1.h"

int main() {
  Conjunto_T conjunto;
  conjunto = Crear_Conjunto();
  InsertarElementoOrdenado(&conjunto,4);
  InsertarElementoOrdenado(&conjunto,6);
  InsertarElementoOrdenado(&conjunto,1);
  InsertarElementoOrdenado(&conjunto,2);
  InsertarElementoOrdenado(&conjunto,5);

  Recorrer(conjunto);
  int x;
  printf("ingresar elemento a buscar\n");
  scanf("%d", &x);
  Pertenece(conjunto, x);

  int dato;
  dato = Longitud_Conjunto(conjunto);
  printf("%d", dato);
  printf("\n");
  return 0;
}
