#include <stdio.h>

//funciones "codigo incompleto"
void inicializar_datos;
void imprimir_arreglo;
void ordenar_quiksort;
void merge;

int main() {
  sleep(1);
  merge(vA,DIM_A,vB,DIM_B,resultado,DIM_A+DIM_B);
  // las dimensiones las genero cuando compilo
  return 0;
}

void merge(int a[DIM_MAX], int dimA, int b[DIM_MAX], int dimB, int resultados[DIM_MAX], int dimC)
{
  int i,j,k;
  while ([i<dimA ]&& [j<dimB])
  {
    if (a[i] < b[j])
    {
      //agregar a[i] en resultado
      resultado[k] = a[i];
      i++;
    }
    else
    {
      resultado[k] = b[j];
      j++;
    }
    k++;
  }
  if (i == dimB)
  {  //si tengo todavia datos en b
    while (j < dimB)
    {
      resultado[k] = a[i];
      j++;
      k++;
    }
  }
    else
    {
      while (i < dimA)
      {
        resultado[k] = a[i];
        i++;
        k++;
      }
    }
  }
}
