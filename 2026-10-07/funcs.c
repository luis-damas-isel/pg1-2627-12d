#include <stdio.h>
// Devolve o maior valor entre x e y.
float max2(float x, float y){
  return (x>y) ? x : y;
}

// Devolve o maior valor entre x, y e z usando
// obrigatoriamente a função max2.
float max3(float x, float y, float z){
  return max2(max2(x,y), z);
}

void tabuada(int valor){
  for (int i=1; i<=10; i++)
    printf("%d x %d = %d\n", valor, i, valor*i);
  puts("---------------------");

}

// Mostra no ecrã as tabuadas de todos os números entre fim (inclusive).
void tabuadas(int ini, int fim){
  while(ini<=fim)
    tabuada(ini++);
}

// Pede um inteiro entre [min..max]
int readInt(int min, int max){
  int num;
  do
  {
    printf("Introduza um num entre %d e %d: ", min, max);
    scanf("%d", &num);
  }
  while(num<min || num>max);

  return num;
}

int main(){
  int n1, n2;
//  printf("Quais as tabuadas: "); scanf("%d %d", &n1, &n2);
//  tabuadas(n1,n2);


  int nota = readInt(0, 2000);
  printf("nota--> %d\n", nota);
  return 0;
}
