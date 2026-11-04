#include "strutils.h"
#include "utils.h"


/**
 * Remove da string "str" todos os caracteres "ch" nela presentes.
 * Exemplo: 
 *    char str[] = "teste-1"
 *    a chamada:
 *    int res =  strRmChar(str, '-');
 * 
 *    altera a string "str" para "teste1" e inicia "res" com 1.
 * Retorno:
 * 	retorna o total de caracteres removidos
 */
int strRmChar(char str[], char ch) {
	TO_IMPLEMENT("strRmChar");
	return 0;
}

  
/**
 *  Altera a string recebida, inserindo o carácter "ch" imediatamente 
 * a seguir a cada carácter que não seja um dígito decimal ('0' a '9'). 
 * Os dígitos não são alterados. 
 * A string original é modificada diretamente.  
 * Exemplos:
 * 	String original	Char	Resultado
 * 	"abc123"		'*'		"a*b*c*123"
 * 	"12345"			'?'		"12345"
 * 	"a1b2c3"		'*'		"a*1b*2c*3"
 * 	"12-34"			'@'		"12-@34"
 * 	"A B"			'#'		"A# #B#"
 *
 */
void strFillNonDigits(char str[], char ch) {
	TO_IMPLEMENT("strFillNonDigits");
}
 

/**
 * A string "to_pack" contém sequências de dimensões arbitrárias de 1's e 0's.
 * A função compacta a string "to_pack", colocando o resultado da compactação na string "packed",
 * com os seguintes critérios:
 *   - sequências unitárias ou de dimensão 2 são copiadas diretamente.
 *   - sequências de dimensão entre 3 e 10 são compactadas com dois caracteres: o primeiro é o caracter da sequência
 *     e o segundo é o caracter entre 2 e 9 que indica a respectiva dimensão (menos um).
 * Exemplo:
 *    Dada a string "11000111100000000000001"
 *    a string "packed" é preenchida com "11021309021"
 *    Assume-se que a capacidade do array "packed" é pelo menos igual à dimensão da string "to_pack" + 1
 * Parâmetros:
 *   "to_pack" - string a compactar
 *   "packed" -  contém o resultado da compactação, se bem sucedida
 * Retorno:
 *    true - se atring original só tiver 1 e 0's, e a compactação for bem sucedida.
 *    false - se existir algum caracter inválido na string original
 */
bool str_binary_pack( char packed[], const char to_pack[]) {
	TO_IMPLEMENT("str_binary_pack");
	return false;
}
   
/**
 * reverte a acção da função "str_binary_pack", isto é, assume que a string "packed" é uma
 * string compactada pela função anterior, e coloca na string "dest" o resultado da descompactação.
 * O parâmetro "dest_capacity" indica a dimensão do array "dest"
 * Exemplo:
 *    seja "packed" a string "11021309021"
 *    "dest" fica com a string "11000111100000000000001"
 * 
 * Parâmetros:
 *  "packed" : A string compactada
 *  "dest"   : array onde vai ser colocado o resultado da descompactação
 *  "dest_capacity" :  máximo de caracteres que a string "dest" pode conter 
 *  (incluindo o terminador)
 * Retorno:
 *  false caso "dest_capacity" seja insuficiente para guardar o resultado da descompactação,
 *  true se esta for bem sucedida.
 *
 */ 
bool str_binary_unpack(char dest[], const char packed[], int dest_capacity) {
	TO_IMPLEMENT("str_binary_unpack");
	return false;	
}


/**
 * coloca em "str" uma string com os digitos de '0' a '9'
 * distribuídos de forma aleatória, diferente de cada vez que é chamada.
 * Exemplo: "4869137502"
 */
void strRandomDigits(char str[11]) {
  str[10]='\0';
  for (int i=0; i<10; i++)
    str[i] = random_range('0','9');
}

