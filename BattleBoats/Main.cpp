#include <iostream>
#include "MainMenu.h"
#include "GameMenu.h"
using namespace std;
int main()
{

	//this should be called by an over-all application system and presented on startup
	Menu * p_MainMenu = new MainMenu;
	
	delete p_MainMenu;

	cin.get();
	return 0;
}