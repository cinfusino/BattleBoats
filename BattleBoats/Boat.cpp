#include "Boat.h"

Boat::Boat()
{

}

Boat::Boat(int l, char s)
{
	length = l;
	symbol = s;
}

int Boat::getLength()
{
	return length;
}

char Boat::getSymbol()
{
	return symbol;
}