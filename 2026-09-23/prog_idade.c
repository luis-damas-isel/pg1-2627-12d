#include <stdio.h>

int main(){
  int idade;
  printf("Introduza a idade: ");
  scanf("%d", &idade);

  if (idade<0)
     printf("Idade invalida!!!\n");
  else
     printf("O aluno joao tem %d anos\n",idade);

  return 0;
}
