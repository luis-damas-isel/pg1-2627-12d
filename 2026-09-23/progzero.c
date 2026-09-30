#include <stdio.h>

int main(){
  int num;
  printf("Introd. um numero: "); scanf("%d", &num);

  if (num==0)
    printf("O %d é zero\n", num);
  else
    printf("O %d não é zero\n", num);

  return 0;
}
