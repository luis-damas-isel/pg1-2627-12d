#include <stdio.h>

int main(){
  int a, b;
  char resp='@';

  printf("Um nº: "); scanf("%d", &a);
  printf("Um char: "); scanf(" %c", &resp);
  printf("Outro nº: "); scanf("%d", &b);

  printf("num1|%d| num2|%d| char|%c|\n", a, b, resp);
  return 0;
}
