#include <stdio.h>
#define MAX1 10
#define MAX2 20
#define MAX3 500

/* inicialização do array arr1 */
void inic_array(int v[], int size_of_array){
  for (int i=0; i<size_of_array; i++)
    v[i] = i*2;
}

void print_array(int arr[], int n){
  for(int i=0; i<n; i++)
    printf("Elemento nº [%d]-->%d\n", i, arr[i]);
}

int main()
{
 int arr1[MAX1];
 int arr2[MAX2];
 int arr3[MAX3];

 print_array(arr1, MAX1);
 inic_array(arr1, MAX1);
 inic_array(arr2, MAX2);
 inic_array(arr3, MAX3);

 print_array(arr2, MAX2);
 puts("PRIMA <ENTER> para continuar . . . "); getchar();

 puts("Done!!!");
 return 0;
}
