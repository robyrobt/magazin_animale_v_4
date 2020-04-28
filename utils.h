#pragma once

#include <sstream>
#include <iostream>
#include <vector>

using namespace std;

vector<string> spliLinie(string linie, char delim) {
	std::stringstream ss(linie);
	std::string item;
	vector<string> elem;
	while (getline(ss, item, delim)) {
		elem.push_back(item);
	}
	return elem;
}