#include <stdio.h>

int main(){
  int tabuada;
  printf("Qual o valor: "); scanf("%d", &tabuada);

  int i=1;
  while (i<=10){
    printf("%d x %d = %d\n", tabuada, i, tabuada*i);
    i++;
  }
  return 0;
}
