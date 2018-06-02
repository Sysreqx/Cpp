#pragma once
#include "human.h"
class employee :
	public human
{
protected:
	int exp;

public:
	employee(string name = "Vasya", date_ bdate = date_(10, 10, 1997), bool gender = 1, int exp = 0);
	virtual void setExp(int exp);
	int getExp()const;
	void info()const override;
	virtual double getCoef()const;
};

