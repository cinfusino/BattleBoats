#ifndef GAMEMENU_H
#define GAMEMENU_H

#include "Menu.h"

class GameMenu : public Menu
{
public:
	GameMenu();

	~GameMenu();

	void printMenu();

	void setMenuSelection();

};

#endif // !GAMEMENU_H