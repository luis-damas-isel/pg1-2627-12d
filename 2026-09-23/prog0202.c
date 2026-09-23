#include <stdio.h>

int main(){
  int a, b;

  printf("Introduza dois números: ");
  scanf("%d %d", &a, &b);

  if (a>b)
    printf("Máximo entre %d e %d = %d\n", a, b, a);
  else
    printf("Máximo entre %d e %d = %d\n", a, b, b);

  return 0;
}
