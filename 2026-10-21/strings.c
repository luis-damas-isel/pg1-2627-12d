#include <stdio.h>
#define MAX 20

// [1] my_strlen - Devolve o número de carateres existentes na string.
int my_strlen(const char s[]){
  int i=0;
  while(s[i]!='\0')
    i++;
  return i;
}

// [2] my_strcpy - Copia o conteúdo da string src para a string dest.
//                 Devolve a string destino;
char *my_strcpy(char dest[], const char src[]){
  int i;
  for (i=0; src[i]!='\0'; i++)
    dest[i] = src[i];
  dest[i] = '\0';
  return dest;
}

char *strcpy_com_esteroides(char dest[], const char src[]) {
    int i = 0;

    while ((dest[i] = src[i])!='\0')
        i++;

    return dest;
}

// [3] my_strcat – Concatena o conteúdo da string src na string dest (no final da
//                 string dest). Devolve a string destino;
char *my_strcat(char dest[], const char src[]){
  int i,j;
  for(i=0, j=my_strlen(dest); src[i]!='\0'; i++, j++)
    dest[j] = src[i];
  dest[j] = '\0';

  return dest;
}

int main()
{
  char nome[MAX+1], apelido[MAX+1]="XXXXXXXXXXXXXXXXXXXXXX";
  char s[2*MAX+1]="LIXOLIXOLIXOLIXOLIXOLIXO";
  while(1)
  {
    printf("Qual o nome   : "); gets(nome); // SEM & antes do nome do vetor 
    if(my_strlen(nome)==0) break;

    printf("Qual o apelido: "); gets(apelido);
    my_strcpy(s, nome);
    my_strcat(s, " ");
    my_strcat(s, apelido);
    my_strcat(s, " ----> ATENCAO É ELE <------");
    my_strcat(s, "JORGE");
    printf("O nome completo é [%s]\n", s);
  }
  puts("Bye Bye programa");
  return 0;
}
