#include <stdio.h>

int main(){
  int num;
  printf("Qual o valor: "); scanf("%d", &num);

  int menor=1, maior=num;
  while (menor<=num){
    printf("%d %d\n", menor++, maior--);
  }
  return 0;
}
