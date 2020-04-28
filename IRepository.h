#pragma once
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
class IRepository {
protected:
	vector<T> elem;
public:
	IRepository();
	void addItem(T&);
	void updateItem(T&, T&);
	int find(T&);
	int removeItem(T&);
	int size();
	vector<T> getAll();
};

template<class T>
inline IRepository<T>::IRepository() {}