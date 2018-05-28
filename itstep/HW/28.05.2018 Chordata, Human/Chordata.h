#pragma once
#include <string>
#include "Eye.h"
#include <iostream>
class Chordata
{
	Eye eyes [2];
	std::string name;
	bool hasSkull = true;
public:
	void setName(std::string name);
	std::string getName() const;
	std::string getEyescolor() const;
	void setEyescolor(std::string col);
	bool getSkull()const;
	Chordata(std::string color, std::string name, bool hasSkull);
	void move() const;
	void info()const;
};

