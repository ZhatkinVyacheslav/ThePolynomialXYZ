#include <iostream>
#include "../lib_polinom/lib_polinom.h"
#include "../lib_list/list.h"
#include "../lib_TableInterface/lib_TableInterface.h"
#include <vector>
class DataLinTableList
{
private:
	std::string name;
	polinom pol;

public:
	DataLinTableList() {
		name = "";
	}

	DataLinTableList(std::string _name, polinom _pol) {
		name = _name;
		pol = _pol;
	}

	DataLinTableList& operator= (const DataLinTableList& right) {
		this->name = right.name;
		this->pol = right.pol;

		return *this;
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

	}

	LinTableList(std::string _name, polinom _pol)
	{
		add(_name, _pol);
	}

	void add(std::string _name, polinom _pol) override
	{
		if (!find(_name).IsEmpty()) throw std::logic_error("Such a polinomial already exists");
		else {
			DataLinTableList d1(_name, _pol);
			LData.push_back(d1);
		}
	}

	void destroyPol(std::string DestroyName)override
	{
		if (LData.size() == 0) throw std::logic_error("Mass is empty");
		if (find(DestroyName).CountMonoms() == 0) throw std::logic_error("There is no such name");
		for (int i = 0; i < LData.size(); i++)
		{
			if (LData.GetIndEl(i).name == DestroyName)
			{
				LData.erasePos(i);
			}
		}
	}
	polinom find(std::string findName) override	{
		polinom EmptyPol;
		if (LData.size() == 0) return EmptyPol;
		for (int i = 0; i < LData.size(); i++)
		{
			if (LData.GetIndEl(i).name == findName)
			{
				return LData.GetIndEl(i).pol;
			}
		};
		return EmptyPol;
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

	std::vector<std::pair<std::string, std::string>> print() {
		std::vector<std::pair<std::string, std::string>> res;
		for (int i = 0; i < LData.size(); i++) {
			std::pair<std::string, std::string> newpair;
			newpair.first = LData.GetIndEl(i).name;
			newpair.second = LData.GetIndEl(i).pol.print_polinom();
			res.push_back(newpair);
		}
		return res;
	}
};


