/*Se tiene un arreglo de n elementos enteros (n es ingresado por teclado y se aloca memoria de forma diná-
mica). Se inicializa el vector con valores aleatorios entre 0 y VALOR_MAX. Se quiere generar otro arreglo
donde estén los elementos del vector original sin repetir. Escribir un programa que genere el nuevo vector, cuya
dimensión sólo se conoce en tiempo de ejecución. Luego muestre en pantalla ambos vectores. Nota: no imple-
mentar con un arreglo de N datos. Ir realocando en memoria dinámica espacio a medida que el vector resultado
va aumentando.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct
{
	int size;
	int *vec;
}Vector_T;
void vaciar(Vector_T *vector);
void agregar(Vector_T *vector, int valor);
void sacarRepetidos(Vector_T *original, Vector_T *sin_repetidos);
void alocarmemory(Vector_T *vector/*,int n*/);
void inicializar(Vector_T *vector);
void imprimir(Vector_T *vector);

int main(){
  srand(time(NULL));
  Vector_T vector, vector2;
	int n;
  printf("ingrese dimension: ");
  scanf("%d",&n);
	vector.size=n;
  alocarmemory(&vector/*, n*/);
	//alocarmemory(vector2/*, n*/);
  inicializar(&vector);
  imprimir(&vector);
  printf("\n");
	sacarRepetidos(&vector, &vector2);
	imprimir(&vector2);
  printf("\n");

  return 0;
}
void vaciar(Vector_T *vector){
	free(vector->vec);
	vector->size=0;
}

void agregar(Vector_T *vector, int valor){
	//agregar un bloque de 5 espacios nuevos, para poder alocar a los proximos 5 elementos.
	//en caso de necesitar mas espacio vuelvo a alocar otro bloque de 5 espacios, y asi hasta terminar
	int dimBloque=5;
	if (vector->size % dimBloque == 0)// necesito agregar un bloque nuevo
	{
		vector->vec = (int*)realloc(vector->vec, (vector->size + dimBloque)*sizeof(int));
		vector->vec[vector->size++]=valor;
	}
}

void sacarRepetidos(Vector_T *original, Vector_T *sin_repetidos){
	int i=0;
	for (i = 0; i < original->size; i++) {
		int j=0;
		int repetidos=0;
		for(j=0; j<sin_repetidos->size && !repetidos; j++){
			if (original->vec[i] == sin_repetidos->vec[j]) {
				repetidos = 1;
			}
			if (!repetidos)
			{
				agregar(sin_repetidos, original->vec[i]);
			}
		}
	}
}

void alocarmemory(Vector_T *vec /*,int n*/){
	(*vec).vec = (int*)malloc((*vec).size*sizeof(int));
	/*vector->vec = (int*)malloc(vector->size*sizeof(int));
	if(vector->vec == NULL){
		printf("error");
		exit (-1);
	}
*/
}

void inicializar(Vector_T *vector){
  for (int i = 0; i < vector->size; i++)
    vector->vec[i]=rand()%10;
}

void imprimir(Vector_T *vector){
  for (int i = 0; i < vector->size ; i++)
    printf("%d ",vector->vec[i]);
}
