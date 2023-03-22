#include <iostream>
#include "../lib_polinom/lib_polinom.h"
#include "../lib_TableInterface/lib_TableInterface.h"

class HashOpenShuffle : public Table
{
public:
	HashOpenShuffle();

	void add(std::string name1, polinom pol) override;
	void destroyPol(int pos)override;
	polinom find(std::string findName) override;
	void findAndReplace(std::string findName, polinom pol) override;

	~HashOpenShuffle();

private:

};

