#include <stdio.h>

int main(){
  int num;
  printf("Qual o valor: "); scanf("%d", &num);

  printf("--- Inicio ---\n");
  while (num>=1)
    printf("%d\n", --num);

  printf("--- Fim ---\n");
  return 0;
}
