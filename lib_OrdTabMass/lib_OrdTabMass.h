#include <iostream>
#include <vector>
#include "../lib_polinom/lib_polinom.h"
#include "../lib_TableInterface/lib_TableInterface.h"

class DataOrdTab
{
private:
	std::string name;
	polinom pol;

public:
	DataOrdTab(std::string name1, polinom pol1) {
		name = name1;
		pol = pol1;
	}
	DataOrdTab() {}

	friend class OrdTabMass;

	DataOrdTab& operator= (const DataOrdTab& right) {
		this->name = right.name;
		this->pol = right.pol;
		return *this;
	}
};

class OrdTabMass : public Table
{
	DataOrdTab* dates;
	int size;
	int maxsize;

public:
	OrdTabMass() {
		size = 0;
		maxsize = 5;
		dates = new DataOrdTab[maxsize];
		for (int i = 0; i < maxsize; i++) {
			dates[i].name = "";
		}
	}

	void add(std::string name1, polinom pol1) override {
		if (find(name1).CountMonoms() != 0) throw std::logic_error("Takoy polinom uzhe est'");
		DataOrdTab newDate(name1, pol1);
		bool flag = true;
		if (size == 0)  dates[0] = newDate;
		else {
			for (int i = 0; i < size; i++) {
				if (dates[i].name == "" && flag)
				{
					dates[i] = newDate;
					flag = false;
				}
				if (((int)name1[0] < (int)dates->name[0]) && flag) {
					for (int j = size + 1; j > i; j--) {
						dates[j] = dates[j - 1];
					}
					dates[i] = newDate;
					flag = false;
				} 
			}
		}
		size++;
		if (size == maxsize) {
			massResize();
		}
	}

	void destroyPol(std::string DestroyName)override {
		if (size == 0) throw std::logic_error("beda");
		if (find(DestroyName).CountMonoms() == 0) throw std::logic_error("Polinoma s takim imenem net");
		for(int i = 0; i < size; i++) {
			if (dates[i].name == DestroyName) {
				for (int j = i; j < size; j++) {
					dates[j] = dates[j + 1];
				}
				size--;
				return;
			}
		}
	}

	polinom find(std::string findName) override {
		polinom EmptyPol;
		if (size == 0) return EmptyPol;
		for (int i = 0; i < size; i++) {
			if (findName == dates[i].name) return dates[i].pol;
		}
		return EmptyPol;
	}

	void findAndReplace(std::string findName, polinom pol1) override {
		if (size == 0) throw std::logic_error("Polinoma s takim imenem net");
		for (int i = 0; i < size; i++) {
			if (findName == dates[i].name)
			{
				dates[i].pol = pol1;
				return;
			}
		}
		throw std::logic_error("Polinoma s takim imenem net");
	}

	void massResize() {
		maxsize += 3;
		DataOrdTab* newData = new DataOrdTab[maxsize];
		for (int i = 0; i < size; i++) {
			newData[i] = dates[i];
		}
		delete[] dates;
		dates = new DataOrdTab[maxsize];
		dates = newData;
	}

	std::vector<std::pair<std::string, std::string>> print() {
		std::vector<std::pair<std::string, std::string>> res;
		for (int i = 0; i < size; i++) {
			std::pair<std::string, std::string> newpair{ dates[i].name,  dates[i].pol.print_polinom() };
			res.push_back(newpair);
		}
		return res;
	}

	~OrdTabMass() {
		delete[] dates;
	}


private:

};
