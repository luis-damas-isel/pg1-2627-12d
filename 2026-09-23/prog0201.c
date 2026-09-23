#include <stdio.h>

int main(){
  int num;

  printf("Introduza um nº inteiro: ");
  scanf("%d", &num);

  if (num%2==1)
    printf("%d é ímpar\n", num);
  else
    printf("%d é par\n", num);

  return 0;
}
