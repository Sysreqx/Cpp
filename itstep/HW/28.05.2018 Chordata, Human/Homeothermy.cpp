#include "Homeothermy.h"

Homeothermy::Homeothermy(std::string color, std::string name, bool hasSkull, bool hasHomeothermy) : Chordata(color, name, hasSkull)
{
	this->hasHomeothermy = hasHomeothermy;
}

void Homeothermy::move() const
{
	std::cout << "Hodor";
}

void Homeothermy::info() const
{
	std::cout << "Hodor" << std::endl;
	Chordata::info();
	std::cout << "Homeothermy: " << hasHomeothermy << std::endl;
}

void Homeothermy::setHomeothermy(bool hasHomeothermy)
{
	this->hasHomeothermy = hasHomeothermy;
}

bool Homeothermy::getHasHomeothermy()
{
	return hasHomeothermy;
}
