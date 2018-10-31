#include "Cell.h"


Cell::Cell()
{

}

Cell::Cell(int r, int c)
{
	row = r;
	column = c;
}

int Cell::getRow()
{
	return row;
}
int Cell::getColumn()
{
	return column;
}

bool Cell::getPresent()
{
	return present;
}

char Cell::getSymbol()
{
	return symbol;
}

bool Cell::getGuessed()
{
	return guessed;
}

void Cell::setSymbol(char s)
{
	symbol = s;
}

void Cell::setPresent(bool p)
{
	present = p;
}

void Cell::setGuessed(bool g)
{
	guessed = g;
}

