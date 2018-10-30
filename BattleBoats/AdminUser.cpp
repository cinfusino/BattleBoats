#include "AdminUser.h"
#include <iostream>

using namespace std;

AdminUser::AdminUser()
	: User("admin", "password", 1)
{
	cout << "\nCreated Admin User";
}

AdminUser::~AdminUser()
{
	cout << "\nDeleting Admin User";
}
