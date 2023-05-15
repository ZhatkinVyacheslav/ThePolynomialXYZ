#pragma once
#include<math.h>
#include <string>
#include <iostream>
#include "../lib_list/list.h"

class monom
{
protected:
	float coef;
	int degreeX, degreeY, degreeZ;
public:
	monom(float coef1, int degreeX1, int degreeY1, int degreeZ1) 
	{
		coef = coef1;
		degreeX = degreeX1;
		degreeY = degreeY1;
		degreeZ = degreeZ1;
	}

	monom() 
	{
		coef = 0;
		degreeX = 0;
		degreeY = 0;
		degreeZ = 0;
	}

	bool equaldegrees(monom mon) 
	{
		return (this->degreeX == mon.degreeX && this->degreeY == mon.degreeY && this->degreeZ == mon.degreeZ);
	}

	std::string print_monom() 
	{

		
		std::string res = std::to_string(coef) + " x^" + std::to_string(degreeX) + " y^" + std::to_string(degreeY) + " z^" + std::to_string(degreeZ);

		return res;
		
	};

	int get_coef() { return coef; }

	void set_degreeX(int _degreeX) 
	{
		degreeX = _degreeX;
	}

	void set_degreeY(int _degreeY)
	{
		degreeY = _degreeY;
	}

	void set_degreeZ(int _degreeZ)
	{
		degreeZ = _degreeZ;
	}

	void set_coef(float _coef) 
	{
		coef = _coef;
	}

	float CalculatePointMonom(int x, int y, int z)
	{
		float result = 0;

		result = this->coef * pow(x, this->degreeX) * pow(y, this->degreeY) * pow(z, this->degreeZ);

		return result;
	};

	monom& operator+(const monom& right)
	{
		monom m;
		
			m.coef = this->coef + right.coef;
			m.degreeX = this->degreeX;
			m.degreeY = this->degreeY;
			m.degreeZ = this->degreeZ;

			return m;
				
	};
	monom& operator-(const monom& right) 
	{
		monom m;
		
		m.coef = this->coef - right.coef;
		m.degreeX = this->degreeX;
		m.degreeY = this->degreeY;
		m.degreeZ = this->degreeZ;
		
		return m;
	};
	monom& operator*(const monom& right)
	{
		monom m;

		m.coef = this->coef * right.coef;
		m.degreeX = this->degreeX + right.degreeX;
		m.degreeY = this->degreeY + right.degreeY;
		m.degreeZ = this->degreeZ + right.degreeZ;

		return m;
	};
	monom& operator*(const int right) 
	{
		monom m;

		m.coef = this->coef * right;
		m.degreeX = this->degreeX;
		m.degreeY = this->degreeY;
		m.degreeZ = this->degreeZ;


		return m;
	};
	monom& operator=(const monom& right)
	{
		this->coef = right.coef;
		this->degreeX = right.degreeX;
		this->degreeY = right.degreeY;
		this->degreeZ = right.degreeZ;

		return *this;
	};
	
	bool operator==(const monom& right) {
		return(this->coef == right.coef
			&& this->degreeX == right.degreeX
			&& this->degreeY == right.degreeY
			&& this->degreeZ == right.degreeZ);
	}
	friend class polinom;

	~monom() {
		
	}
};


class polinom
{
protected:
	Clist<monom> Lmons;

public:
	polinom() 
	{

	}

	/*polinom(std::string _pol) 
	{
		monom m;

		if ()
		{

		}
	}*/


	float CalculatePointPolinom(int x, int y, int z) 
	{
		float result = 0;

		for (int i = 0; i < Lmons.size(); i++)
		{
			result += Lmons.GetIndEl(i).CalculatePointMonom(x,y,z);
		}

		return result;
	}

	void add_monom(monom m) 
	{
		this->Lmons.push_back(m);
	}

