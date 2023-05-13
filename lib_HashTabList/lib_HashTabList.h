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
		name = nullptr;
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
	std::pair <bool, DataHashTable>* dates;
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
		dates = new std::pair <bool, DataHashTable>[size];
		for (int i = 0; i < size; i++) {
			dates->first = true;
		}
	}

	~HashTableList() {
		delete[] dates;
	}

	void add(std::string name1, polinom pol1) override {
		int ind = HashFunk(name1);
		if (dates[ind].first) {
			dates[ind].second.name = name1;
			dates[ind].second.pol = pol1;
			dates[ind].second.last = dates[ind].second.getThis();
		}
		else {
			DataHashTable* NewData = new DataHashTable(name1, pol1);
			dates[ind].second.last->next = NewData;
			dates[ind].second.last = NewData;
			NewData->last = NewData->getThis();
		}
	}

	void destroyPol(std::string DestroyName)override {
		int ind = HashFunk(DestroyName);
		if (dates[ind].first) return;
		DataHashTable* cur = dates[ind].second.getThis();
		if (dates[ind].second.name == DestroyName) {
			dates[ind].second.name = dates[ind].second.next->name;
			dates[ind].second.pol = dates[ind].second.next->pol;
			dates[ind].second.next = dates[ind].second.next->next;
			dates[ind].second.last = dates[ind].second.next->last;
		}
		else {
			while (cur->next != dates[ind].second.last || cur->next->name != DestroyName) {
				cur = cur->next;
			}
			if (cur->next == dates[ind].second.last) {
				if (cur->next->name == DestroyName) {
					cur->next = nullptr;
					dates[ind].second.last = cur;
				}
				else return;
			}
			else {
				cur->next = cur->next->next;
			}
		}
	}

	polinom find(std::string findName) override {
		polinom Empty;
		int ind = HashFunk(findName);
		if (dates[ind].first) throw std::logic_error("Polinoma s takim imenem net");
		DataHashTable* cur = dates[ind].second.getThis();
		while (cur != cur->last) {
			if (cur->name == findName) return cur->pol;
			cur = cur->next;
		}
		if (cur->name == findName) return cur->pol;
		else throw std::logic_error("Polinoma s takim imenem net");
	}

	void findAndReplace(std::string findName, polinom pol1) override {
		int ind = HashFunk(findName);
		if (dates[ind].first) throw std::logic_error("Polinoma s takim imenem net");
		DataHashTable* cur = dates[ind].second.getThis();
		while (cur != cur->last) {
			if (cur->name == findName)
			{
				cur->pol = pol1;
				return;
			}
			cur = cur->next;
		}
		if (cur->name == findName) cur->pol = pol1;
		else  throw std::logic_error("Polinoma s takim imenem net");
	}
};
