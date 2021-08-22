#include <stdio.h>
#include "lista.h"
int par(Lista_T *l);
int main()
{
   Lista_T lista;
   int dato;

   lista = Crear_Lista();
   Insertar_Primero(&lista, 12);
   Insertar_Primero(&lista, 14);
   Insertar_Primero(&lista, 75);
   Insertar_Ultimo(&lista, 17);
   Insertar_Ultimo(&lista, 12);
   Insertar_Ultimo(&lista, 19);
   Insertar_Ultimo(&lista, 21);
   Recorrer_Lista(lista);
   Insertar_Dato_Posicion(&lista, 4, 15);
   Recorrer_Lista(lista);
   Suprimir_Dato_Posicion(&lista, 2);
   Recorrer_Lista(lista);
   dato = Devolver_Dato_Posicion(lista, 5);
   printf("dato: %d \n",dato);

   //par(&lista);
   //Recorrer_Lista(lista);

   Vaciar_Lista(&lista);

   return 0;
}

int par(Lista_T *l){
  int x;
  int i = 1;
  while(i <= (Longitud_Lista(*l))) {
   x = Devolver_Dato_Posicion(*l, i);
   if (x%2 == 0) {
     Suprimir_Dato_Posicion(l,i);
 }
 else
 i++;
 }

  return 0;
}
