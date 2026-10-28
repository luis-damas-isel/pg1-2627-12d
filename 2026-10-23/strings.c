#include <stdio.h>
#include <ctype.h>

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

// my_strcmp - Compara duas strings e devolve um inteiro indicando a relação entre elas:
//               0  - As strings são exatamente iguais;
//               <0 - A string str1 é alfabeticamente menor que str2;
//               >0 - A string str1 é alfabeticamente maior que str2.
int my_strcmp (const char* str1, const char* str2){
  int i=0;

  while (str1[i]==str2[i] && str1[i]!='\0'){
    i++;
  }

  return (str1[i]-str2[i]);
}

// my_stricmp - Compara duas strings com IGNORE CASE
//              e devolve um inteiro indicando a relação entre elas:
//               0  - As strings são exatamente iguais;
//               <0 - A string str1 é alfabeticamente menor que str2 com ignore case;
//               >0 - A string str1 é alfabeticamente maior que str2 com ignore case.
int my_stricmp (const char* str1, const char* str2){
  int i=0;

  while (tolower(str1[i])==tolower(str2[i]) && str1[i]!='\0'){
    i++;
  }

  return (tolower(str1[i])-tolower(str2[i]));
}

int main()
{
  char nome1[MAX+1], nome2[MAX+1];

  do {
    printf("1ª string: "); gets(nome1);
    printf("2ª string: "); gets(nome2);
    int cmp = my_stricmp(nome1, nome2);
    if (cmp<0)
      printf("[%s] é menor que [%s]\n", nome1, nome2);
    else
      if (cmp>0)
        printf("[%s] é maior que [%s]\n", nome1, nome2);
      else
        printf("[%s] é igual a [%s]\n", nome1, nome2);
  }
  while (my_stricmp(nome1,"fim")!=0);

  return 0;
}
