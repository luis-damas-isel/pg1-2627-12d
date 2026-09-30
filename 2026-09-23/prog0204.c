#include <stdio.h>

int main(){
  char ch;

  printf("Introduza um char: ");
  scanf("%c", &ch);

  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
     ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    printf("'%c' é uma vogal.\n", ch);
  else
    printf("'%c' não é uma vogal.\n", ch);

  return 0;
}
