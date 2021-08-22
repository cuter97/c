#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20

/*********************************************************************/
/*                 PROTOTIPOS DE FUNCIONES                           */
/*********************************************************************/
int matriz_inicializar_rnd(int matriz[MAX][MAX], int filas, int columnas);
int matriz_inicializar_identidad(int matriz[MAX][MAX], int filas, int columnas);
int matriz_inicializar_simetrica(int matriz[MAX][MAX], int filas, int columnas);
int matriz_imprimir_por_filas(int matriz[MAX][MAX], int filas, int columnas);
int matriz_imprimir_por_columnas(int matriz[MAX][MAX], int filas, int columnas);
int matriz_suma(int A[MAX][MAX], int B[MAX][MAX],int C[MAX][MAX], int filas, int columnas);
int matriz_resta(int A[MAX][MAX], int B[MAX][MAX],int C[MAX][MAX], int filas, int columnas);
int matriz_producto(int A[MAX][MAX], int B[MAX][MAX],int C[MAX][MAX], int filas, int columnas);
int matriz_es_simetrica(int A[MAX][MAX], int filas, int columnas);
int matriz_es_diagonal_superior(int A[MAX][MAX],int filas, int columnas);
int matriz_es_diagonal_inferior(int A[MAX][MAX],int filas, int columnas);
int matriz_son_iguales(int A[MAX][MAX],int B[MAX][MAX], int filas, int columnas);


// inicializa parametro matriz con valores aleatorios con valores de 0..99
int matriz_inicializar_rnd(int matriz[MAX][MAX], int filas, int columnas){
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			matriz[i][j]=rand()%10;
			printf(" %d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
  return 0;
}

// inicializa matriz como matriz identidad
int matriz_inicializar_identidad(int matriz[MAX][MAX], int filas, int columnas){
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			if (i==j)
			{
				matriz[i][j]=1;
				printf(" %d ",matriz[i][j]);
			}
			if (i!=j)
			{
				matriz[i][j]=0;
			printf(" %d ",matriz[i][j]);	
			}
		}
		printf("\n");
	}
	printf("\n");
  return 0;
}

// iniciliza matriz con valores aleatorios pero simetrica
int matriz_inicializar_simetrica(int matriz[MAX][MAX], int filas, int columnas){
	if (filas==columnas)
	{
		for (int i = 0; i < filas; ++i)
		{
			for (int j = 0; j < columnas; ++j)
			{
				matriz[i][j]=rand()%10;
				matriz[i][j]=matriz[j][i];
				printf(" %d ", matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	else{
		printf("no es cuadrada");
	}
  return 0;
}

// imprime matriz por filas
int matriz_imprimir_por_filas(int matriz[MAX][MAX], int filas, int columnas){
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			printf("%d ",matriz[i][j]);
		}
	}
  return 0;
}

// imprime matriz por columnas
int matriz_imprimir_por_columnas(int matriz[MAX][MAX], int filas, int columnas){
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			printf("%d ",matriz[j][i]);
		}
	}
  return 0;
}

// suma matrices. A + B = C. Se asume que A, B y C son del mismo tamaño
int matriz_suma(int A[MAX][MAX], int B[MAX][MAX],int C[MAX][MAX], int filas, int columnas){
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			C[i][j]=A[i][j]+B[i][j];
			printf(" %d ",C[i][j]);
		}
		printf("\n");
	}
  return 0;
}

// resta matrices A - B = C. Se asume que A, B y C son del mismo tamaño
int matriz_resta(int A[MAX][MAX], int B[MAX][MAX],int C[MAX][MAX], int filas, int columnas){
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			C[i][j]=A[i][j]-B[i][j];
			printf(" %d ",C[i][j]);
		}
		printf("\n");
	}
  return 0;
}

// producto de matrices A * B = C. Se asume que A, B y C son del mismo tamaño
int matriz_producto(int A[MAX][MAX], int B[MAX][MAX],int C[MAX][MAX], int filas, int columnas){
	int suma=0;
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			suma=0;
			for (int k = 0; k < filas; ++k)
			{
				suma+=A[i][k]*B[k][j];
			}
			C[i][j]=suma;
			printf(" %d ",C[i][j]);
		}
		printf("\n");
	}
  return 0;
}

// retorna TRUE si A es simetricas, FALSE caso contrario
int matriz_es_simetrica(int A[MAX][MAX], int filas, int columnas){
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			if (A[i][j]!=A[j][i])
			{
				return 0;
			}
		}
	}
}

// retorna TRUE si A es matriz diagonal superior, FALSE caso contrario
int matriz_es_diagonal_superior(int A[MAX][MAX],int filas, int columnas){
	int sup=1;
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			if (i > j && A[i][j]!=0)
			{
				sup=0;
			}
		}
	}
  return sup;
}

// retorna TRUE si A es matriz diagonal inferior, FALSE caso contrario
int matriz_es_diagonal_inferior(int A[MAX][MAX],int filas, int columnas){
	int inf=1;
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			if (i < j && A[i][j]!=0)
			{
				inf=0;
			}
		}
	}
  return inf;
}

// retorna TRUE si A y B son iguales, FALSE caso contrario
int matriz_son_iguales(int A[MAX][MAX],int B[MAX][MAX], int filas, int columnas){
	int sup=1;
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			if (A[i][j]!=B[i][j])
			{
				sup=0;
			}
		}
	}
  return sup;
}
int main()
{
  int filas, columnas;
  int matA[MAX][MAX],matB[MAX][MAX],matC[MAX][MAX];
  srand(time(NULL));

  printf("Ingrese las dimensiones de la matriz (filas y columnas) \n");
  scanf("%d %d", &filas, &columnas); // dimensiones logicas que no deben superar MAX

  if ((filas > MAX) || (columnas > MAX)) {
      // dimension logica supera a la fisica
      printf("La dimension logica debe ser menor a la fisica \n");
      exit (-1);
  }
  else {
      // dimension logica correcta
      matriz_inicializar_rnd(matA, filas, columnas);
      matriz_inicializar_identidad(matB, filas, columnas);
      matriz_inicializar_simetrica(matA,filas,columnas);
      matriz_imprimir_por_filas(matA, filas, columnas);
      printf("\n");
      matriz_imprimir_por_columnas(matA, filas, columnas);
      printf("\n");
      matriz_suma(matA,matB,matC,filas,columnas);
      printf("\n");
      matriz_resta(matA,matB,matC,filas,columnas);
      printf("\n");
      matriz_producto(matA,matB,matC,filas,columnas);

      if (matriz_es_simetrica(matA,filas,columnas)==1)
      {
        printf("TRUE");
      }
      else{
        printf("FALSE");
        printf("\n");
      }
    
    if (matriz_es_diagonal_superior(matA,filas,columnas)==1)
    {
      printf("TRUE");
    }
    else{
      printf("FALSE");
      printf("\n\n");
    }
        if (matriz_es_diagonal_inferior(matA,filas,columnas)==1)
    {
      printf("TRUE");
    }
    else{
      printf("FALSE");
      printf("\n");
    }
      if(matriz_son_iguales(matA,matC, filas,columnas)==1) 
        printf("TRUE\n");
      else
        printf("FALSE\n");

      printf("\n");

      printf("\n Tamano matriz: %lu tam int: %lu \n", sizeof(matA), sizeof(int));
   }
    
   return 0;
}