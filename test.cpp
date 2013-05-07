#include "game.h"

int main () {
	Game game;
	while(true){
		game.update();
		game.render();
	}
	return 0;
}

