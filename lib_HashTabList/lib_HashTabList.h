#include "../lib_list/list.h"
#include "../lib_polinom/lib_polinom.h"
#include <iostream>
#include "../lib_TableInterface/lib_TableInterface.h"


class DataHashTable
{
private:
	std::string name;
	polinom pol;
	DataHashTable* next;
	DataHashTable* last;

public:
	DataHashTable() {
		next = nullptr;
		last = nullptr;
	}

	DataHashTable(std::string name1, polinom pol1) {
		name = name1;
		pol = pol1;
		next = nullptr; 
		last = nullptr;
	}

	DataHashTable* getThis(){
		return this;
	}

	friend class HashTableList;


};

class HashTableList : public Table
{
private:
	std::pair <bool, Clist<DataHashTable>>* dates;
	const int size = 10;

	int HashFunk(std::string name1) {
		int res = 0;
		for (auto a : name1) {
			res += (int)a;
		}
		return res % size;
	}

public:
	HashTableList() {
		dates = new std::pair <bool, Clist<DataHashTable>>[size];
		for (int i = 0; i < size; i++) {
			dates->first = true;
		}
	}

	~HashTableList() {
		delete[] dates;
	}

	void add(std::string name1, polinom pol1) override {
		int ind = HashFunk(name1);
		DataHashTable newData(name1, pol1);
		dates[ind].second.push_back(newData);
	}

	void destroyPol(std::string DestroyName)override {
		int ind = HashFunk(DestroyName);
		if (dates[ind].second.size() == 0) throw std::logic_error("Polinoma s takim imenem net");
		for (int i = 0; i < dates[ind].second.size(); i++) {
			if (DestroyName == dates[ind].second.GetIndEl(i).name)
			{
				dates[ind].second.erasePos(i);
				return;
			}
		}
		throw std::logic_error("Polinoma s takim imenem net");
	}

	polinom find(std::string findName) override {
		int ind = HashFunk(findName);
		if (dates[ind].second.size() == 0) throw std::logic_error("Polinoma s takim imenem net");
		for (int i = 0; i < dates[ind].second.size(); i++) {
			if (dates[ind].second.GetIndEl(i).name == findName)
			{
				return dates[ind].second.GetIndEl(i).pol;
			}
		}
		throw std::logic_error("Polinoma s takim imenem net");
	}

	void findAndReplace(std::string findName, polinom pol1) override {
		int ind = HashFunk(findName);
		if (dates[ind].second.size() == 0) throw std::logic_error("Polinoma s takim imenem net");
		for (int i = 0; i < dates[ind].second.size(); i++) {
			if (dates[ind].second.GetIndEl(i).name == findName)
			{
				dates[ind].second.GetIndEl(i).pol = pol1;
				return;
			}
		}
		throw std::logic_error("Polinoma s takim imenem net");
	}
};
