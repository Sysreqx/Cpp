#include "Rectangle.h"



Rectangle::Rectangle()
{
}

Rectangle::Rectangle(float _length, float _width)
{
	length = _length;
	width = _width;
}

float Rectangle::getLength()
{
	return length;
}

void Rectangle::setLength(float _length)
{
	length = _length;
}

float Rectangle::getWidth()
{
	return width;
}

void Rectangle::setWidth(float _width)
{
	width = _width;
}

float Rectangle::getArea()
{
	return length * width;
}

float Rectangle::getPerimetr()
{
	return length * 2 + width * 2;
}

std::string Rectangle::toString()
{
	return "Rectangle[length=" + std::to_string(length) + ", width=" + std::to_string(width);
}


Rectangle::~Rectangle()
{
}
