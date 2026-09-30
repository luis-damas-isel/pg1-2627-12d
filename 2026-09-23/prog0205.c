#include <stdio.h>

int main(){
  int n;

  printf("Introduza um número 1..5: ");
  scanf("%d", &n);

  if (n<1 || n>5)
  {
     printf("Valor inválido!!!\n");
     return 1;
  }

  if (n>=5) printf("5\n");
  if (n>=4) printf("4\n");
  if (n>=3) printf("3\n");
  if (n>=2) printf("2\n");
  if (n>=1) printf("1\n");

  return 0;
}
