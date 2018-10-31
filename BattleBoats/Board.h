#ifndef BOARD_H
#define BOARD_H

#include "Boat.h"
#include "Cell.h"
#include <string>

using namespace std;

class Board
{
protected:

	Cell Grid[10][10];
	Boat Fleet[5];
	char symbols[5] = {'D','S','B','C','A' };

	int health = 15;
	bool defeatFlag = false;

public:

	Board();
	void printGrid();

	Cell * getCell(int r, int c);
	
	void createGrid();
	void createFleet();

	void placeBoat(Boat boat);
	void placeFleet();
	

	void AIplaceBoat(Boat boat);
	void AIplaceFleet();

	void decrementHealth();

	bool getDefeatFlag();

	void playerGuess();

	void aiGuess();





};


#endif // !BOARD_H
