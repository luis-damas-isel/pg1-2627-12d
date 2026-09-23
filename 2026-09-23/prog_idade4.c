#include <stdio.h>

// 0..9    Criança
// 10..17  Jovem
// 18..... Adulto

int main(){
  int idade;
  printf("Introduza a idade: ");
  scanf("%d", &idade);

  if (idade<0)
    printf("Idade invalida!!!!\n\n");

  if (idade>=0 && idade<=9)
    printf("Crianca\n");

  if (idade>=10 && idade<=17)
    printf("Jovem\n");

  if (idade>=18)
    printf("Adulto\n");

  printf("ByeBye\n");
  return 0;
}
