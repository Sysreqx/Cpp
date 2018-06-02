#pragma once
#include "employee.h"
class saler final : public employee
{
	int cntSales;
public:
	saler(string name = "Vasya", date_ bdate = date_(10, 10, 1997), bool gender = 1, int exp = 0, int cntSales = 0);
	double getCoef()const override;
	virtual void setCntSales(int cntSales);
	int getCntSales()const;
	void info()const override;
};

