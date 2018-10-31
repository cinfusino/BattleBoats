#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "Boat.h"
#include <string>

using namespace std;

class Game
{

	protected:
		Board * baseBoard = new Board();
		Board * attackBoard = new Board();

	
	public:
		Game();
		void setupGame();


};



#endif // !GAME_H
