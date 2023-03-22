#include <iostream>
#include "../lib_polinom/lib_polinom.h"
#include "../lib_TableInterface/lib_TableInterface.h"


class Data
{
private:
	std::string* names;
	polinom* polinoms;
	int maxsize;
	int size = 0;
public:
	Data() {
		names = new std::string[5];
		polinoms = new polinom[5];
		maxsize = 5;
		size = 0;
	}

	void SetMass(int ind, std::string name, polinom pol) {
		names[ind] = name;
		polinoms[ind] = pol;
	}

	std::string getName(int ind) {
		return names[ind];
	}

	polinom getPol(int ind) {
		return polinoms[ind];
	}

	void add(std::string name1, polinom pol) {
		if (size == maxsize) massResize();
		names[size] = name1;
		polinoms[size] = pol;
		size++;
	}

	void destroyPol(int pos) {
		if (size == 0) throw std::logic_error("beda");
		else
		{
			for (int i = pos; i < size; i++) {
				names[i] = names[i + 1];
				polinoms[i] = polinoms[i + 1];
			}
			size--;
		}
	}

	polinom find(std::string findName) {
		for (int i = 0; i < size; i++) {
			if (findName == names[i]) return polinoms[i];
		}
		polinom null;
		return null;
	}

	void massResize() {
		std::string* namesCopy = new std::string[maxsize];
		polinom* polinomsCopy = new polinom[maxsize];
		maxsize += 3;
		for (int i = 0; i < size; i++) {
			namesCopy[i] = names[i];
			polinomsCopy[i] = polinoms[i];
		}
		names = new std::string[maxsize];
		polinoms = new polinom[maxsize];
		for (int i = 0; i < size; i++) {
			names[i] = namesCopy[i];
			polinoms[i] = polinomsCopy[i];
		}
	}

	void findAndReplace(std::string findName, polinom pol) {
		bool flag = true;
		for (int i = 0; i < size; i++) {
			if (findName == names[i]) {
				polinoms[i] = pol;
				flag = false;
			}
		}
		if (flag) throw std::logic_error("Error! Net polinoma s takim imenem");
	}

	~Data() {
		delete[] names;
		delete[] polinoms;
	}
};


class LinTabMass : public Table
{
protected:
	Data dates;
	int size;
public:
	LinTabMass() {}

	void add(std::string name1, polinom pol) {
		dates.add(name1, pol);
	}
		void destroyPol(int pos) override {
		dates.destroyPol(pos);
	}

	polinom find(std::string findName) override {
		dates.find(findName);
	}

	void findAndReplace(std::string findName, polinom pol) override {
		dates.findAndReplace(findName, pol);
	}

	~LinTabMass() {}
};