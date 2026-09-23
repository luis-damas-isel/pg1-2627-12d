#include <stdio.h>

int main(){
  int a=2, b=3, c=4;

  printf("a->%d b->%d c->%d\n", a, b, c);
  a=b=c=77;
  printf("a->%d b->%d c->%d\n", a, b, c);
  return 0;
}
