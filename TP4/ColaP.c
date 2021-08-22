#include <stdio.h>
#include <stdlib.h>
#include "ColaP.h"
typedef int Tipo_Dato;

ColaP_T CrearCola(){
  ColaP_T cola;
  cola.frente = NULL;
  cola.final = NULL;
  cola.size = 0;
  return cola;
}

int QPush(ColaP_T *cola, Tipo_Dato x){
  struct Nodo *nuevo;
  nuevo=(struct Nodo*)malloc(sizeof(struct Nodo));
  if (!nuevo)
  {
    printf("no se aloco memoria\n");
    exit (-1);
  }
  nuevo->dato = x;
  nuevo->sig = NULL;
  if (ColaVacia(*cola)) {
    cola->frente = nuevo;
  }
  else{
    cola->final->sig = nuevo;
  }
  cola->final = nuevo;
  (cola->size)++;
  return 0;
}

Tipo_Dato QPop(ColaP_T *cola){
  Tipo_Dato dato;
  if (!ColaVacia(*cola)) {
    struct Nodo *aux;
    aux = cola->frente;
    dato = cola->frente->dato;
    cola->frente = cola->frente->sig;
    free(aux);
    (cola->size)--;
    return dato;
  }
  else{
    printf("Error: la cola esta vacia\n");
    exit(-1);
  }
}

int ColaVacia(ColaP_T cola){
  return cola.size == 0;
}

Tipo_Dato QTop(ColaP_T cola){
  if (ColaVacia(cola))
  {
    printf("Error: cola vacía ");
    exit (-1);
  }
  return (cola.frente->dato);
}

int LongitudCola(ColaP_T cola){
  return cola.size;
}

int VaciarCola(ColaP_T *cola){
  while (!ColaVacia(*cola)) {
    QPop(cola);
  }
}
