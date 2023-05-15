#pragma once
#include <iostream>
#include "../lib_polinom/lib_polinom.h"

class Table
{
public:
	 virtual void add(std::string name1, polinom pol) = 0;
	virtual void destroyPol(std::string DestroyName) = 0;
	virtual polinom find(std::string findName) = 0;
	virtual void findAndReplace(std::string findName, polinom pol) = 0;
};