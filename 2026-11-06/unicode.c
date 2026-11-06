#include <stdio.h>
#include <ctype.h>
#include "puzzle15.h"
#include <stdbool.h>

bool isSpecialLetter(char ch){
  ch = tolower(ch);
  return (ch=='k' || ch=='w' || ch=='y' );
  // return (ch=='k' || ch=='w' || ch=='y' || ch=='K' || ch=='W' || ch=='Y');
}

int countLetters(const char s[]){
	int count=0;
	for (int i=0; s[i]!='\0'; i++)
	{
		if (isSpecialLetter(s[i]))
		  count+=2;
		else 
		  if (isalpha(s[i]))
		    count++;     
	}
	return count;
}

int main(){
  printf("Hello World\n");
  printf("Bom dia\0A todos\n");
  printf("Codigo do A--->'\65'\n");
  printf("Char 1 --> '\xE2\x82\xAC'\n");
  
	printf("Char 1 --> HORIZ \xE2\x94\x80\n");
	printf("Char 2 --> VERT \xE2\x94\x82\n");
	printf("Char 3 --> VERT_BOLD \xE2\x94\x83\n");

	printf("Char 4 --> UPPER_LEFT_CORNER \xE2\x94\x8C\n");
	printf("Char 5 --> UPPER_RIGHT_CORNER \xE2\x94\x90\n");
	printf("Char 6 --> BOTTOM_LEFT_CORNER \xE2\x94\x94\n");
	printf("Char 7 --> BOTTOM_RIGHT_CORNER \xE2\x94\x98\n");

	printf("Char 8 --> JUNCTION_LEFT \xE2\x94\x9C\n");
	printf("Char 9 --> JUNCTION_TOP \xE2\x94\xAC\n");
	printf("Char A --> JUNCTION_RIGHT \xE2\x94\xA4\n");
	printf("Char B --> JUNCTION_BOTTOM \xE2\x94\xB4\n");
	printf("Char V --> CROSS \xE2\x94\xBC\n");
 
   printf("\n\nChar --> '\xE0\xAA\x94'\n");
   
   printf("É especial %d\n", isSpecialLetter('K'));
   printf("É especial %d\n", isSpecialLetter('j'));
   
   printf("%d\n", countLetters("Hello")); // 5 = 1+1+1+1+1
 printf("%d\n", countLetters("World")); // 6 = 2+1+1+1+1
 printf("%d\n", countLetters("Work key F12")); // 12 = 2+1+1+2+0+2+1+2+0+1+0+0
 printf("%d\n", countLetters("123 ABC!")); // 3 = 0+0+0+0+1+1+1+0

  
  return 0;
}
