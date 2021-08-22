#include <stdio.h>
int main(int argc, char const *argv[]) {
  int *dir_a, *dir_b;
  int a,b;
  a = 3;
  dir_a = &a;
  dir_b = &b;
  //dir_b = dir_a;
  *dir_a = *dir_b;
  //b = *dir_b;
  printf("%d",*dir_a);
  printf("\n");
  printf("%d",*dir_b);
  printf("\n");
  return 0;
}
