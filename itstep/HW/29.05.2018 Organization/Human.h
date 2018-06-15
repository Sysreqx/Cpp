#pragma once
#include<string>
#include<iostream>
#include"date_.h"
using namespace std;
class human
{
	string name;
	date_ bdate;
	bool gender;
 public:
	human(string name="Vasya", date_ bdate=date_(10,10,1997), bool gender = 1);
	string getName()const;
	string getBdate()const;
	bool getGender()const;
	virtual void setBdate(int day,int month,int year);
	virtual void setGender(bool gender);
	virtual void setName(string name);
	virtual void info()const;

};

