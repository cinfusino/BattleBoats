#ifndef USER_H
#define USER_H

#include <string>

using namespace std;
class User
{
	protected:
		string userName;
		string userPassword;
		int userId;

	public:

		User(string name, string password, int id);
		
		~User();

		void setUserName(string name);

		void setUserPassword(string password);

		void setUserId(int id);

		string getUserName();

		string getUserPassword();

		int getUserId();

		//to write to a file.
		//saveUser();

};

#endif // !USER_H
