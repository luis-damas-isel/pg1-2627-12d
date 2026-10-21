#include <stdio.h>
#define MAX1 10
#define MAX2 5
#define MAX3 20000

void inic_array(int v[], int nElementos) /* int v[] ou int*v */
{
 printf("Tamanho do array--> %zu\n", sizeof(v));
 for (int i=0; i<nElementos; i++)
   v[i] = i;
}

void print_array(int *v, int nElementos) /* int v[] ou int*v */
{
 for (int i=0; i<nElementos; i++)
   printf("arr[%d]=%d\n", i, v[i]);
 printf("\n");
}

int main()
{
  int arr1[MAX1], arr2[MAX2], arr3[MAX3];
  puts("Imprimir os valores antes da inicialização");
  print_array(arr1, MAX1);
  print_array(arr2, MAX2);
  print_array(arr3, MAX3);

/* inicialização dos arrays arr1, arr2 e arr3 */
  inic_array(arr1, MAX1);
  inic_array(arr2, MAX2);
  inic_array(arr3, MAX3);

  puts("Imprimir os valores depois da inicialização");
  print_array(arr1, MAX1);
  print_array(arr2, MAX2);
  print_array(arr3, MAX3);
  puts("Done!!!");
return 0;
}
