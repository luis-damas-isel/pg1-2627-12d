#include <stdio.h>
#define MAX 3
#define BRANCO 32 /* ASCII 32 = ' ' */

void inic_jogo_galo(char v[MAX][MAX])
{
 for (int lin=0; lin<MAX; lin++)
   for (int col=0; col<MAX; col++)
     v[lin][col] = BRANCO;
}

void print_jogo_galo(char v[][MAX]) /* ou char (*v)[MAX] */
{
 for (int lin=0; lin<MAX; lin++)
 {
   for (int col=0; col<MAX; col++)
   {
     printf(" %c ", (v[lin][col] == BRANCO) ? '.' : v[lin][col]);
     if (col!=MAX-1) putchar('|');
   }
   if (lin!=MAX-1) printf("\n--- --- ---\n");
 }
 printf("\n\n");
}

int main()
{
  char jogo[MAX][MAX]; /* tabuleiro do jogo do galo */
  // char jogo[MAX][MAX] = {{'X',' ','X'},{'0',' ','0'},{'0','X',' '}};
  inic_jogo_galo(jogo);
  print_jogo_galo(jogo);

  jogo[1][1] = 'X'; print_jogo_galo(jogo);
  jogo[0][2] = '0'; print_jogo_galo(jogo);
  jogo[1][2] = 'X'; print_jogo_galo(jogo);
  jogo[1][0] = '0'; print_jogo_galo(jogo);

  return 0;
}
