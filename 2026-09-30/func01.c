#include <stdio.h>

int linha()
{
  printf("+ -------------------- +\n");
  return 0;
}

/*
---------------------------
TITULO
---------------------------
*/
int cabecalho(){
  linha();
  printf(" TITULO \n");
  linha();
  return 0;
}

int main(){

  cabecalho();

  printf("----FIM-----\n");
  linha();

  return 0;
}
