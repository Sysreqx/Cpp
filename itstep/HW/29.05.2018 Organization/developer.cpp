#include "developer.h"

developer::developer(string name, date_ bdate, bool gender, int exp, int cntLangs)
	:employee(name, bdate, gender, exp)
{
	this->cntLangs = cntLangs;
}

void developer::setCntLangs(int cntLangs)
{
	this->cntLangs = cntLangs;
}

int developer::getCntLangs() const
{
	return cntLangs;
}

double developer::getCoef() const
{
	double res = this->exp*0.1;
	res += this->cntLangs*0.5;
	return 1+res;
}

void developer::info() const 
{
	employee::info();
	cout << "\nКол-во языков :" << cntLangs;
}
