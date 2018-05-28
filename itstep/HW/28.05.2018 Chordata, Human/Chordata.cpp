#include "Chordata.h"



void Chordata::setName(std::string name)
{
	this->name = name;
}

std::string Chordata::getName() const
{
	return this->name;
}

std::string Chordata::getEyescolor() const
{
	return eyes[0].getColor();
}

void Chordata::setEyescolor(std::string col)
{
	eyes[0].setColor(col);
	eyes[1].setColor(col);
}

bool Chordata::getSkull() const
{
	return hasSkull;
}

Chordata::Chordata(std::string eyesColor, std::string name, bool hasSkull)
{
	setEyescolor(eyesColor);
	setName(name);
	this->hasSkull = hasSkull;
}

void Chordata::move() const
{
	std::cout << "Chordata is moving";
}

void Chordata::info() const
{
	std::cout << "Name: " << name << std::endl <<
		"Eyes color: " << getEyescolor() << std::endl << "Has skull: " << hasSkull << std::endl;
}

