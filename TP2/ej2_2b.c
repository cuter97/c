/*Realizar un programa que lea un valor del teclado. Alocar en memoria dinámica un vector de enteros de
longitud igual al valor leído. Inicializar dicho vector con valores aleatorios entre 10 y 20. Imprimir el vector.
Implementar usando funciones.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int alocar(int **vector, int n);
int inicializar(int *vector, int n);
int imprimir(int *vector, int n);

int main(){
  srand(time(NULL));
  int *vec;
  int n;
  printf("ingrese dimension: ");
  scanf("%d",&n);

  alocar(&vec, n);
  inicializar(vec,n);
  imprimir(vec,n);
  printf("\n");
  free(vec);
return 0;
}

int alocar(int **vector, int n){
  int size = n*sizeof(int);
  *vector = (int*)malloc(size);
  if (*vector == NULL) {
    printf("error de ejecucion\n");
    exit(-1);
  }
}


int inicializar(int *vector, int n){
  for (int i = 0; i < n; i++)
    vector[i]=rand()%10;
  return 0;
}

int imprimir(int *vector, int n){
  for (int i = 0; i < n; i++)
    printf("%d ",vector[i]);
  return 0;
}
