#include <stdio.h>

#define N 5

typedef struct{
	int edad, hijos;
}Info;

void cambio(int *dato1, int *dato2){
	int aux;
	aux = *dato1;
	*dato1 = *dato2;
	*dato2 = aux;
}

void ordenamiento(Info datos[]){			//Insercion
	int i, j;
	for(i = 0; i < N; i++){
		j = i;
		while(j > 0 && datos[j - 1].edad > datos[j].edad){
			cambio(&datos[j].edad, &datos[j - 1].edad);
			cambio(&datos[j].hijos, &datos[j - 1].hijos);
			j--;
		}
	}
}

void imprimir(Info datos[]){
	int i;
	for(i = 0; i < N; i++){
		printf("Edad: %d | Hijos: %d\n", datos[i].edad, datos[i].hijos);
	}
}

void promedio(Info dato[]){
	int i = 0, j, acum, cont;
	while(i != N){
		acum = 0;
		cont = 0;
		do{
			acum += dato[i].hijos;
			i++;
			cont++;
		}while(dato[i].edad == dato[i - 1].edad);
		printf("Edad: %d | Promedio de hijos = %.2f\n", dato[i - 1].edad, (float)acum / cont);
	}
}

int main(){
	Info personas[N];
	int i;
	for(i = 0; i < N; i++){
			printf("\n%d° Persona\n", i + 1);
		do{
			printf("Edad (20 / 50): ");
			scanf("%d", &personas[i].edad);
		}while(personas[i].edad < 20 || personas[i].edad > 50);

		printf("Hijos: ");
		scanf("%d", &personas[i].hijos);
	}
	printf("\n");
	ordenamiento(personas);
	imprimir(personas);
	printf("\n");
	promedio(personas);

	return 0;
}
