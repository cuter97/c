/*4) Escribir un programa que lea del teclado 2 valores que indican filas y columnas de una matriz (se aloca en
tiempo de ejecución). Inicializar dicha matriz, y para cada fila de la matriz, indicar el valor máximo y el valor
mínimo. Implementar con funciones.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** alocar(int filas,int columnas);
int inicializar(int **matriz, int filas,int columnas);
int imprimir(int **matirz, int filas, int columnas);
int minimo(int **matriz,int filas, int columnas);
int maximo(int **matriz,int filas, int columnas);

int main(){
  int **matriz;
  int n,m;
  srand(time(NULL));
  printf("ingresar fila: ");
  scanf("%d",&n);
  printf("ingresar columna: ");
  scanf("%d",&m);
  matriz = alocar(n,m);
  inicializar(matriz,n,m);
  imprimir(matriz,n,m);
  minimo(matriz,n,m);
  printf("\n");
  maximo(matriz,n,m);
  free(matriz);
  return 0;
}

int** alocar(int filas,int columnas){
  int **mat;

  mat = malloc(filas*sizeof(int*));
  if (mat != NULL) {
    for (int i = 0; i < filas; i++) {
      mat[i] = malloc(columnas*sizeof(int));
      if (!mat[i]) {
        printf("error al alocar fila %d \n",i);
        exit(-1);
      }
    }
  }else{
    printf("error alocando matriz\n");
    exit(-1);
  }
  return mat;
}
int inicializar(int **matriz, int filas,int columnas){
  for (int i = 0; i < filas; i++){
    for (int j = 0; j < columnas; j++)
      matriz[i][j]=rand()%10+11;
  }
  return 0;
}

int imprimir(int **matriz, int filas, int columnas){
  for (int i = 0; i < filas; i++){
    for (int j = 0; j < columnas; j++)
      printf("%d ",matriz[i][j]);
    printf("\n");
  }
  return 0;
}

int minimo(int **matriz,int filas, int columnas){
  for (int i = 0; i < filas; i++) {
    int menor = matriz[i][0]; /*cuando empiezo a recorrer una fila igualo menor al primer eleento de la fila
    y lo cambio cuando encuentro un numero menor*/
    for (int j = 1; j < columnas; j++) {
      int numero = matriz[i][j];
      if (numero < menor) {
        menor = numero;
      }
    }
    printf("el min en la fila %d es %d\n",i,menor);
  }
  return 0;
}
int maximo(int **matriz,int filas, int columnas){
  for (int i = 0; i < filas; i++) {
    int maximo = matriz[i][0];
    for (int j = 1; j < columnas; j++) {
      int numero = matriz[i][j];
      if (numero > maximo) {
        maximo = numero;
      }
    }
    printf("el may en la fila %d es %d\n",i,maximo);
  }
  return 0;
}
