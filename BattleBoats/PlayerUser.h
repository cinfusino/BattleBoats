#ifndef PLAYERUSER_H
#define PLAYERUSER_H

#include "User.h"
#include <string>

using namespace std;
class PlayerUser : public User
{
	protected:
		//Statiscs Stats

	public: 
		PlayerUser(string name, string password, int id);

		~PlayerUser();


};

#endif // !PLAYERUSER_H
