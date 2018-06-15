#include "employee.h"

employee::employee(string name, date_ bdate, bool gender,  int exp)
:human(name,bdate, gender)
{
	this->exp = exp;
}

void employee::setExp(int exp)
{
	this->exp = exp;
}

int employee::getExp() const
{
	return exp;
}

void employee::info() const
{
	human::info();
	cout << "\nCтаж :" << exp << " лет";
}

double employee::getCoef() const 
{
	return 0.0;
}
