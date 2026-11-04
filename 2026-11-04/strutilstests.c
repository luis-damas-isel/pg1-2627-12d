/**
 * strutilstests.c
 * Este programa contém um conjunto de testes para validar as implementações
 * presentes no ficheiro "strutils.c".
 * 
 * ISEL, outubro de 2026
 * 
 * Build : gcc -Wall  -o strutilstests strutilstests.c strutils.c  utils.c
 * Execute : strutilstests
 *---------------------------------------------------------------------------*/

#include <stdbool.h>
#include <string.h>

#include "tstutils.h"
#include <limits.h>
#include "strutils.h"
#include "utils.h"



// strRmChar tests

void removeDotsTest() {
    char str[] = 	"A..B";
	char expected[] = "AB";
    ASSERT_EQUAL_INT(2, strRmChar(str, '.'));
	ASSERT_EQUAL_STR(expected, str);
}

void removeNoneTest() {
    char str[] = 	"ABCD-123";
	char expected[] = "ABCD-123";
    
    ASSERT_EQUAL_INT(0, strRmChar(str, '_'));
	ASSERT_EQUAL_STR(expected, str);
}

void removeAllTest() {
    char str[] = 	"$$$$$$$$";
	char expected[] = "";
    
    ASSERT_EQUAL_INT(8, strRmChar(str, '$'));
	ASSERT_EQUAL_STR(expected, str);
}

void removeFirstLastTest() {
    char str[] = 	"    ABC ";
	char expected[] = "ABC";
    ASSERT_EQUAL_INT(5, strRmChar(str, ' '));
	ASSERT_EQUAL_STR(expected, str);
}

 
// strFillNonDigits tests

/** 	String original	Char	Resultado
* 	"abc123"		'*'		"a*b*c*123"
* 	"12345"			'?'		"12345"
* 	"a1b2c3"		'*'		"a*1b*2c*3"
* 	"12-34"			'@'		"12-@34"
* 	"A B"			'#'		"A# #B#"
*/

void fillAbcDigitsTest() {
	char str[30] = 	"abc123";
	char expected[] ="a*b*c*123";
    strFillNonDigits(str, '*');
	ASSERT_EQUAL_STR(expected, str);
}

void fillNoneTest() {
    char str[30] = 	"12345";
	char expected[] ="12345";
    strFillNonDigits(str, '*');
	ASSERT_EQUAL_STR(expected, str);
}

void fillAlternateTest() {
    char str[30] = 	"a1b2c3";
	char expected[] ="a*1b*2c*3";
    strFillNonDigits(str, '*');
	ASSERT_EQUAL_STR(expected, str);
}


void fillTraceTest() {
    char str[30] = 	"12-34";
	char expected[] = "12-@34";
    strFillNonDigits(str, '@');
	ASSERT_EQUAL_STR(expected, str);
}

void fillABTest() {
    char str[30] = 	"A B";
	char expected[] = "A# #B#";
    strFillNonDigits(str, '#');
	ASSERT_EQUAL_STR(expected, str);
}



// str_binary_pack tests

void pack_triple01() {
    char seq[] = "000111";
    char pack[5];
    char expected[] = "0212";
    ASSERT_TRUE(str_binary_pack(pack, seq));
    ASSERT_EQUAL_STR(expected, pack);
}

void pack_12zeros() {
    char seq[] = "000000000000";
    char pack[5];
    char expected[] = "0900";
    ASSERT_TRUE(str_binary_pack(pack,seq));
    ASSERT_EQUAL_STR(expected, pack);
}

void pack_13ones() {
    char seq[] = "1111111111111";
    char pack[5];
    char expected[] = "1912";
    ASSERT_TRUE(str_binary_pack(pack,seq));
    ASSERT_EQUAL_STR(expected, pack);
}

void pack_one() {
    char seq[] = "1";
    char pack[2];
    char expected[] = "1";
    ASSERT_TRUE(str_binary_pack(pack,seq));
    ASSERT_EQUAL_STR(expected, pack);
}

