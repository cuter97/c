/*1) Un conjunto es una secuencia de elementos todos del mismo tipo sin duplicados.
Proponer una implementación para el Tipo Conjunto de enteros.
Este TAD deberá responder como mínimo, a las siguientes operaciones:
- Cardinalidad del conjunto (cantidad de elementos).
- Pertenencia de un elemento al conjunto (si x pertenece al conjunto A, por ejemplo)
- Añadir un elemento al conjunto (un conjunto no tiene valores repetidos).
- Diferencia de dos conjuntos (x ∈ A−B cuando x ∈ A pero x ∈/ B).*/
#include <stdio.h>
#include <stdlib.h>
#include "parcial1.h"
Conjunto_T Crear_Conjunto()
{
  Conjunto_T l;
  l.n = 0;
  l.conjunto = NULL;
  return l;
}
//ordenamos de menor a mayor
int InsertarElementoOrdenado(Conjunto_T *l, int x){
  struct Nodo *nuevo;
  if (Conjunto_Vacio(*l))
  {
    nuevo = (struct Nodo*)malloc(sizeof(struct Nodo));
    if (!nuevo) {
      printf("no se aloco memoria\n");
      exit(-1);
    }
    nuevo->dato = x;
    nuevo->sig = l->conjunto;
    l->conjunto = nuevo;
    (l->n)++;
  }
  else
    {
      struct Nodo *act, *ant, *fut;

      nuevo = (struct Nodo*)malloc(sizeof(struct Nodo));
      if (!nuevo) {
        printf("no se aloco memoria\n");
        exit(-1);
      }
      nuevo->dato = x;
      ant = act = l->conjunto;
      while (act != NULL && (act->dato) < (nuevo->dato)) {
        ant = act;
        act = act->sig;
      }
      if (act == ant) {
        if (nuevo->dato < act->dato ) {
          nuevo->sig = act;
          l->conjunto = nuevo;
        }
        else{
           fut = act->sig;
           nuevo->sig = fut;
           ant->sig = nuevo;
        }
      }
      else{
        if (act == NULL) {
          ant->sig = nuevo;
          nuevo->sig = NULL;
        }
        else{
          nuevo->sig = act;
          ant->sig = nuevo;
        }
      }

    }
  return 0;

  int Recorrer(Conjunto_T l)
  {
    struct Nodo *aux;
    if(!Conjunto_Vacio(l)){
      aux = l.conjunto;
      while(aux != NULL){
        printf("%d ",aux->dato);
        aux = aux->sig;
      }printf("\n");
    }
    else
      printf("esta vacia\n");
    return 0;
  }
}

int Conjunto_Vacio(Conjunto_T l)
{
  return(l.n == 0);
}

int Longitud_Conjunto(Conjunto_T l)
{
  return l.n;
}

int Pertenece(Conjunto_T l, int x)
{
  struct Nodo *act;
  if (!Conjunto_Vacio(l)) {
    act = l.conjunto;
    while (act != NULL && act->dato != x) {
      act = act->sig;
    }

    if(act){
      printf("el dato existe\n");
    }
    else{
      printf("el dato no existe\n");
    }
  }
    else
      printf("el dato no existe: conjunto vacio\n");

return 0;
}
