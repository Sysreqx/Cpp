#include "tetrapoda.h"




void tetrapoda::setTail(bool hasTail)
{
	this->hasTail = hasTail;
}

bool tetrapoda::getTail() const
{
	return hasTail;
}

void tetrapoda::info() const
{
	Chordata::info();
	std::cout << " has Tail: " << hasTail << std::endl;
}

tetrapoda::tetrapoda(std::string eyesColor, std::string name, bool hasSkull, bool hasTail):Chordata(eyesColor,name,hasSkull)
{
	std::cout << name << std::endl;
	this->hasTail = hasTail;
}
