#include <iostream>
#include "../lib_polinom/lib_polinom.h"
#include "../lib_list/list.h"
#include "../lib_TableInterface/lib_TableInterface.h"

class LinTableList : public Table
{
	Clist <std::string> names;
	Clist <polinom> polinoms;

public:
	LinTableList() {}

	void add(std::string name1, polinom pol) override;
	void destroyPol(int pos)override;
	polinom find(std::string findName) override;
	void findAndReplace(std::string findName, polinom pol) override;

	~LinTableList() {
	}

private:

};

