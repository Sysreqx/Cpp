#include "Fish.h"

Fish::Fish(std::string color, std::string name, bool hasSkull, bool isOsteichthyes) : Chordata(color, name, hasSkull)
{
	setFishType(isOsteichthyes);
}

void Fish::setFishType(bool isOsteichthyes)
{
	if (isOsteichthyes == true)
		isChondrichthyes = false;
	else
	{
		isChondrichthyes = true;
		this->isOsteichthyes = false;
	}
}

std::string Fish::getFishType() const
{
	std::string s = "is Osteichthyes = " + std::to_string(isOsteichthyes) + "\nis Chondrichthyes = " + std::to_string(isChondrichthyes) + "\n";
	return s;
}

void Fish::move() const
{
	std::cout << "Fishi-fishi";
}

void Fish::info() const
{
	Chordata::info();
	std::cout << getFishType();
}
