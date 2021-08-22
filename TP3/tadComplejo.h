#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Nodo
{
  int Re;
  int Im;
  struct Nodo *sig;
};
typedef struct{
  int n;
  struct Nodo *lista;
}Complejo_T;

//crea una lista de complejos con 0 elementos
Complejo_T CrearLista();

//ingresamos el complejo
int InsertarComplejo(Complejo_T *l, int x, int y);

//imprimimos la lista de complejos
int impComplejo(Complejo_T l);

int ListaVacia(Complejo_T l);

//float Modulo(Complejo_T l);
