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
		names[size] = name1;
		polinoms[size] = pol;
	}
	
	void deletePol(int pos);

	polinom find(std::string findName);



	~LinTabMass() {
		delete[] names;
		delete[] polinoms;
	}
};