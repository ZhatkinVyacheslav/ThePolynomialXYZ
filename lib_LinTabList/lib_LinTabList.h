#include <iostream>
#include "../lib_polinom/lib_polinom.h"
#include "../lib_list/list.h"

class LinTable
{
	Clist <std::string> names;
	Clist <polinom> polinoms;

public:
	LinTable() {}

	void deletePol(int pos);

	polinom add(std::string name1, polinom pol);

	polinom find(std::string findName);

	~LinTable() {
		polinoms.clear();
	}

private:

};

