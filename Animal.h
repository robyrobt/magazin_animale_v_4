#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
	int cod, varsta, exemplare;
	string name;
	string data;
	double pret;
public:
	Animal();
	Animal(int c, string n, double p, string d, int v, int e);
	Animal(std::string, char);
	Animal(const Animal&);
	~Animal();
	int getCod() { return this->cod; }
	string getName() { return this->name; }
	double getPret() { return this->pret; }
	string getData() { return this->data; }
	int getAge() { return this->varsta; }
	int getExemplare() { return this->exemplare; }
	void setCod(int c) { this->cod = c; }
	void setName(string n) { this->name = n; }
	void setPret(double p) { this->pret = p; }
	void setData(string d) { this->data = d; }
	void setAge(int a) { this->varsta = a; }
	void setExemplare(int e) { this->exemplare = e; }
	bool operator == (const Animal&);
	string toString();
	string toStringDelim(char);
};

