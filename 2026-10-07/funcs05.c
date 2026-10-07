
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

// Compara duas datas armazenadas em 3 inteiros, cada uma delas
// Retorna:
//    <0  - Se a data1 < data2
//    0   - Se as datas forem iguais
//    >0  - Se as data1 > data2
//  NOTA: Assume-se que ambas as datas são válidas
int date_cmp(int d1, int m1, int y1, int d2, int m2, int y2){
  if (y1!=y2) return y1-y2;
  if (m1!=m2) return m1-m2;

  return d1-d2;
}

int main(){
  int dd1, mm1, aa1, dd2, mm2, aa2;
  printf("Introduza a data1: ");
  scanf("%d %d %d", &dd1, &mm1, &aa1);

  printf("Introduza a data2: ");
  scanf("%d %d %d", &dd2, &mm2, &aa2);

  int result = date_cmp(dd1, mm1, aa1, dd2, mm2, aa2);

  if (result==0)
    puts("DATAS IGUAIS");
  else
    if(result<0)
      puts("DATA1 < DATA2");
    else
      puts("DATA1 > Data2");

  return 0;
}
