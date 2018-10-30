#include <iostream>
#include "MainMenu.h"
#include "GameMenu.h"
#include "PlayerUser.h"
#include "AdminUser.h"
using namespace std;


MainMenu::MainMenu() : Menu()
{
	cout << "\nCreated Main Menu";
	setMenuSelection();
}

MainMenu::~MainMenu()
{
	cout << "\nDeleting Main Menu";
}

void MainMenu::printMenu()
{
	cout << "\n\nMain Menu" <<
		"\n\t1. Log In" <<
		"\n\t2. Create Account" <<
		"\n\t0. Exit Program";
}

void MainMenu::setMenuSelection()
{
	while (menuDone == 0)
	{
		printMenu();

		cout << "\nSelection: ";
		cin >> menuSelection;

		switch (menuSelection)
		{
		case 1:
		{
			//Login
			cout << "\nDo Login Stuff Here";
			cout << "\nGonna create a GameMenu";

			Menu * p_GameMenu = new GameMenu;
			delete p_GameMenu;

		}; break;

		case 2:
		{
			//Create Account
			//This stuff should (probably) be placed into a (AccountProcess?) class and the case should just call the class.

			cout << "\nDo Create Account Stuff Here";

			string userName;
			string userPassword;
			int userId;
			
			cout << "\nEnter New User Name: ";
			cin >> userName;

			cout << "\nEnter New Password: ";
			cin >> userPassword;

			userId = 6969;

			User * p_PlayerUser = new PlayerUser(userName, userPassword, userId); // player user

			cout << endl << p_PlayerUser->getUserId();
			cout << endl << p_PlayerUser->getUserName();
			cout << endl << p_PlayerUser->getUserPassword();

			cin.get();
			delete p_PlayerUser;


			//Just to show how this polymorphism stuff works:

			//User * p_AdminUser = new AdminUser(); // player user

			//cout << endl << p_AdminUser->getUserId();
			//cout << endl << p_AdminUser->getUserName();
			//cout << endl << p_AdminUser->getUserPassword();

			//cin.get();
			//delete p_AdminUser;






		}; break;

		case 0:
		{
			//Exit
			cout << "\nExiting Main Menu";
			menuDone = 1;
		}; break;

		}
	}
}
