#include <iostream>
#include "../lib_polinom/lib_polinom.h"
#include "../lib_list/list.h"
#include "../lib_TableInterface/lib_TableInterface.h"

class DataLinTableList
{
private:
	std::string name;
	polinom pol;

public:
	DataLinTableList(std::string _name, polinom _pol) {
		name = _name;
		pol = _pol;
	}

	DataLinTableList& operator= (const DataLinTableList& right) {
		this->name = right.name;
		this->pol = right.pol;
	}

	std::string getName() { return name; }
	polinom getPolinom() { return pol; }
	void setPolinom(polinom newPol) { pol = newPol; }

	friend class LinTableList;
};

class LinTableList : public Table
{
	Clist <DataLinTableList> LData;
public:
	LinTableList() {
		polinom _pol;
		add("", _pol);
	}

	LinTableList(std::string _name, polinom _pol)
	{
		add(_name, _pol);
	}

	void add(std::string _name, polinom _pol) override
	{
		DataLinTableList d1(_name, _pol);
		LData.push_back(d1);
	}

	void destroyPol(std::string DestroyName)override
	{
		for (int i = 0; i < LData.size(); i++)
		{
			if (LData.GetIndEl(i).name == DestroyName)
			{
				LData.erasePos(i);
			}
		}
	}
	polinom find(std::string findName) override
	{
		for (int i = 0; i < LData.size(); i++)
		{
			if (LData.GetIndEl(i).name == findName)
			{
				return LData.GetIndEl(i).pol;
			}
		};
		throw std::logic_error("Error! Net polinoma s takim imenem");
	}

	void findAndReplace(std::string findName, polinom _pol) override
	{
		bool flag = true;
		for (int i = 0; i < LData.size(); i++)
		{
			if (LData.GetIndEl(i).name == findName)
			{
				LData.GetIndEl(i).pol = _pol;
				flag = false;
			}
		};

		if (flag) throw std::logic_error("Error! Net polinoma s takim imenem");
	}

	~LinTableList() {
	}

private:

};


