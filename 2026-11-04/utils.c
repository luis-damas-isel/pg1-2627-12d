#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "utils.h"

#include <stdbool.h>

/**
 * define uma nova semente (valor inicial) para o gerador pseudo-aleatório
 * relacionada com o tempo de calendário
 */
void random_init() {
    srand(time(NULL));
}

/**
 * retorna um valor aleatório dentro dos limites
 * especificados por parâmetro (intervalo fechado)
 */
int random_range(int start, int end) {
    return rand() % (end-start+1) + start;
}

/**
 * Apresenta uma mensagem de erro relativo à função não implementada
 * e termina o programa
 */
void TO_IMPLEMENT(char msg[]) {
    printf("function %s not implemented!\n", msg);
    exit(1);
}

 
