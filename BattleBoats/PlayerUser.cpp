#include "PlayerUser.h"
#include <iostream>

using namespace std;

PlayerUser::PlayerUser(string name, string password, int id) 
	: User(name, password, id)
{
	cout << "\nCreated Player User";
}

PlayerUser::~PlayerUser()
{
	cout << "\nDeleting Player User";
}
