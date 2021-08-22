#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

int inicializar(int v[], int dim);
int imprimir(int v[],int dim);
int vector_buscar_elemento(int v[], int dim, int elemento);
int main() {
  int dim, v1[N], v2[N];
  srand(time(NULL));
  printf("Ingrese la dimension del vector\n");
  scanf("%d", &dim);

  if (dim > N) {
      printf("La dimension logica debe ser menor a la fisica \n");
      exit (-1);
  }
  else {
    inicializar(v1,dim);
    imprimir(v1,dim);
    inicializar(v2,dim);
    imprimir(v2,dim);
    int elemento=0;
    printf("ingrese numero para verificar si esta");
    scanf("%d",&elemento);
    vector_buscar_elemento(v1,dim,elemento);
  }
  return 0;
}

int inicializar(int v[], int dim){
  for (int i = 0; i < dim; i++) {
      v[i]=rand()%10;
  }
  return 0;
}
int imprimir(int v[],int dim){
  for (int i = 0; i < dim; i++) {
    printf("%d ",v[i]);
  }
  printf("\n");
}
int vector_buscar_elemento(int v[], int dim, int elemento){
  int pos;
  for (int i = 0; i < dim; ++i)
  {
    if (elemento==v[i])
    {
      elemento=v[i];
      pos=i;
      printf("el elemento %d existe en pos %d\n",elemento,pos);
    }
    //else
    //printf("no esta\n");
  }
  return 0;
}
