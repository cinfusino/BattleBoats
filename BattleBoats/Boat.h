#ifndef BOAT_H
#define BOAT_H


class Boat
{
    protected:
		int length;
		char symbol;
		bool placed = false;

	public:
		Boat();
		Boat(int l, char s);
		
		int getLength();
		char getSymbol();



};
#endif // !BOAT_H
