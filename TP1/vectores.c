#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
/**************************************************************/
/*       PROTOTIPO DE FUNCIONES                               */
/**************************************************************/
int vector_inicializar_ceros(int v[MAX], int dim);
int vector_inicializar_rnd(int v[MAX], int dim);
int vector_imprimir(int v[MAX], int dim);
int vector_suma(int vA[MAX], int dimA, int vB[MAX], int dimB);
int vector_resta(int vA[MAX], int dimA, int vB[MAX], int dimB);
int vector_producto_punto(int vA[MAX], int dimA, int vB[MAX], int dimB);
int vector_son_iguales(int vA[MAX], int dimA, int vB[MAX], int dimB);
int vector_imprimir_posicion_pares(int v[MAX], int dim);
int vector_imprimir_posicion_impares(int v[MAX], int dim);
int vector_sumar_elementos(int v[MAX], int dim);
int vector_buscar_elemento(int v[MAX], int dim, int elemento);

int vector_inicializar_ceros(int v[MAX], int dim){
  for (int i = 0; i < dim; ++i)
  {
    v[i]=0;
  }
  return 0;
}

int vector_inicializar_rnd(int v[MAX], int dim){
  for (int i = 0; i < dim; ++i)
  {
    v[i]=rand()%10;
  }
  return 0;
}

int vector_imprimir(int v[MAX], int dim){
  for (int i = 0; i < dim; ++i)
  {
    printf("%d ",v[i]);
  }
  return 0;
}

int vector_suma(int vA[MAX], int dimA, int vB[MAX], int dimB){
int vC[MAX];
  for (int i = 0; i < dimA && i<dimB; ++i)
  {
    vC[i]=vA[i]+vB[i];
    printf("%d ",vC[i]);
}
  return 0;
}

int vector_resta(int vA[MAX], int dimA, int vB[MAX], int dimB){
  int vC[MAX];
  for (int i = 0; i < dimA && i<dimB; ++i)
  {
    vC[i]=vA[i]-vB[i];
    printf("%d ",vC[i]);
  }
  return 0;
}
int vector_producto_punto(int vA[MAX], int dimA, int vB[MAX], int dimB){
  int vC[MAX];
  for (int i = 0; i < dimA && i < dimB ; ++i)
  {
    vC[i]=vA[i]*vB[i];
    printf("%d ",vC[i]);
  }
  return 0;
}
int vector_son_iguales(int vA[MAX], int dimA, int vB[MAX], int dimB){
  int sup=1;
  for (int i = 0; i < dimA && i < dimB; ++i)
  {
    if (vA[i]!=vB[i])
    {
      sup=0;
    }
  }
  return sup;
}
int vector_imprimir_posicion_pares(int v[MAX], int dim){
  int par=0, pos;
  for (int i = 0; i < dim; ++i)
  {
    if (v[i]%2==0)
    {
      par=v[i];
      pos=i;
      printf("el numero par es %d en la posicion %d\n ",par,pos);
    }
  }
  return 0;
}
int vector_imprimir_posicion_impares(int v[MAX], int dim){
  int impar=1,pos;
  for (int i = 0; i < dim; ++i)
  {
    if (v[i]%2!=0)
    {
      impar=v[i];
      pos=i;
       printf("el numero impar es %d en la posicion %d\n ",impar,pos);
    }
  }
  return 0;
}
int vector_sumar_elementos(int v[MAX], int dim){
  int sum=0;
  for (int i = 0; i < dim; ++i)
  {
    sum+=v[i];
  }
    printf("la suma es %d\n",sum);
  return 0;
}
int vector_buscar_elemento(int v[MAX], int dim, int elemento){
  for (int i = 0; i < dim; ++i)
  {
    if (elemento==v[i])
    {
      return 0;
    }
  }
}

int main()
{
  int dim;
  int vector[MAX],vector1[MAX];
  srand(time(NULL));

  printf("Ingrese la dimension del vector \n");
  scanf("%d", &dim);

  if (dim > MAX) {

      printf("La dimension logica debe ser menor a la fisica \n");
      exit (-1);
  }
  else {
      vector_inicializar_ceros(vector,dim);
      vector_imprimir(vector,dim);
      printf("\n\n");

      vector_inicializar_rnd(vector, dim);
      vector_imprimir(vector,dim);
      printf("\n\n");

       vector_inicializar_rnd(vector1, dim);
       vector_imprimir(vector1,dim);
       printf("\n\n");

       vector_suma(vector,dim,vector1,dim);
       printf("\n\n");
       vector_resta(vector,dim,vector1,dim);
       printf("\n\n");
       vector_producto_punto(vector,dim,vector1,dim);
       printf("\n");
       if (vector_son_iguales(vector,dim,vector1,dim)==1)
       {
         printf("son iguales\n");
       }
       else{
        printf("no son iguales\n");
       }
       vector_imprimir_posicion_pares(vector,dim);
       printf("\n");
       vector_imprimir_posicion_impares(vector,dim);
       printf("\n");
       vector_sumar_elementos(vector,dim);
       printf("\n");

       int elemento=0;
       printf("ingrese numero para verificar si esta");
       scanf("%d",&elemento);
       if (vector_buscar_elemento(vector,dim,elemento)==0)
       {
         printf("el elemento esta");
       }
       else{
        printf("no esta");
       }
      printf("\nTamano vector: %lu tamano int: %lu \n", sizeof(vector1), sizeof(int));
   }
  
   return 0;
}
