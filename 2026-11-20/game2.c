#include "pg/pglib.h"

#define GAME_WIDTH 800
#define GAME_HEIGHT 600

#define BALL_RADIUS 100
#define BALL_JUMP 20    // Pixeis que a bola anda em cada clique do timer

int ball_x;
int ball_y;                   

void window_clear(){
    // Pintar o fundo da janela
    graph_rect(0, 0, GAME_WIDTH, GAME_HEIGHT, c_blue, true);
}

void ball_clear(){
	graph_circle(ball_x, ball_y, BALL_RADIUS, c_blue, true);
}

void ball_draw(){
	graph_circle(ball_x, ball_y, BALL_RADIUS, c_orange, true);
}

void ball_init(){
    ball_x = GAME_WIDTH/2;
    ball_y = GAME_HEIGHT/2;  
	ball_draw();
}


void my_keyboard_catch(KeyEvent ev){
	if (ev.state!= KEY_PRESSED) return;
	ball_clear();
	switch(ev.keysym){
		case SDLK_LEFT:
		case SDLK_a: ball_x -= BALL_JUMP; break;
		
		case SDLK_RIGHT:
		case SDLK_d: ball_x += BALL_JUMP; break;
		
		case SDLK_UP:
		case SDLK_w: ball_y -= BALL_JUMP; break;
		
		case SDLK_DOWN:
		case SDLK_s: ball_y += BALL_JUMP; break;
		
		case SDLK_SPACE: ball_init();
	}

    ball_draw();
}
 

int main() {
	// chamada necessária antes da iniciação da biblioteca
	graph_init2("My first game", GAME_WIDTH, GAME_HEIGHT);

    window_clear();
    ball_init();
    // Desenhar o círculo
    // graph_circle(ball_x, ball_y, BALL_RADIUS, c_orange, true);

    graph_regist_key_handler(my_keyboard_catch);
    
	graph_start();
	return 0;
}
