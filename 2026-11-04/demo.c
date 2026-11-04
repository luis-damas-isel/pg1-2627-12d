#include <stdio.h>
#include "utils.h"
#include "strutils.h"

int main(){
  random_init();
  for (int i=1; i<=10; i++)
    printf("Valor aleatorio nº%d: '%c'\n",i, random_range('0', '9'));

  char s[11]={'@','@','@','@','@','@','@','@','@','@','@'};
  printf("Antes da função  str->|%s|\n", s);
  strRandomDigits(s);
  printf("Depois da função str->|%s|\n", s);

  return 0;
}
