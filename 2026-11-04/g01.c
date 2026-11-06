// ficheiro de include necessário
#include "pg/pglib.h"
int main() {
	// chamada necessária antes da iniciação da biblioteca
	graph_init2("Turma 12d - Start App", 800, 600);
	         
	// desenho de um triângulo dados os pontos dos vértices.
	// O penúltimo argumento indica a côr e o último que o
	 // triângulo é desenhado “a cheio”
	graph_triangle(150, 300, 450, 300, 300, 50, c_red, true);
	// desenho de um segundo triângulo dados os pontos dos vértices,
	
	// a cor e com desenho “a cheio”
	graph_triangle(150, 150, 450, 150, 300, 400, c_blue, true);
	// chamada necessária para o correto refrescamento da consola gráfica
	
	graph_start();
	return 0;
}
