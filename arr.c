#include<stdio.h>

int main(){
//  char vogais[5] = {'a','e','i','o','u'};
  char vogais[] = {'a','e','i','o','u', 'A', 'U'};
  printf("%lu\n", sizeof(vogais));

//  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  printf("%lu\n", sizeof(arr));

  return 0;
}
