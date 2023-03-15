#include <iostream>
#include "../lib_polinom/lib_polinom.h"
class LinTabMass
{
protected:
	std::string* names;
	polinom* polinoms;
	int maxsize;
	int size;
public:
	LinTabMass() {
		names = new std::string[5];
		polinoms = new polinom[5];
		maxsize = 5;
		size = 0;
	}

	void add(std::string name1, polinom pol) {
		if (size == maxsize) massFix();
		names[size] = name1;
		polinoms[size] = pol;
		size++;
	}
	
	void deletePol(int pos) {
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

	void massFix() {
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

	~LinTabMass() {
		delete[] names;
		delete[] polinoms;
	}
};