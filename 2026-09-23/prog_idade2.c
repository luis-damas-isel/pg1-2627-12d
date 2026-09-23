#include <stdio.h>

// 0..9    Criança
// 10..17  Jovem
// 18..... Adulto

int main(){
  int idade;
  printf("Introduza a idade: ");
  scanf("%d", &idade);

  if (idade>=0 && idade<=9)
    printf("Crianca\n");
  else
    if (idade>=18)
      printf("Adulto\n");
    else
      if (idade>=10 && idade<=17)
        printf("Jovem\n");
      else
        printf("Idade invalida!!!!\nEs mesmo Toto!!!\n");
  return 0;
}
