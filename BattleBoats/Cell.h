#ifndef CELL_H
#define CELL_H

class Cell
{
protected:
	int row;
	int column;
	bool present = false;
	//Boat * parkedBoat = NULL;
    bool guessed = false;
	char symbol = '#';

public:
	Cell();
	Cell(int r, int c);

	int getRow();
	int getColumn();
	bool getPresent();
	char getSymbol();
	bool getGuessed();

	void setSymbol(char s);
	void setPresent(bool p);
	void setGuessed(bool g);



	};


#endif //!CELL_H
