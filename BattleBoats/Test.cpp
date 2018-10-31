
class Cell()
{
    protected:
		int row;
		char column;
		bool boatPresent;

	public: 
		Cell(int r, char c)
		{
			row = r;
			column = c;
		}

		int getRow()
		{
			return row;
		}
		int getColumn()
		{
			return column;
		}
};


class Board
{
	protected:
		Cell Grid[10][10];

	public:
		Board()
		{
			for (int r = 0; r < 10; r++)
			{
				for (int c = 0; c < 10; c++)
				{
					Grid[r][c] = Cell(r, 'A' + c)
				}
			}
		}

		void printGrid()
		{
			for (int r = 0; r < 10; r++)
			{
				for (int c = 0; c < 10; c++)
				{
                    cout << r << ", " << c << " is equal to: ";                    
					cout << Grid[r][c].getRow() << ", "
                    cout << Grid[r][c].getColumn()
				}
			}
		}

};


