#include "Circle.h"

Circle::Circle()
{
	radius = 1.0;
	std::string color = "red";
}

Circle::Circle(double _radius)
{
	radius = _radius;
	color = "red";
}

Circle::Circle(double _radius, std::string _color)
{
	radius = _radius;
	color = _color;
}

Circle::~Circle()
{
}

double Circle::getRadius()
{
	return radius;
}

double Circle::getArea()
{
	return radius * radius * 3.14;
}

void Circle::setRadius(double newRadius)
{
	radius = newRadius;
}

void Circle::setColor(std::string newColor)
{
	color = newColor;
}

std::string Circle::getColor()
{
	return color;
}


