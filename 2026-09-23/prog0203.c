#include <stdio.h>

int main(){
  int a, b, c;
  int maximo;

  printf("Introduza três números: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a>=b && a>=c)
    maximo = a;
  else
    if (b>=a && b>=c)
      maximo = b;
    else
      maximo = c;

  printf("Máximo entre %d, %d e %d = %d\n", a, b, c, maximo);

  return 0;
}
