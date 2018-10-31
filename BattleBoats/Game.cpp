#include "Game.h"
#include <iostream>
using namespace std;

Game::Game()
{
	setupGame();
}


void Game::setupGame()
{

	attackBoard->AIplaceFleet();
	attackBoard->printGrid();

	baseBoard->printGrid();
	baseBoard->placeFleet();


	while (!baseBoard->getDefeatFlag() && !attackBoard->getDefeatFlag())
	{
		attackBoard->printGrid();
		baseBoard->printGrid();
		attackBoard->playerGuess();


		attackBoard->printGrid();
		baseBoard->printGrid();
		baseBoard->aiGuess();
	}
	
	if (baseBoard->getDefeatFlag())
	{
		cout << "\nYOU WON!";
	}
	else
	{
		cout << "\nYOU LOST!";
	}







}



