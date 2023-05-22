#include <iostream>
#include <vector>
#include "../lib_polinom/lib_polinom.h"
#include "../lib_TableInterface/lib_TableInterface.h"

class DataHOS
{
	std::string name;
	polinom pol;

public:
	DataHOS()
	{
		name = "";
		pol;
	};

	DataHOS(std::string name1, polinom pol1 )
	{
		name = name1;
		pol = pol1;
	};
	friend class HashOpenShuffle;
};




class HashOpenShuffle : public Table
{

	std::pair<int, DataHOS>* p1;
public:
	HashOpenShuffle()
	{
		p1 = new std::pair<int, DataHOS>[25];
		for (int i = 0; i < 25; i++) 
		{
			p1->first = NULL;
		}
	};

	int hashfunk(std::string name)
	{
		int i = 0;

		for (char j : name)
		{
			i += j;
		}

		return i % 25;
	};

	void add(std::string name1, polinom _pol) override
	{
		if (find(name1).CountMonoms() != 0) throw std::logic_error("Such a polinomial already exists");
		if(isFull()) throw std::logic_error("Mass is full");
		if (p1[hashfunk(name1)].first != NULL)
		{
			int b = hashfunk(name1);

			while (p1[b].first != NULL)
			{
				b = (b + 7) % 25;
			}
			p1[b].first = b;
			p1[b].second.name = name1;
			p1[b].second.pol = _pol;
		}
		else
		{
			p1[hashfunk(name1)].first = hashfunk(name1);
			p1[hashfunk(name1)].second.name = name1;
			p1[hashfunk(name1)].second.pol = _pol;
		}

	}

	void destroyPol(std::string DestroyName)override
	{
		if (isEmpty()) throw std::logic_error("Mass is empty");
		if (find(DestroyName).CountMonoms() == 0) throw std::logic_error("There is no such name");
		int b = hashfunk(DestroyName);
		for (int i = 0; i < 26; i++) {
			if (p1[b].second.name == DestroyName)
			{
				p1[b].second.name = "";
				p1[b].first = NULL;
				return;
			}
			else
			{
				b = (b + 7) % 25;
			}
		}
	}

	polinom find(std::string findName) override
	{
		polinom EmptyPol;
		if (isEmpty())  return EmptyPol;
		int b = hashfunk(findName);

		for (int i = 0; i < 26; i++)
		{
			if (p1[b].second.name != findName) {
				b = (b + 7) % 25;
			}
			else 
			{
				return p1[b].second.pol;
			}
		}
		return EmptyPol;
	}

	void findAndReplace(std::string findName, polinom _pol) override
	{
		if(isEmpty())  throw std::logic_error("Mass is empty");

		int b = hashfunk(findName);

		for (int i = 0; i < 26; i++)
		{
			if (p1[b].second.name != findName) {
				b = (b + 7) % 25;
			}
			else {
				p1[b].second.pol = _pol;
				return;
			}
		}
		throw std::logic_error("There is no such name");
	}

	bool isEmpty() {
		int i;
		for (int i = 0; i < 25; i++) {
			if (p1[i].first != NULL) {
				return false;
			}
		}
		return true;
	}

	bool isFull() {
		for (int i = 0; i < 25; i++) {
			if (p1[i].first == NULL) {
				return false;
			}
		}
		return true;
	}

	std::vector<std::pair<std::string, std::string>> print() {
		std::vector<std::pair<std::string, std::string>> res;
		for (int i = 0; i < 25; i++) {
			if (p1[i].first != NULL)
			{
				std::pair<std::string, std::string> newpair{ p1[i].second.name,  p1[i].second.pol.print_polinom()};
				res.push_back(newpair);
			}
		}
		return res;
	}

	~HashOpenShuffle()
	{
		delete[] p1;
	}

};
