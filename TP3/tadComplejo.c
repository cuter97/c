#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tadComplejo.h"

Complejo_T CrearLista()
{
  Complejo_T l;
  l.n=0;
  l.lista=NULL;
  return l;
}

int InsertarComplejo(Complejo_T *l, int x, int y)
{
  struct Nodo *nuevo;
  if (ListaVacia(*l))
  {
    nuevo = (struct Nodo*)malloc(sizeof(struct Nodo));
    if (!nuevo) {
      printf("no se aloco memoria\n");
      exit(-1);
    }
    nuevo->Re = x;
    nuevo->Im = y;
    nuevo->sig = l->lista;
    l->lista = nuevo;
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
      nuevo->Re = x;
      nuevo->Im = y;
      ant = act = l->lista;
      while (act != NULL && (sqrt(pow(act->Re,2) + pow(act->Im,2))) < (sqrt(pow(nuevo->Re,2) + pow(nuevo->Im,2)))) {
        ant = act;
        act = act->sig;
      }
      if (act == ant) {
        if ((sqrt(pow(nuevo->Re,2) + pow(nuevo->Im,2))) < (sqrt(pow(act->Re,2) + pow(act->Im,2))) ) {
          nuevo->sig = act;
          l->lista = nuevo;
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
}

int impComplejo(Complejo_T l){
  struct Nodo *aux;
  if (!ListaVacia(l)) {
    aux = l.lista;
    while(aux != NULL){
      printf("(%d,%di)", aux->Re, aux->Im);
      aux = aux->sig;
    }printf("\n");
  }
  else
    printf("la lista esta vacia\n");
  return 0;
}

int ListaVacia(Complejo_T l){
  return (l.n == 0);
}
