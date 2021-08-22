/*9) Implemente la función swapInt() entre 2 variables enteras. Dicha función intercambia los valores de los
parámetros. Implemente la función swapCom() entre dos complejos.*/
#include <stdio.h>

/*int swapInt(int *x, int *y)
{
  int aux = *x;
  *x = *y;
  *y = aux;
return(0);
}
int main() {
  int a,b;
  printf("antes del swap %d, %d\n",a,b);
  swapInt(&a,&b);
  printf("despues del swap %d, %d\n",a,b);
  return 0;
}*/
typedef struct{
  int Re,Im;
}complejo_t;

int swapCom(complejo_t *x, complejo_t *y);

int main() {
  complejo_t a,b;

  a.Re = 1;
  a.Im = 2;

  b.Re = 7;
  b.Im = 9;

  printf("antes del swap %d, %d\n",a.Re,a.Im);
  printf("antes del swap %d, %d\n",b.Re,b.Im);
  swapCom(&a, &b);
  printf("despues del swap %d, %d\n",a.Re,a.Im);
  printf("despues del swap %d, %d\n",b.Re,b.Im);

  return 0;
}
int swapCom(complejo_t *x, complejo_t *y){
  int aux;
  aux = x->Re;
  x->Re = y->Re;
  y->Re = aux;
  int aux2;
  aux2 = x->Im;
  x->Im = y->Im;
  y->Im = aux2;
return(0);
}
