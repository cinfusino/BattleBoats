#ifndef MAINMENU_H
#define MAINMENU_H

#include "Menu.h"

class MainMenu : public Menu
{
	public:
		MainMenu();

		~MainMenu();

		void printMenu();

		void setMenuSelection();

};

#endif // !MAINMENU_H