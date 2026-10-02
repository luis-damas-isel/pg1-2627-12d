#include <stdio.h>

int main(){
  int num;
  printf("Qual o valor: "); scanf("%d", &num);

/*
  int i=1;
  while (i<=num){
    printf("%d %d\n", i, num-i+1);
    i++;
  }
*/
  for (int i=1; i<=num ; i++)
    printf("%d %d\n", i, num-i+1);

  return 0;
}
