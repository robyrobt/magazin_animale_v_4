#include "Animal.h"
#include "utils.h"

Animal::Animal() {}

Animal::Animal(int c, std::string n, double p, std::string d, int v, int e) {
	this->cod = c;
	this->name = n;
	this->pret = p;
	this->data = d;
	this->varsta = v;
	this->exemplare = e;
}

Animal::Animal(string linie, char delim) {
	vector<string> token = spliLinie(linie, delim);
	this->cod = stoi(token[0]);
	this->name = token[1];
	this->pret = stod(token[2]);
	this->data = token[3];
	this->varsta = stoi(token[4]);
	this->exemplare = stoi(token[5]);
}

Animal::Animal(const Animal& animal) {
	this->cod = animal.cod;
	this->name = animal.name;
	this->pret = animal.pret;
	this->data = animal.data;
	this->varsta = animal.varsta;
	this->exemplare = animal.exemplare;
}

bool Animal::operator == (const Animal& animal) {
	return cod == animal.cod;
}

string Animal::toString() {
	return to_string(cod) + " " + name + " " + to_string(pret) + " " + data + " " + to_string(varsta) + " " + to_string(exemplare);
}

string Animal::toStringDelim(char delim) {
	return to_string(cod) + delim + name + delim + to_string(pret) + delim + data + delim + to_string(varsta) + delim + to_string(exemplare);
}

Animal::~Animal() {}