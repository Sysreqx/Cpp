#include "admin.h"

admin::admin(string name, date_ bdate, bool gender, int exp,int cntPC)
	:employee(name,bdate,gender,exp)
{
	this->cntPC = cntPC;
}

void admin::setCntPC(int cntPC)
{
	this->cntPC = cntPC;
}

int admin::getCntPC() const
{
	return cntPC;
}

double admin::getCoef() const
{
	double res = this->exp*0.05;
	res += this->cntPC*0.02;
	return 1+res;
}

void admin::info() const
{
	this->employee::info();
	cout << "\nКол-во аппаратов :" << cntPC;
}
