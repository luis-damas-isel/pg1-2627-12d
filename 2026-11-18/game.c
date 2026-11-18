#include "pg/pglib.h"

#define GAME_WIDTH 800
#define GAME_HEIGHT 600

#define BALL_RADIUS 100
#define BALL_JUMP 20    // Pixeis que a bola anda em cada clique do timer

int ball_steps = 0;      // Deslocação inicial da bola relativa ao local
                         // onde foi criada
                         
int multiplier = 1;

void window_clear(){
    // Pintar o fundo da janela
    graph_rect(0, 0, GAME_WIDTH, GAME_HEIGHT, c_blue, true);
}

void draw_ball(){
	window_clear();
	
	int ball_center_x = GAME_WIDTH/2+ball_steps;
	
	if (ball_center_x+BALL_RADIUS>GAME_WIDTH)
	  multiplier = -1;
	  // ball_steps += BALL_JUMP;  // ando para a direita
	else
	  if (ball_center_x<BALL_RADIUS)
	    multiplier = 1;
      // ball_steps-=BALL_JUMP;    // ando para a esquerda
    
    ball_steps += BALL_JUMP*multiplier;
    graph_circle(GAME_WIDTH/2+ball_steps, GAME_HEIGHT/2, BALL_RADIUS, c_red, true);
   
}

int main() {
	// chamada necessária antes da iniciação da biblioteca
	graph_init2("My first game", GAME_WIDTH, GAME_HEIGHT);

    window_clear();

    // Desenhar o círculo
    graph_circle(GAME_WIDTH/2, GAME_HEIGHT/2, BALL_RADIUS, c_orange, true);
  
    graph_regist_timer_handler(draw_ball, 100);

	graph_start();
	return 0;
}
