#include <iostream>
#include "../lib_polinom/lib_polinom.h"

class Table
{
public:
	void virtual add(std::string name1, polinom pol) = 0;
	void virtual destroyPol(int pos) = 0;
	polinom virtual find(std::string findName) = 0;
	void virtual findAndReplace(std::string findName, polinom pol) = 0;
};