#include <stdio.h>
int main(int argc, char const *argv[]) {
  int num, cuenta;
  long fecha;
  float pendiente;
  long double potencia;

  int *p_num;
  long *p_fecha;
  float *p_pendiente;
  double *p_potencia;

//  num = 3;
//  p_num = &num;
  printf("direccion de num %p \n",&num);
  printf("direccion de cuenta %p \n",&cuenta);
  printf("direccion de fecha %p \n",&fecha);
  printf("direccion de pendiente %p \n",&pendiente);
  printf("direccion de potencia %p \n",&potencia);
  printf("cantidad de bytes de num: %ld\n",sizeof(num));
  printf("cantidad de bytes de cuenta: %ld\n",sizeof(cuenta));
  printf("cantidad de bytes de fecha: %ld\n",sizeof(fecha));
  printf("cantidad de bytes de pendiente: %ld\n",sizeof(pendiente));
  printf("cantidad de bytes de potencia: %ld\n",sizeof(potencia));

  printf("Cantidad de bytes de ’p_num’: %ld y contenido de p_num %ld \n",sizeof(p_num), sizeof(*p_num));

  printf("Cantidad de bytes de ’p_potencia’: %ld y contenido de p_potencia:%ld \n", sizeof(p_potencia), sizeof(*p_potencia));

  printf("Cantidad de bytes de ’p_pendiente’: %ld y contenido de p_pendiente: %ld \n", sizeof(p_pendiente), sizeof(*p_pendiente));

  return 0;
}
