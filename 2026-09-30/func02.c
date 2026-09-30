#include <stdio.h>

void linha()
{
  printf("+ -------------------- +\n");
}

int dobro(int valor){
  return 2*valor;
}

int main(){
  int n=5, k=150;
  int res;

  linha();
  printf("---- TOP -----\n");
  linha();

  res = dobro(n);
  printf("O dobro de %d --> %d\n", n, res);
  printf("O dobro de %d --> %d\n", k, dobro(k));

  return 0;
}
