#include <stdio.h>
#include <stdlib.h>
typedef int Tipo_Dato;
struct Nodo{
  Tipo_Dato dato;
  struct Nodo *sig;
};
typedef struct {
  struct Nodo *frente;
  struct Nodo *final;
  int size;
}ColaP_T;

ColaP_T CrearCola();
/* crea la cola pasada como parámetro: con 0 elementos y asignando el valor correcto al resto de los
campos (frente = final = NULL).*/
int QPush(ColaP_T *cola, Tipo_Dato x );
// Añade x a la cola.
Tipo_Dato QPop(ColaP_T *cola);
// Saca un elemento de la cola si la cola no está vacía. La función retorna dicho dato.
int ColaVacia(ColaP_T cola);
// retorna True si la cola está vacía. False caso contrario.
Tipo_Dato QTop(ColaP_T cola);
// Retorna el dato que está en el tope de la cola, pero sin sacarlo (no modifica la cola)
int LongitudCola(ColaP_T cola);
// Retorna la longitud de la cola.
int VaciarCola(ColaP_T *cola);
// Vacia la cola pasada como parámetro.
