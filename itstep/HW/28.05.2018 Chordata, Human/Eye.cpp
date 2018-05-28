#include "Eye.h"



void Eye::setColor(std::string col)
{
	this->color = col;
}

std::string Eye::getColor() const
{
	return this->color;
}

Eye::Eye(std::string col)
{
	this->color = col;
}
