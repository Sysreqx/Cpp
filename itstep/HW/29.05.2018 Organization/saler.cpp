#include "saler.h"

saler::saler(string name, date_ bdate, bool gender, int exp, int cntSales)
	: employee(name, bdate, gender, exp)
{
	this->cntSales = cntSales;
}

double saler::getCoef() const
{
	double res = this->exp*0.05;
	res += this->cntSales*0.01;
	return 1+res;
}

void saler::setCntSales(int cntSales)
{
	this->cntSales = cntSales;
}

int saler::getCntSales() const
{
	return cntSales;
}

void saler::info() const
{
	this->employee::info();
	cout << "\nКол-во продаж: " << cntSales;
}
