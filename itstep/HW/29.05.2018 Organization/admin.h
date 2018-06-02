#pragma once
#include "employee.h"
class admin :
	public employee
{
	int cntPC;
public:
	admin(string name, date_ bdate, bool gender, int exp,int cntPC);
	virtual void setCntPC(int cntPC);
	int getCntPC()const;
	double getCoef()const override;
	void info()const override;
};