void pack_none() {
    char seq[] = "";
    char pack[1];
    char expected[] = "";
    ASSERT_TRUE(str_binary_pack(pack,seq));
    ASSERT_EQUAL_STR(expected, pack);
}

void pack_error() {
    char seq[] = "0001.";
    char pack[5];
    ASSERT_FALSE(str_binary_pack(pack,seq));
}

// str_binary_unpack tests


void unpack_triple01() {
    char pack[] = "0212";
    char seq[7];
    char expected[] = "000111";
    ASSERT_TRUE(str_binary_unpack(seq, pack, 7));
    ASSERT_EQUAL_STR(expected, seq);
}

 

void unpack_12zeros() {
    char seq[13] = {0};
    char pack[] = "0900";
    char expected[] = "000000000000";
    ASSERT_TRUE(str_binary_unpack(seq, pack, 13));
    
    ASSERT_EQUAL_STR(expected, seq);
}

void unpack_13ones() {
    char seq[14] = {0};
    char pack[] = "1912";
    char expected[] = "1111111111111";
    ASSERT_TRUE(str_binary_unpack(seq,pack, 14));
    ASSERT_EQUAL_STR(expected, seq);
}

void unpack_one() {
    char seq[2];
    char pack[] = "1";
    char expected[] = "1";
    ASSERT_TRUE(str_binary_unpack(seq,pack,2));
    ASSERT_EQUAL_STR(expected, seq);
}

void unpack_none() {
    char seq[1];
    char pack[] = "";
    char expected[] = "";
    ASSERT_TRUE(str_binary_unpack(seq,pack, 1));
    
    ASSERT_EQUAL_STR(expected, seq);
}
void unpack_many() {
    char seq[21];
    char pack[] = "00130913"; 
    char expected[] ="00111100000000001111";
    ASSERT_TRUE(str_binary_unpack(seq,pack, 20));
    
    ASSERT_EQUAL_STR(expected, seq);
}

void unpack_error1() {
    char seq[6];
    char pack[] = "021.";
    ASSERT_FALSE(str_binary_unpack(seq,pack, 6));
}

void unpack_error2() {
    char seq[7];
    char pack[] = "0311";
    ASSERT_FALSE(str_binary_unpack(seq,pack, 6));
}

void unpack_error3() {
    char seq[7];
    char pack[] = "1103";
    ASSERT_FALSE(str_binary_unpack(seq,pack, 6));
}

// strRamdomDigits tests


void strRandomDigitsTest() {
    char digits[11] = "0123456789";
	int ngood = 0;
    
    for(int n = 0; n < 10; ++n) {
        int variance = 0;
        strRandomDigits(digits);
        for(int i=0; i < 10; ++i) {
            variance += (i - (digits[i]-'0'))*(i - (digits[i]-'0'));
        }
        if (variance > 80) {
			ngood++;
		}

    }
	ASSERT_TRUE(ngood >= 5);
}

int main() { 
    random_init();

    // Remove tests
    TEST(removeDotsTest);
    TEST(removeNoneTest);
    TEST(removeAllTest);
    TEST(removeFirstLastTest);
    
    // Fill Non Digits Tests
    TEST(fillAbcDigitsTest);
    TEST(fillNoneTest);
    TEST(fillAlternateTest);
    TEST(fillTraceTest);
    TEST(fillABTest);
    
     // Pack tests
    TEST(pack_triple01);
    TEST(pack_12zeros);
    TEST(pack_13ones);

    TEST(pack_one);
    TEST(pack_none);
    TEST(pack_error);

    // Unpack tests
    TEST(unpack_triple01);
    TEST(unpack_12zeros);
    TEST(unpack_13ones);
    TEST(unpack_one);
    TEST(unpack_none);
    TEST(unpack_error1);
    TEST(unpack_error2);
    TEST(unpack_error3);
    
	// Random Digits Test
   
    TEST(strRandomDigitsTest);
	return 0;
}
	


