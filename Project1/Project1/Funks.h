#pragma once
#include <vector>
#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_LinTabMass/lib_LinTabMass.h"
#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_polinom/lib_polinom.h"
#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_TabSearchTree/lib_TabSearchTree.h"
#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_LinTabList//lib_LinTabList.h"
#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_HashOpenShuffle/lib_HashOpenShuffle.h"
#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_HashTabList\lib_HashTabList.h"
#include "D:\prog\ThePolynomialXYZ\CmakePolinom\lib_OrdTabMass\lib_OrdTabMass.h"
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>


std::string To_string(System::String^ str) {
	msclr::interop::marshal_context context;
	const char* ch = context.marshal_as<const char*>(str);
	return std::string(ch);
}

System::String^ To_SysString(std::string str) {
	msclr::interop::marshal_context context;
	return context.marshal_as<System::String^>(str.c_str());
}

LinTabMass ltm;
LinTableList ltl;
OrdTabMass otm;
HashOpenShuffle hus;
HashTableList htl;
TabSearchTree tbs;
int mode = 0;

void add(std::string name, std::string strPolinom) {
	polinom NewPol(strPolinom);
	ltm.add(name, NewPol);
	ltl.add(name, NewPol);
	otm.add(name, NewPol);
	hus.add(name, NewPol);
	htl.add(name, NewPol);
	tbs.add(name, NewPol);
}

void remove(std::string name) {
	ltm.destroyPol(name);
	ltl.destroyPol(name);
	otm.destroyPol(name);
	hus.destroyPol(name);
	htl.destroyPol(name);
	tbs.destroyPol(name);
}

std::string find(std::string name) {
	switch (mode)
	{
	case 0:
	{
		return ltm.find(name).print_polinom();
		break;
	}
	case 1:
	{
		return ltl.find(name).print_polinom();
		break;
	}
	case 2:
	{
		return otm.find(name).print_polinom();
		break;
	}
	case 3:
	{
		return hus.find(name).print_polinom();
		break;
	}
	case 4:
	{
		return htl.find(name).print_polinom();
		break;
	}
	case 5:
	{
		return tbs.find(name).print_polinom();
		break;
	}
	default:
		break;
	}
}

void findAndReplace(std::string name, std::string strPolinom) {
	polinom NewPol(strPolinom);
	ltm.findAndReplace(name, NewPol);
	ltl.findAndReplace(name, NewPol);
	otm.findAndReplace(name, NewPol);
	hus.findAndReplace(name, NewPol);
	htl.findAndReplace(name, NewPol);
	tbs.findAndReplace(name, NewPol);
}


std::string plus(std::string strPolinom1, std::string strPolinom2) {
	switch (mode)
	{
	case 0:
	{
		polinom sum = ltm.find(strPolinom1) + ltm.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 1:
	{
		polinom sum = ltl.find(strPolinom1) + ltl.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 2:
	{
		polinom sum = otm.find(strPolinom1) + otm.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 3:
	{
		polinom sum = hus.find(strPolinom1) + hus.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 4:
	{
		polinom sum = htl.find(strPolinom1) + htl.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 5:
	{
		polinom sum = tbs.find(strPolinom1) + tbs.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	default:
		break;
	}
}

std::string minus(std::string strPolinom1, std::string strPolinom2) {
	switch (mode)
	{
	case 0:
	{
		polinom sum = ltm.find(strPolinom1) - ltm.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 1:
	{
		polinom sum = ltl.find(strPolinom1) - ltl.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 2:
	{
		polinom sum = otm.find(strPolinom1) - otm.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 3:
	{
		polinom sum = hus.find(strPolinom1) - hus.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 4:
	{
		polinom sum = htl.find(strPolinom1) - htl.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 5:
	{
		polinom sum = tbs.find(strPolinom1) - tbs.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	default:
		break;
	}
}

std::string multuply(std::string strPolinom1, std::string strPolinom2) {
	switch (mode)
	{
	case 0:
	{
		polinom sum = ltm.find(strPolinom1) * ltm.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 1:
	{
		polinom sum = ltl.find(strPolinom1) * ltl.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 2:
	{
		polinom sum = otm.find(strPolinom1) * otm.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 3:
	{
		polinom sum = hus.find(strPolinom1) * hus.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 4:
	{
		polinom sum = htl.find(strPolinom1) * htl.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 5:
	{
		polinom sum = tbs.find(strPolinom1) * tbs.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	default:
		break;
	}
}

std::string multuplyOnNumber(std::string strPolinom1, int num) {
	switch (mode)
	{
	case 0:
	{
		polinom sum = ltm.find(strPolinom1) * num;
		return sum.print_polinom();
		break;
	}
	case 1:
	{
		polinom sum = ltl.find(strPolinom1) * num;
		return sum.print_polinom();
		break;
	}
	case 2:
	{
		polinom sum = otm.find(strPolinom1) * otm.find(strPolinom1);
		return sum.print_polinom();
		break;
	}
	case 3:
	{
		polinom sum = hus.find(strPolinom1) * num;
		return sum.print_polinom();
		break;
	}
	case 4:
	{
		polinom sum = htl.find(strPolinom1) * num;
		return sum.print_polinom();
		break;
	}
	case 5:
	{
		polinom sum = tbs.find(strPolinom1) * num;
		return sum.print_polinom();
		break;
	}
	default:
		break;
	}
}

std::string Derivative(std::string strPolinom1, int num) {
	switch (mode)
	{
	case 0:
	{
		return ltm.find(strPolinom1).derivative(num).print_polinom();
		break;
	}
	case 1:
	{
		return ltl.find(strPolinom1).derivative(num).print_polinom();
		break;
	}
	case 2:
	{
		return otm.find(strPolinom1).derivative(num).print_polinom();
		break;
	}
	case 3:
	{
		return hus.find(strPolinom1).derivative(num).print_polinom();
		break;
	}
	case 4:
	{
		return htl.find(strPolinom1).derivative(num).print_polinom();
		break;
	}
	case 5:
	{
		return tbs.find(strPolinom1).derivative(num).print_polinom();
		break;
	}
	default:
		break;
	}
}

std::vector<std::pair<std::string, std::string>> StrPrint() {
	switch (mode)
	{
	case 0:
	{
		return ltm.print();
		break;
	}
	case 1:
	{
		return ltl.print();
		break;
	}
	case 2:
	{
		return otm.print();
		break;
	}
	case 3:
	{
		return hus.print();
		break;
	}
	case 4:
	{
		return htl.print();
		break;
	}
	/*case 5:
	{
		return tbs.find(strPolinom1).derivative(num).print_polinom();
		break;
	}*/
	default:
		break;
	}
}
