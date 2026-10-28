#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// my_strrev2 – Coloca em dest a string src ao contrário
//   "amor" ---> "roma"
void my_strrev2(char dest[], const char src[]){
  int fim = strlen(src)-1;
  int ini = 0;

  while(fim>=0)
    dest[ini++] = src[fim--];

  dest[ini]='\0';
}

// my_strrev – Inverte a própria string
void my_strrev(char s[]){
  int ini, fim;

  for (ini=0, fim=strlen(s)-1; ini<fim; ini++, fim--){
    int tmp = s[fim];
    s[fim] = s[ini];
    s[ini] = tmp;
  }
}

// isStrCapicua – Verifica se a string se lê da mesma forma do início para o
//                fim e do fim para o início (palíndromo/capicua). Devolve um
//                boolean que representa os valores lógicos true/false.
bool isStrCapicua (const char str[]){
  int ini, fim;
  for (ini=0, fim=strlen(str)-1 ;  ini<fim   ; ini++, fim--)
    if (str[ini]!=str[fim])
      return false;

  return true;
}

int main(){
  char frase[100], rev[100];
/*
  do
  {
    printf("Introduza uma frase: ");
    gets(frase);
    printf("A frase [%s] %s capicua\n", frase, isStrCapicua(frase) ? "E'" : "NÃO E'");
  }
  while (strlen(frase)!=0);


  do
  {
    printf("Introduza uma palavra: ");
    gets(frase);
    my_strrev2(rev, frase);
    printf("Palavra->[%s] Inversao->[%s]\n", frase, rev);
  }
  while (strlen(frase)!=0);
*/

  do
  {
    printf("Introduza uma palavra: ");
    gets(frase);
    printf("Antes da inversao  -> [%s]\n", frase);
    my_strrev(frase);
    printf("Depois da Inversao -> [%s]\n", frase);
  }
  while (strlen(frase)!=0);


  return 0;
}