	polinom derivative(int mode)
	{

		polinom res = *this;

		switch (mode)
		{
			
		case 1: 
		{
			

			float _coef = 0;
			int _degree = 0;
			for (size_t i = 0; i < this->Lmons.size(); i++)
			{
				_coef = this->Lmons.GetIndEl(i).coef * this->Lmons.GetIndEl(i).degreeX;
				res.Lmons.GetIndEl(i).set_coef(_coef);
				_degree = this->Lmons.GetIndEl(i).degreeX - 1;
				res.Lmons.GetIndEl(i).set_degreeX(_degree);
                
			}

			return res;
			break;
		}

		case 2:
		{
			polinom res;
			float _coef = 0;
			int _degree = 0;
			for (size_t i = 0; i < this->Lmons.size(); i++)
			{
				_coef = this->Lmons.GetIndEl(i).coef * this->Lmons.GetIndEl(i).degreeY;
				res.Lmons.GetIndEl(i).set_coef(_coef);
				_degree = this->Lmons.GetIndEl(i).degreeY - 1;
				res.Lmons.GetIndEl(i).set_degreeX(_degree);

			}

			return res;
			break;			
		}

		case 3:
		{
			polinom res;
			float _coef = 0;
			int _degree = 0;
			for (size_t i = 0; i < this->Lmons.size(); i++)
			{
				_coef = this->Lmons.GetIndEl(i).coef * this->Lmons.GetIndEl(i).degreeZ;
				res.Lmons.GetIndEl(i).set_coef(_coef);
				_degree = this->Lmons.GetIndEl(i).degreeZ - 1;
				res.Lmons.GetIndEl(i).set_degreeX(_degree);

			}

			return res;
			break;
		}
		default: 		
		{
						
		}
			break;
		}
	}
	
	polinom& operator=(const polinom& right) {
		polinom pol = right;
		int size = 0;
		if (this->Lmons.size() < pol.Lmons.size()) size = this->Lmons.size();
		else size = pol.Lmons.size();
		for (int i = 0; i < size; i++) {
			this->Lmons.GetIndEl(i) = pol.Lmons.GetIndEl(i);
		}
		return *this;
	}

	polinom& operator+(const polinom& right)
	{
		polinom pol = right;
		polinom res = *this;

		for (int i = 0; i < pol.Lmons.size(); i++)
		{
			bool flag = false;
			for (int j = 0; j < this->Lmons.size(); j++)
			{
				if (this->Lmons.GetIndEl(i).equaldegrees(pol.Lmons.GetIndEl(j)))
				{
					res.Lmons.GetIndEl(j) = this->Lmons.GetIndEl(i) + pol.Lmons.GetIndEl(j);
					flag = true;
				}
			}
			if (!flag)
			{
				res.Lmons.push_back(pol.Lmons.GetIndEl(i));
			}
		}

		return res;
	}

	polinom& operator-(const polinom& right) 
	{
		polinom pol = right;
		polinom res = *this;

		for (int i = 0; i < pol.Lmons.size(); i++)
		{
			bool flag = false;
			for (int j = 0; j < this->Lmons.size(); j++)
			{
				if (this->Lmons.GetIndEl(i).equaldegrees(pol.Lmons.GetIndEl(j)))
				{
					res.Lmons.GetIndEl(j) = this->Lmons.GetIndEl(i) - pol.Lmons.GetIndEl(j);
					flag = true;
				}
			}
			if (!flag)
			{
				pol.Lmons.GetIndEl(i).set_coef(pol.Lmons.GetIndEl(i).coef * -1);
				res.Lmons.push_back(pol.Lmons.GetIndEl(i));
			}
		}

		return res;
	}

	polinom& operator*(const int right) 
	{
		polinom _res = *this;

		for (int i = 0; i < this->Lmons.size(); i++)
		{
			_res.Lmons.GetIndEl(i) = this->Lmons.GetIndEl(i) * right;
		}

		return _res;
	}

	polinom& operator*(const polinom& right) 
	{
		monom res;
		polinom _res;
		polinom pol = right;

		for (int i = 0; i < this->Lmons.size(); i++)
		{
			for (int j = 0; j < pol.Lmons.size(); j++)
			{
				 res = this->Lmons.GetIndEl(i) * pol.Lmons.GetIndEl(j);
			}

			_res.Lmons.push_back(res);
		}
		return _res;
	}

	bool operator== (const polinom& right)
	{
		polinom pol = right;
		if (this->Lmons.size() != pol.Lmons.size()) return false;
		for (int i; i < this->Lmons.size(); i++) {
			if (!(this->Lmons.GetIndEl(i) == pol.Lmons.GetIndEl(i))) return false;
		}
		return true;
	}

	std::string print_polinom() 
	{

		std::string res = this->Lmons.GetIndEl(0).print_monom();
		for (int i = 1; i < this->Lmons.size(); i++)
		{
			if (this->Lmons.GetIndEl(i).coef > 1)
			{
				res += " + ";
			}
			else
			{
				res += " - ";
			}
			res += this->Lmons.GetIndEl(i).print_monom();
		}

		return res;
	}

	int get_First_coef() { return Lmons.GetIndEl(0).coef; }

	~polinom() {
		Lmons.clear();
	}

};
