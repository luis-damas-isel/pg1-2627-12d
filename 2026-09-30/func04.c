#include <stdio.h>
#include <stdbool.h>

#define MIN_YEAR   1
#define MIN_MONTH  1
#define MAX_MONTH 12

#define FEB_NUMBER_OF_DAYS 28

bool isMultipleOf(int valor, int n){
  return (valor%n==0);
}

// (ano % 4 == 0 E ano % 100 != 0) OU ano % 400 == 0
// chatGPT consultado a 30/09/2026

bool is_leap_year(int year){
  return (isMultipleOf(year, 4) &&
         !isMultipleOf(year, 100)) ||
         isMultipleOf(year, 400);
}

// retorna o número de dias do mês m (1 a 12) no ano y, 
// ou -1 se algum dos parâmetros for inválido.
int month_days(int month, int year){
  if (year<MIN_YEAR || month<MIN_MONTH || month>MAX_MONTH)
    return -1;

  switch(month){
    case  4:
    case  6:
    case  9:
    case 11: return 30;
    case  2: if(is_leap_year(year))
               return FEB_NUMBER_OF_DAYS+1;
             else
               return FEB_NUMBER_OF_DAYS;
    default: return 31;

  }
}


int main(){
  int i, j, k, m,ano, ano_nasc, ano_casamento, ano_morte;
  printf("Introduza um ano: ");
  scanf("%d", &ano);

  if (is_leap_year(ano))
    printf("O ano e bissexto\n");
  else
    printf("O ano nao e bissexto\n");
  return 0;
}
