#include <stdio.h>
#include "demo.h"

typedef double BIGALHAO;

void cls(){
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

double max(double x, double y){
  return (x>y) ? x : y;
}

int main(){
  double aaa=1.2, bbb=2.3;

  BIGALHAO res = max(aaa, bbb);

  printf("O maximo entre %lf e %lf --> %lf\n", aaa, bbb, res);
  cls();
  puts("Prontos para comecar...");
  return 0;
}

