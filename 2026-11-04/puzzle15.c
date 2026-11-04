/**
 * Contém uma aimplementação incompleta de programa
 * para solucionar puzzles de 8 ou 15 peças.
 *
 * Poderá criar novas funções auxiliares para realizar as funções pedidas.
 * 
 * Para compilar, use os comandos:
 * gcc -o puzzle8 -Wall puzzle15.c utils.c
 * gcc -o puzzle15 -Wall puzzle15.c utils.c
 */
 
#include <stdio.h>
#include <ctype.h>
#include "utils.h"
#include <stdbool.h>
#include "puzzle15.h"


/**
 * Determina se a casa de coordenadas "r", "c" corresponde à casa vazia.
 * retorna true se sim, false caso contrário.
 */
bool piece_free(const board_t board, int r, int c) {
    TO_IMPLEMENT("piece_free");
	return false;
}

/**
 * Função auxiliar para copiar o conteúdo do array "seq" com valores
 * entre 0 e NPIECES-1 para o tabuleiro "board", preenchendo aslinhas 
 * do tabuleiro da primeira para a última.
 */
void seq_to_board(byte seq[NPIECES], board_t board) {
	  TO_IMPLEMENT("seq_to_board");
}

/**
 * Função auxiliar para copiar o conteúdo do tabuleiro "board",
 * da primeira à última linha, para o array "seq", da posição 0
 * até à posição NPIECES -1
 */
void board_to_seq(const board_t board, byte seq[NPIECES]) {
	  TO_IMPLEMENT("board_to_seq");
}


/**
 * Desloca, se possível, a peça do tabuleiro "board", na posição linha "r", coluna "c",
 * para a "casa vazia", passando esta para a posição da peça movida.
 * 
 * Note-se que a jogada só é possível se a posição corresponder a uma
 * peça adjacente (acima, abaixo, à esquerda ou à direita) da "casa vazia"
 * 
 * retorna true se a jogada foi realizada, false caso contrário.
 * 
 */
bool piece_move(board_t board, int r, int c) {
    TO_IMPLEMENT("piece_move");
    return false;
}

/**
 * Determina se um dado tabuleiro é solucionável.
 * 
 * Para tabuleiros de lado de dimensão ímpar (3x3),
 * o número de inversões (peça maior antes de menor) que ocorre na linearização do tabuleiro,
 * sem considerar a casa vazia, tem de ser par.
 * Por exemplo, o tabuleiro   3 4 5
 *                            6 7 2
 *                            1   8
 * que linearizado corresponde à sequência: 3 4 5 6 7 2 1 8,  
 * ignorando a casa vazia.
 * Neste caso tem 11 inversões, um número impar, logo não é solucionável.
 * 
 * Mas se trocarmos os primeiros dois números: 4 3 5 6 7 2 1 8,
 * passamos a 12 inversões, um número par, logo o novo tabuleiro é solucionável
 * 
 * Para tabuleiros de lado par (4 x 4), tem adicionalmente de se considerar
 * a linha onde está a casa vazia. Considerando a linha de cima como a linha 1,
 * e designando a linha da casa vazia como blank_row, então a soma:
 * (inversões + blank_row) tem de ser par.
 */

bool solvable(const board_t board) {
	TO_IMPLEMENT("solvable");
	return false;
}


/**
 * Cria um tabuleiro de forma aleatória, mas garantidamente solucionável.
 * Sugere-se a criação de uma sequência aleatória de números de 0 a NPIECES-1,
 * e a aplicação de uma troca adicional, caso o tabuleiro resultante não seja solucionável.
 */
void board_build_random(board_t board) {
	TO_IMPLEMENT("board_build_random");
}
 
/**
 * Desenha o tabuleiro, tirando partido das funções anteriores
 */
void board_show(const board_t board) {
 	TO_IMPLEMENT("board_show");
}

/**
 * Verifica se o puzzle está resolvido,
 * isto é, que todas as peças estão na sua casa final.
 * Retorna true se sim, false caso contrário.
 */
bool puzzle_solved(const board_t board) {
	TO_IMPLEMENT("puzzle_solved");
	return true;
}

/**
 * Executa uma nova jogada
 */
void play(board_t board) {
	char row;
	int col;
	
	do {
		printf("Jogada: ");
		int res = scanf("%c%d", &row, &col);
		row = toupper(row);
		while (getchar() != '\n');
		if (res != 2 || row < 'A' || row > 'A' + BOARD_SIDE-1 || col < 1 || col > BOARD_SIDE) {
			printf("Coordenadas inválidas!\n");
			continue;
		}
		if (piece_move(board, row-'A', col-1)) break;
		printf("Célula vazia ou não adjacente!\n");
	}
	while(true);
}

/**
 * Iniciao o puzzle e executa o jogo.
 */
int main() {
	board_t board;
	int steps = 0;

	random_init();

	board_build_random(board);
	do {
		printf("\nPasso %d\n\n", ++steps);
		board_show(board);
		play(board);
	}
	while(!puzzle_solved(board));
	printf("\n");
    board_show(board);
	printf("Resolvido em %d passos\n", steps);
	return 0;
}

