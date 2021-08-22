#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "tadComplejo.h"

int main(){
  Complejo_T lista;
  lista = CrearLista();

  InsertarComplejo(&lista, 2, 4);
  InsertarComplejo(&lista, 6, 60);
  InsertarComplejo(&lista, 8, 23);
  InsertarComplejo(&lista, 22, 9);
  InsertarComplejo(&lista, 11, 5);
  impComplejo(lista);
  return 0;
}

/*al compilar usa al final -lm asi forzamos a usar la libreria math.h
ya que no la lee cuando la agrego en el tad*/
/*no se enlaza la biblioteca de funciones matemáticas al generar el ejecutable final.
Para solucionarlo debes enlazar, de manera explícita, la biblioteca de funciones matemáticas, que se llama m
gcc -o fig02_20 fig02_20.c -lm
De manera general, el parámetro -l va inmediatamente precedido por el nombre de la biblioteca de funciones que quieras enlazar. Usando -lm estás solicitando enlazar la biblioteca cuyo nombre es m.*/
