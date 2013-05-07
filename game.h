#include <iostream>
using namespace std;

class Game {
	int loop;
	public:
		Game ();
		void update ();
		void render ();
};


Game::Game () {
	loop = 0;
}

void Game::update () {
	loop++;
}

void Game::render () {
	cout << "Hello World!\n";
}
