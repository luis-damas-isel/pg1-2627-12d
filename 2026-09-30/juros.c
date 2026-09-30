
#include <stdio.h>
#include <stdbool.h>

/*
1º ano -> 10%
2º ano -> 15%
todos os outros ..... 20%
         zero anos -->   0
  1000 a um ano    --> 100
  1000 a dois anos --> 250
  1000 a tres anos --> 450
         4         --> 650
*/
double juros(double valor, int n_anos){
  double res = 0.0;

  if (n_anos>=1) {res = res+valor*.1; n_anos = n_anos-1; }
  if (n_anos>=1) {res = res+valor*.15; n_anos = n_anos-1; }
  res = res + valor*0.2*n_anos;
  return res;
}

int main(){
  double valor;
  int anos;
  printf("Qual o montante e anos : ");
  scanf("%lf %d", &valor, &anos);
  double valor_final = juros(valor, anos);
  printf("Juros %.2lf\n", valor_final);

  return 0;
}
