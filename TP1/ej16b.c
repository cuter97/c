#include <stdio.h>

//#ifndef N
#define  N 5
//#endif

typedef struct{
  int edad, hijos;
}Info;

int ordenamiento(Info datos[]);
int imprimir(Info datos[]);

int main(){
  Info personas[N];
  for (int i = 0; i < N; i++) {
    printf("\n%dº Peronas\n",i+1);
    do {
      printf("Edad (20 / 50): ");
      scanf("%d", &personas[i].edad);
    } while(personas[i].edad < 20 || personas[i].edad > 50);

    printf("hijos: ");
    scanf("%d",&personas[i].hijos);
  }
  printf("\n");
  ordenamiento(personas);
	imprimir(personas);
	printf("\n");
	//promedio(personas);
  return 0;
}

int ordenamiento(Info datos[]){
  int  i, j, aux, aux2;
// inicializacion del vector
  for(i = 0; i < N; i++)
  {
    aux = datos[i].edad;
    aux2 = datos[i].hijos;
    j = i - 1;
    while ((j>=0) && (datos[j].edad > aux))
    {
      datos[j+1].edad = datos[j].edad;
      datos[j+1].hijos = datos[j].hijos;

      j--;
    }
    datos[j+1].edad = aux;
    datos[j+1].hijos = aux2;
  }
return 0;
}
int imprimir(Info datos[]){
  for (int i = 0; i < N; i++){
  printf("Edad: %d | Hijos: %d\n", datos[i].edad, datos[i].hijos);
  }
}
