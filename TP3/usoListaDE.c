#include <stdio.h>
#include "listaDE.h"

int par(ListaDE_T *l);
int main()
{
  ListaDE_T lista;
  lista = CrearLista();
  int dato;
  InsertarPrimero(&lista, 11);
  InsertarPrimero(&lista, 21);
  InsertarPrimero(&lista, 32);
  InsertarPrimero(&lista, 14);
  InsertarUltimo(&lista, 20);
  InsertarUltimo(&lista, 44);
  InsertarUltimo(&lista, 12);
  InsertarUltimo(&lista, 90);
  InsertarUltimo(&lista, 76);
  InsertarPrimero(&lista, 55);
  InsertarUltimo(&lista, 51);
  RecorrerListaEnOrden(lista);
  //printf("\n");
  //RecorrerListaEnOrdenInverso(lista);
  //SuprimirDatoPosicion(&lista,2);
  //RecorrerListaEnOrden(lista);
  SuprimirDato(&lista,31);
  RecorrerListaEnOrden(lista);
  dato = DevolverDatoPosicion(lista, 11);
  printf("dato: %d \n",dato);
  InsertarPosicion(&lista, 7, 99);
  RecorrerListaEnOrden(lista);
  par(&lista);
  RecorrerListaEnOrden(lista);
  VaciarLista(&lista);
  return 0;
}

int par(ListaDE_T *l){
  int x;
  int i = 1;
  while(i <= (LongitudLista(*l))) {
    x = DevolverDatoPosicion(*l, i);
    if (x%2 != 0) {
      SuprimirDatoPosicion(l,i);
    }
    else
    i++;
  }
}
