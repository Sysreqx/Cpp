#pragma once
#include "employee.h"
class developer :
	public employee
{
	int cntLangs;
public:
	developer(string name = "Vasya", date_ bdate = date_(10, 10, 1997), bool gender = 1, int exp = 0,int cntLangs=1);
	virtual void setCntLangs(int cntLangs);
	int getCntLangs()const;
	double getCoef()const override;
	void info()const override;
};

