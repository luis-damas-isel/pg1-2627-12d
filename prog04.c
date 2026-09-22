#include <stdio.h>

int main()
{
  int idade;
  printf("Qual a idade: ");
  scanf("%d", &idade);
  printf("A sua idade e' %d\n", idade);
  printf("No proximo ano tera' %d\n", idade+1);
  return 0;
}
