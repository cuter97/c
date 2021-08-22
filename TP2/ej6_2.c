/*Escriba un programa para generar matrices cuadradas de enteros (el usuario introduce la dimensión por te-
clado y todas las matrices generadas tienen el mismo tamaño). El programa reserva memoria todas las matrices
requeridas. Se pide implementar funciones para inicializar matrices: con números aleatorios entre 1 y 9, matriz
simétrica con números aleatorios entre 1 y 9, matriz identidad. Luego, implemente funciones para imprimir una
matriz y funciones para resolver la suma, resta, multiplicación y transpuesta de matrices. En el código de la
función main() se debe resolver A * I = A, donde I es la matriz identidad y A es una matriz cualquiera. Mostrar
por pantalla las matrices para verificar esta igualdad.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){


  return 0;
}

int **alocar(int filas, int columnas){
  int **mat;
  mat = malloc(filas*sizeof(int*));
  if (mat != NULL) {

  }
}
