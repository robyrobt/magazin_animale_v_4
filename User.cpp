#include "User.h"

User::User(){}

User::User(string name, string pass):user_name(name),password(pass) {}

User::~User() {}

bool User::operator==(const User& user) {
	return this->user_name == user.user_name && this->password == user.password;
}

string User::toString() {
	return this->user_name + " " + this->password;
}

string User::toStringDelim(char delim) {
	return this->user_name + delim + this->password;
}