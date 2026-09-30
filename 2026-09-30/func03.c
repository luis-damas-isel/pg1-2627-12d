#include <stdio.h>
#include <stdbool.h>

bool isMultipleOf5(int valor){
  return (valor%5==0);
}

int main(){
  int num;
  printf("Introduza um valor: ");
  scanf("%d", &num);

  bool res = isMultipleOf5(143);

  if (isMultipleOf5(num)==true)
    printf("%d e multiplo de 5\n", num);
  else
    printf("%d NAO e multiplo de 5\n", num);

  return 0;
}
