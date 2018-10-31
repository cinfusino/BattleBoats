#include "Board.h"
#include "Cell.h"
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

Board::Board()
{	
	createGrid();
	createFleet();
}

void Board::createGrid()
{
	for (int r = 0; r < 10; r++)
	{
		for (int c = 0; c < 10; c++)
		{
			Grid[r][c] = Cell(r, c);
		}
	}
}

void Board::createFleet()
{
	for (int i = 0; i < 5; i++)
	{
		Fleet[i] = Boat(i + 1, symbols[i]);
	}
}



void Board::printGrid()
{
	cout << "\n\n";
	for (int r = 0; r < 10; r++)
	{
		for (int c = 0; c < 10; c++)
		{
			/*cout << "[" << Grid[r][c].getRow() << ",";
			cout << Grid[r][c].getColumn() << "] = ";*/
			cout << Grid[r][c].getSymbol() << " " ;
		}
		cout << "\n";
	}

}


Cell * Board::getCell(int r, int c)
{
	return &Grid[r][c];
}

void Board::placeBoat(Boat boat)
{
	int length = boat.getLength();
	for (int i = length; i > 0; i--)
	{
		cout << "\nEnter location coordinate (XY):";
		string submitCell;
		cin >> submitCell;
		//convert to char to int
		int chosenColumn = submitCell[0] - '0';
		int chosenRow = submitCell[1] - '0';
		bool valid = false;
		Cell * chosenCell = NULL;
		if ((chosenColumn < 10) && (chosenColumn >= 0))
		{
			if ((chosenRow < 10) && (chosenRow >= 0))
			{
				chosenCell = getCell(chosenRow, chosenColumn);

				valid = true;				
				bool taken = chosenCell->getPresent();
				if (taken == true)
				{
					valid = false;
				}
			}
		}
		if (valid == false)
		{
			cout << "Cell is invalid, please try again";
			i++;
		}
		else
		{
			chosenCell->setPresent(true);
			chosenCell->setSymbol(boat.getSymbol());
			printGrid();
		}
	}
}


void Board::placeFleet()
{
	for (int i = 0; i < 5; i++)
	{
		placeBoat(Fleet[i]);
	}
}


void Board::AIplaceBoat(Boat boat)
{
	srand(time(NULL));
	int length = boat.getLength();
	for (int i = length; i > 0; i--)
	{

		
		int chosenColumn = rand() % 9;
		int chosenRow = rand() % 9;
		

		
		bool valid = false;
		Cell * chosenCell = NULL;
		if ((chosenColumn < 10) && (chosenColumn >= 0))
		{
			if ((chosenRow < 10) && (chosenRow >= 0))
			{
				chosenCell = getCell(chosenRow, chosenColumn);

				valid = true;
				bool taken = chosenCell->getPresent();
				if (taken == true)
				{
					valid = false;
				}
			}
		}
		if (valid == false)
		{
			i++;
		}
		else
		{
			chosenCell->setPresent(true);
			chosenCell->setSymbol(boat.getSymbol());
		}
	}
}




void Board::AIplaceFleet()
{
	for (int i = 0; i < 5; i++)
	{
		AIplaceBoat(Fleet[i]);
	}
}



void Board::decrementHealth()
{
	health--;
	cout << "\n" << health << "\n";
	if (health == 0)
	{
		defeatFlag = true;
	}

}


bool Board::getDefeatFlag()
{
	return defeatFlag;
}


void Board::playerGuess()
{
	bool valid = false;
	while (valid == false)
	{
		cout << "\nEnter missile coordinates (XY): ";
		string submitCell;
		cin >> submitCell;
		//convert to char to int
		int chosenColumn = submitCell[0] - '0';
		int chosenRow = submitCell[1] - '0';
		
		Cell * chosenCell = NULL;
		if ((chosenColumn < 10) && (chosenColumn >= 0))
		{
			if ((chosenRow < 10) && (chosenRow >= 0))
			{
				chosenCell = getCell(chosenRow, chosenColumn);

				valid = true;
				bool taken = chosenCell->getGuessed();
				if (taken == true)
				{
					valid = false;
				}
			}
		}
		if (valid == false)
		{
			cout << "Cell is invalid, please try again";
		}
		else
		{
			chosenCell->setGuessed(true);
			if (chosenCell->getPresent())
			{
				//hit
				decrementHealth();
				chosenCell->setSymbol('X');
			}
			else 
			{
				//miss
				chosenCell->setSymbol('O');
			}
			
			printGrid();
		}
	}
}

void Board::aiGuess()
{
	bool valid = false;
	while (valid == false)
	{

		int chosenColumn = rand() % 9;
		int chosenRow = rand() % 9;

		Cell * chosenCell = NULL;
		if ((chosenColumn < 10) && (chosenColumn >= 0))
		{
			if ((chosenRow < 10) && (chosenRow >= 0))
			{
				chosenCell = getCell(chosenRow, chosenColumn);

				valid = true;
				bool taken = chosenCell->getGuessed();
				if (taken == true)
				{
					valid = false;
				}
			}
		}
		if (valid == false)
		{
			cout << "Cell is invalid, please try again";
		}
		else
		{
			chosenCell->setGuessed(true);
			if (chosenCell->getPresent())
			{
				//hit
				decrementHealth();
				chosenCell->setSymbol(167);
			}
			else
			{
				//miss
				chosenCell->setSymbol(164);
			}

			printGrid();
		}
	}
}