#include <iostream>
#include <vector>
#include "../lib_polinom/lib_polinom.h"
#include "../lib_TableInterface/lib_TableInterface.h"



class DataLinTabMass
{
private:
	std::string name;
	polinom pol;

public:
	void Init(std::string name1, polinom pol1) {
		name = name1;
		pol = pol1;
	}

	DataLinTabMass& operator= (const DataLinTabMass& right) {
		this->name = right.name;
		this->pol = right.pol;
		return *this;
	}

	std::string getName() { return name; }
	polinom getPolinom() { return pol; }
	void setPolinom(polinom& newPol) { 
		pol = newPol;
	}
	void setName(std::string name1) { name = name1; }
};


class LinTabMass : public Table
{
protected:
	DataLinTabMass* dates;
	int size;
	int maxsize;

public:
	LinTabMass() {
		dates = new DataLinTabMass[5];
		maxsize = 5;
		size = 0;
	}

	LinTabMass(int Maxsize1) {
		dates = new DataLinTabMass[Maxsize1];
		maxsize = Maxsize1;
		size = 0;
	}

	void add(std::string name1, polinom pol) {
		if (find(name1).CountMonoms() != 0) throw std::logic_error("Takoy polinom uzhe est'");
		if (size == maxsize) massResize();
		dates[size].Init(name1, pol);
		size++;
	}

	void destroyPol(std::string DestroyName) override {
		if (size == 0) throw std::logic_error("beda");
		if (find(DestroyName).CountMonoms() == 0) throw std::logic_error("Polinoma s takim imenem net");
		for (int j = 0; j < size; j++) {
			if (dates[j].getName() == DestroyName) {
				for (int i = j; i < size; i++) {
					dates[i] = dates[i + 1];
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
			if (findName == dates[i].getName()) return dates[i].getPolinom();
		}
		return EmptyPol;
	}

	void findAndReplace(std::string findName, polinom pol) override {
		bool flag = true;
		for (int i = 0; i < size; i++) {
			if (findName == dates[i].getName()) {
				dates[i].setPolinom(pol);
				flag = false;
			}
		}
		if (flag) throw std::logic_error("Error! Net polinoma s takim imenem");
	}

	void massResize() {
		DataLinTabMass* newData = new DataLinTabMass[maxsize];
		maxsize += 3;

		for (int i = 0; i < size; i++) {
			newData[i].setPolinom(dates[i].getPolinom());
			newData[i].setName(dates[i].getName());
		}

		dates = new DataLinTabMass[maxsize];
		for (int i = 0; i < size; i++) {
			dates[i] = newData[i];
		}
	}


	std::vector<std::pair<std::string, std::string>> print() {
		std::vector<std::pair<std::string, std::string>> res;
		for (int i = 0; i < size; i++) {
			std::pair<std::string, std::string> newpair{ dates[i].getName(),  dates[i].getPolinom().print_polinom()};
			res.push_back(newpair);
		}
		return res;
	}

	~LinTabMass() { delete[] dates; }
};