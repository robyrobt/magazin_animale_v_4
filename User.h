#pragma once
#include <iostream>
using namespace std;
class User
{
private:
	string user_name;
	string password;
public:
	User();
	~User();
	User(string, string);
	string getUserName() { return this->user_name; }
	string getPassword() { return this->password; }
	void setUserName(string user) { this->user_name = user; }
	void setpASSWORD(string pass) { this->password = pass; }
	bool operator == (const User&);
	string toString();
	string toStringDelim(char);
};

