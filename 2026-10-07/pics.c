#include <stdio.h>

void linha(int n_chars, char ch){
  for (int i=1; i<=n_chars; i++)
    putchar(ch);
  putchar('\n');
}

void rectangle(int rows, int cols, char ch){
  for (int i=1; i<=rows; i++)
    linha(cols, ch);
}

void square(int size, char ch){
  rectangle(size, size, ch);
}


int main(){

  linha(20, '-');
  printf("  PROGRAMACAO I\n");
  linha(15, '+');
  printf("      26/27\n");
  printf("    Turma 12\n");
  linha(10, '@');

  rectangle(4, 7, '?');
  rectangle(7, 4, '@');

  square(10, '*');
  return 0;
}
