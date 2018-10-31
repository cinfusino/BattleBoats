#include <iostream>
#include "GameMenu.h"
#include "Game.h"

using namespace std;


GameMenu::GameMenu() : Menu()
{
	//cout << "\nCreated Game Menu";
	setMenuSelection();
}

GameMenu::~GameMenu()
{
	//cout << "\nDeleting Game Menu";
}

void GameMenu::printMenu()
{
	cout << "\n\nBattle Boats Main Menu" <<
		"\n\t1. Play Game" <<
		"\n\t2. Edit Profile" <<
		"\n\t3. View Game Information" <<
		"\n\t4. View Statistics" <<
		"\n\t0. Log Out\n";
}

void GameMenu::setMenuSelection()
{
	while (menuDone == 0)
	{
		printMenu();

		cout << "\nSelection: ";
		cin >> menuSelection;

		switch (menuSelection)
		{
		case 1:
		{
			//Play Game
			cout << "\nDo Play Game Stuff Here";
			Game * p_Game = new Game;

			delete p_Game;
			
		}; break;
		
		case 2:
		{
			//Edit Profile
			cout << "\nDo Edit Profile Stuff Here";
		}; break;
		case 3:
		{
			//View Game Information
			cout << "\nDo View Game Information Stuff Here";
		}; break;

		case 4:
		{
			//View Statistics
			cout << "\nDo Statistics Stuff Here";
		}; break;

		case 0:
		{
			//Log Out
			cout << "\nLogging Out";
			menuDone = 1;
		}; break;

		}
	}
}
