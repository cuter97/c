#include <stdio.h>
#include "PilaPuntero.h"

int main(){
  Pila_T pilita;
  pilita = CrearPila();

  SPush(&pilita,1);
  SPush(&pilita,2);
  SPush(&pilita,3);
  SPush(&pilita,4);

  printf("\n");
  //VaciarPila(&pilita);
  while (!PilaVacia(pilita)) {
    printf("%d \n",SPop(&pilita));
  }

  return 0;
}
