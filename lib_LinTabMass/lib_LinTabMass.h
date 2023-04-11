#include <iostream>
#include "../lib_polinom/lib_polinom.h"
#include "../lib_TableInterface/lib_TableInterface.h"



class Data
{
private:
	std::string name;
	polinom pol;

public:
	void Init(std::string name1, polinom pol1) {
		name = name1;
		pol = pol1;
	}

	Data& operator= (const Data& right) {
		this->name = right.name;
		this->pol = right.pol;
	}

	std::string getName() { return name; }
	polinom getPolinom() { return pol; }
	void setPolinom(polinom newPol) { pol = newPol; }
};


class LinTabMass : public Table
{
protected:
	Data* dates;
	int size;
	int maxsize;

public:
	LinTabMass() {
		dates = new Data[5];
		maxsize = 5;
		size = 0;
	}

	void add(std::string name1, polinom pol) {
		if (size == maxsize) massResize();
		dates[size].Init(name1, pol);
		size++;
	}

	void destroyPol(int pos) override {
		if (size == 0) throw std::logic_error("beda");
		else
		{
			for (int i = pos; i < size; i++) {
				dates[i] = dates[i + 1];
			}
			size--;
		}
	}

	polinom find(std::string findName) override {
		for (int i = 0; i < size; i++) {
			if (findName == dates[i].getName()) return dates[i].getPolinom();
		}
		polinom null;
		return null;
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
		Data* newData = new Data[maxsize];
		maxsize += 3;
		for (int i = 0; i < size; i++) {
			newData[i] = dates[i];
		}
		dates = new Data[maxsize];
		for (int i = 0; i < size; i++) {
			dates[i] = newData[i];
		}
	}

	~LinTabMass() { delete[] dates; }
};