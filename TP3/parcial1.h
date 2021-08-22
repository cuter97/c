#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
  int dato;
  struct Nodo *sig;
};

typedef struct{
  int n;
  struct Nodo *conjunto;
}Conjunto_T;

/* Crea una conjunto con 0 elementos */
Conjunto_T Crear_Conjunto();

/*inserta elementos de manera ordenada al conjunto*/
int InsertarElementoOrdenado(Conjunto_T *l, int x);

/*recorre los elemento del conjunto y los imprime*/
int Recorrer(Conjunto_T l);

/*retorna si el conjunto se encuentra vacio*/
int Conjunto_Vacio(Conjunto_T l);

/*busca un elemento en el conjunto y responde si pertenece o no*/
int Pertenece(Conjunto_T l, int x);

/*retorna la longitud del conjunto*/
int Longitud_Conjunto(Conjunto_T l);
