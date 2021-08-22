/*2) Usando los TADs que crea necesario, resolver los siguientes problemas (para simplificar puede elegir el tipo
de a usar, enteros, char, flotantes, etc.):
- Escribir una función para que, dadas las colas A y B, determinar si A y B son iguales. Al finalizar la función
A y B deben quedar con sus valores originales.
- Escribir una función para que, dadas las colas A y B, determinar si B es exactamente el reverso de A (valores
en orden inverso). Al finalizar la función A y B deben quedar con sus valores originales.
- Escribir una función para que, dada la cola Z y el elemento w, retorne verdadero si w no está Z. Al finalizar la
función Z debe quedar con sus valores originales.*/
#include <stdio.h>
#include <time.h>
#include "Cola.h"
#include "Pila.h"
typedef int Tipo_Dato;

int LlenarCola(Cola_T *cola);
int Mostrar(Cola_T cola);
int Identicas(Cola_T colaA, Cola_T colaB);
int Inverso(Cola_T colaA, Cola_T colaB);
int Buscar(Cola_T colaZ, int w);


int main() {
  Cola_T colaA, colaB, colaZ;
  colaA = Crear_Cola();
  colaB = Crear_Cola();
  colaZ = Crear_Cola();
  srand(time(NULL));

  LlenarCola(&colaA);
  Mostrar(colaA);
  printf("\n");

  LlenarCola(&colaB);
  Mostrar(colaB);
  printf("\n");

  LlenarCola(&colaZ);
  Mostrar(colaZ);
  printf("\n");

  if(Identicas(colaA,colaB) == 1){
		printf("las colas son iguales\n");
	}
	 else
		printf("las colas no son iguales\n");

  if(Inverso(colaA,colaB) == 1){
    printf("la cola B es el inverso de la cola A\n");
  }
  else
  printf("no es el inverso\n");

  int w;
  printf("ingresar numero a buscar\n");
  scanf("%d", &w);
  if (Buscar(colaZ, w) == 0) {
    printf("el dato se encuentra en la cola\n");
  }
  else
    printf("el dato no se encuentra\n");

  return 0;
}

int LlenarCola(Cola_T *cola){
	while(!Cola_Llena(*cola)){
		int n = 0;
		n=rand()%5+1;
		Q_Push(cola,n);
	}
	return 0;
}

int Mostrar(Cola_T cola){
	while(!Cola_Vacia(cola)){
		printf("%d ",Q_Pop(&cola));
	}
	return 0;
}
int Identicas(Cola_T colaA, Cola_T colaB){
	while(!Cola_Vacia(colaA))
		if(Q_Pop(&colaA) != Q_Pop(&colaB))
			return 0;
		return 1;
}

int Inverso(Cola_T colaA, Cola_T colaB){
  Pila_T aux;
  aux = Crear_Pila();
  while (!Cola_Vacia(colaB)) {
    S_Push(&aux,Q_Pop(&colaB));
  }
  while (!Pila_Vacia(aux) && !Cola_Vacia(colaA))
    if (S_Pop(&aux) != Q_Pop(&colaA))
      return 0;

  return 1;
}

int Buscar(Cola_T colaZ, int w){
  int aux, act;
  while (!Cola_Vacia(colaZ)) {
    aux = Q_Pop(&colaZ);
    if (aux == w){
      act = w;
    }
  }
  if (act) {
    return 0;
  }
  return 1;
}
