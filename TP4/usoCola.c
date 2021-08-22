#include <stdio.h>
#include <stdlib.h>

#include "ColaP.h"
typedef int Tipo_Dato;

int main()
{
    ColaP_T persona;
    persona = CrearCola();
    QPush(&persona,1);
    QPush(&persona,2);
    QPush(&persona,3);
    QPush(&persona,6);

    while (!ColaVacia(persona)){
      printf("%d ",QPop(&persona));
    }

    return 0;
}
