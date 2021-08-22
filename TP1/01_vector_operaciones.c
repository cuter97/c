#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

int vector_inicializar_ceros(int v1[],int v2[], int dim);
int  vector_inicializar_rnd(int v1[],int v2[], int dim);
int vector_imprimir(int v1[],int v2[], int dim);
int vector_suma(int v1[], int v2[], int dim);
int vector_resta(int vA[], int vB[], int dim);
int vector_producto_punto(int v1[], int v2[], int dim);
/*int vector_son_iguales(int vA[MAX], int dimA, int vB[MAX], int dimB);
int vector_imprimir_posicion_pares(int v[MAX], int dim);
int vector_imprimir_posicion_impares(int v[MAX], int dim);
int vector_sumar_elementos(int v[MAX], int dim);
int vector_buscar_elemento(int v[MAX], int dim, int elemento);*/


int main()
{
  int dim;
  int vec1[N],vec2[N];
  srand(time(NULL));

  printf("Ingrese la dimension del vector\n");
  scanf("%d", &dim);

  if (dim > N) {

      printf("La dimension logica debe ser menor a la fisica \n");
      exit (-1);
  }
  else {

    //vector_inicializar_ceros(vector, dim);
    //vector_imprimir(vector,dim);
    //printf("\n");
    vector_inicializar_rnd(vec1,vec2, dim);
    vector_imprimir(vec1,vec2,dim);
    //vector_suma(vec1,vec2,dim);
    //vector_resta(vec1,vec2,dim);
    //vector_producto_punto(vec1, vec2, dim);

      //printf("\nTamano vector: %lu tamano int: %lu \n", sizeof(vector), sizeof(int));
   }

   return(0);
}


// pone los valores de la dimension en cero
int vector_inicializar_ceros(int v1[],int v2[], int dim){
  for (int i = 0; i < dim; i++)
      v1[i]=0;
      for (int j = 0; j < dim; j++)
        v2[j]=0;
  return 0;
}
//valores entre 0 y 9
int vector_inicializar_rnd(int v1[],int v2[], int dim){
  for (int i = 0; i < dim; i++)
    v1[i]=rand()%10;
    for (int j = 0; j < dim; j++)
      v2[j]=rand()%10;

  return 0;
}
//imprime el vector
int vector_imprimir(int v1[],int v2[], int dim){
  for (int i = 0; i < dim; i++)
    printf("%d ",v1[i]);
    printf("\n");
    for (int j = 0; j < dim; j++)
      printf("%d ",v2[j]);

      printf("\n");
  return 0;
}

int vector_suma(int v1[], int v2[], int dim){
  int v3[N];
  for (int i = 0; i < dim; i++) {
    v3[i]=v1[i]+v2[i];
    printf("%d ",v3[i]);
  }
  printf("\n");
  return 0;
}

int vector_resta(int v1[], int v2[], int dim){
  int v3[N];
  for (int i = 0; i < dim; i++) {
    v3[i]=v1[i]-v2[i];
    printf("%d ",v3[i]);
  }
  printf("\n");
  return 0;
}

int vector_producto_punto(int v1[], int v2[], int dim){
  int v3[N];
  for (int i = 0; i < dim; i++) {
    v3[i]=v1[i]*v2[i];
    printf("%d ",v3[i]);
  }
  printf("\n");
  return 0;
}

/*int vector_son_iguales(int vA[MAX], int dimA, int vB[MAX], int dimB){

  return 0;
}

int vector_imprimir_posicion_pares(int v[MAX], int dim){

  return 0;
}

int vector_imprimir_posicion_impares(int v[MAX],int dim){

  return 0;
}

int vector_sumar_elementos(int v[MAX], int dim){

  return 0;
}

int vector_buscar_elemento(int v[MAX], int dim, int elemento){

  return 0;
}*/
