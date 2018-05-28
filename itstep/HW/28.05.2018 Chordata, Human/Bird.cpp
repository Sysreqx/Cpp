#include "Bird.h"

void bird::setCanfly(bool canfly)
{
	this->canfly = canfly;
}

bool bird::getCanfly() const
{
	return canfly;
}

void bird::info() const
{
	tetrapoda::info();
	std::cout << " can fly: " << canfly << std::endl;
}

bird::bird(std::string eyesColor, std::string name, bool hasSkull, bool hasTail, bool canfly):tetrapoda(eyesColor,name,hasSkull,hasTail)
{
	this->canfly = canfly;
}
