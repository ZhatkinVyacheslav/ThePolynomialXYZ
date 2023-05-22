#include "../lib_list/list.h"
#include "../lib_polinom/lib_polinom.h"
#include <iostream>
#include "../lib_TableInterface/lib_TableInterface.h"
#include <vector>


class DataHashTable
{
private:
	std::string name;
	polinom pol;

public:
	DataHashTable() {

	}

	DataHashTable(std::string name1, polinom pol1) {
		name = name1;
		pol = pol1;

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
		if (find(name1).CountMonoms() != 0) throw std::logic_error("Takoy polinom uzhe est'");
		int ind = HashFunk(name1);
		DataHashTable newData(name1, pol1);
		dates[ind].second.push_back(newData);
	}

	void destroyPol(std::string DestroyName)override {
		if (find(DestroyName).CountMonoms() == 0) throw std::logic_error("Polinoma s takim imenem net");
		if(isEmpty()) throw std::logic_error("Polinoma s takim imenem net");
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
		polinom EmptyPol;
		int ind = HashFunk(findName);
		if (dates[ind].second.size() == 0) return EmptyPol;
		for (int i = 0; i < dates[ind].second.size(); i++) {
			if (dates[ind].second.GetIndEl(i).name == findName)
			{
				return dates[ind].second.GetIndEl(i).pol;
			}
		}
		return EmptyPol;
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

	bool isEmpty() {
		for (int i = 0; i < 10; i++) {
			if (!dates[i].first) {
				return false;
			}
		}
		return true;
	}

	std::vector<std::pair<std::string, std::string>> print() {
		std::vector<std::pair<std::string, std::string>> res;
		for (int i = 0; i < size; i++) {
			if (!dates[i].first) {
				for (int j = 0; j < dates[i].second.size(); j++) {
					std::pair<std::string, std::string> newpair{ dates[i].second.GetIndEl(j).name,  dates[i].second.GetIndEl(j).pol.print_polinom() };
					res.push_back(newpair);
				}
			}
		}
		return res;
	}
};
