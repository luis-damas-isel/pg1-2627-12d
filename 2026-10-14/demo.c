#include <stdio.h>
#include <stdbool.h>

void drawLine(int n, char ch, bool addNewLine){
  while(n-->0)
    putchar(ch);

  if (addNewLine)
    putchar('\n');
}

void drawSquareWithPrefix(int prefix_size, char prefix_char, int size, char ch){
  int n=size;
  while (n-->0){
     drawLine(prefix_size, prefix_char, false);
     drawLine(size, ch,true);  // Desenha a linha do quadrado
  }
}

void drawSquare(int size, char ch){
  drawSquareWithPrefix(0,' ', size, ch);
}

void arv_natal(int niveis, char ch){
  for(int i=1; i<=niveis; i++)
    drawSquareWithPrefix(niveis-i, '.', 2*i-1, ch);
}

int main(){
  arv_natal(10, '@');
  return 0;
}
