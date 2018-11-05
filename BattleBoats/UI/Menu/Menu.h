#ifndef MENU_H
#define MENU_H

class Menu
{
	protected:
		int menuSelection;
		
		int menuDone;

	public:
		Menu();
		
		~Menu();

		virtual void printMenu() = 0;

		virtual void setMenuSelection() = 0;

};

#endif // !MENU_H