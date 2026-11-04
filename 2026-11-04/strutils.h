#include <stdbool.h>


bool str_binary_pack(char packed[], const char to_pack[]);
   
bool str_binary_unpack(char dest[], const char packed[], int dest_capacity);
     
void strFillNonDigits(char str[], char ch);

int strRmChar(char str[], char ch);

void strRandomDigits(char str[11]);
