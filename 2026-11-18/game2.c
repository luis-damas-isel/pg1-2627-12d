#include "pg/pglib.h"

#define GAME_WIDTH 800
#define GAME_HEIGHT 600

#define BALL_RADIUS 100
#define BALL_JUMP 20    // Pixeis que a bola anda em cada clique do timer

int ball_steps = 0;      // Deslocação inicial da bola relativa ao local
                         // onde foi criada
                   

void window_clear(){
    // Pintar o fundo da janela
    graph_rect(0, 0, GAME_WIDTH, GAME_HEIGHT, c_blue, true);
}

void my_keyboard_catch(KeyEvent ev){
	printf("KEY PRESSED.... state=%d  key=%d\n", ev.state, ev.keysym);
	fflush(stdout);
}
 

int main() {
	// chamada necessária antes da iniciação da biblioteca
	graph_init2("My first game", GAME_WIDTH, GAME_HEIGHT);

    window_clear();
    // Desenhar o círculo
    graph_circle(GAME_WIDTH/2, GAME_HEIGHT/2, BALL_RADIUS, c_orange, true);

    graph_regist_key_handler(my_keyboard_catch);
    
	graph_start();
	return 0;
}
