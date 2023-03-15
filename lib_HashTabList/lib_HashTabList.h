#include "../lib_list/list.h"
#include "../lib_polinom/lib_polinom.h"
#include <iostream>
class HashTableList
{

public:
	HashTableList();
	~HashTableList();

	void deletePol(int pos);

	polinom add(std::string name1, polinom pol);

	polinom find(std::string findName);

};

HashTableList::HashTableList()
{
}

HashTableList::~HashTableList()
{
}