#include "User.h"
#include <iostream>

User::User(string name, string password, int id) 
	: userName(name), userPassword(password), userId(id)
{
	cout << "\nCreating User";
}

User::~User()
{
	cout << "\nDeleting User";
}

void User::setUserName(string name)
{
	userName = name;
}

void User::setUserPassword(string password)
{
	userPassword = password;
}

void User::setUserId(int id)
{
	userId = id;
}

string User::getUserName()
{
	return userName;
}

string User::getUserPassword()
{
	return userPassword;
}

int User::getUserId()
{
	return userId;
}