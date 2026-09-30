#include <stdio.h>

int main(){
  int a, b, c;
  int maximo;

  printf("Introduza três números: ");
  scanf("%d %d %d", &a, &b, &c);

  maximo = a;
  if (b>maximo) maximo=b;
  if (c>maximo) maximo=c;

  printf("Máximo entre %d, %d e %d = %d\n", a, b, c, maximo);

  return 0;
}
