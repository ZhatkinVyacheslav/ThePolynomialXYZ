#pragma once
#include "../lib_list/list.h"
class monom
{
protected:
	float coef;
	int degreeX, degreeY, degreeZ;
public:
	monom(float coef1, int degreeX1, int degreeY1, int degreeZ1) {
		coef = coef1;
		degreeX = degreeX1;
		degreeY = degreeY1;
		degreeZ = degreeZ1;
	}

	void print();

	monom& operator+(const monom& right);
	monom& operator-(const monom& right);
	monom& operator*(const monom& right);
	monom& operator*(const int right);
	
	float getCoef();
	int getdDX();
	int getdDY();
	int getdDZ();

	~monom() {
		
	}
};


class polinom
{
protected:
	Clist<monom> Lmons;
public:
	polinom() {

	}

	float CalculatePoint(int x, int y, int z);

	void Multiply(int num);

	void derivative();

	polinom& operator+(const polinom& right);
	polinom& operator-(const polinom& right);

	~polinom() {
		Lmons.clear();
	}

};
