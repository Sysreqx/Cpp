#pragma once

#include <iostream>
#include <string>

class Rectangle
{
private:
	float length = 1.0;
	float width = 1.0;
public:
	Rectangle();
	Rectangle(float _length, float _width);
	float getLength();
	void setLength(float _length);
	float getWidth();
	void setWidth(float _width);
	float getArea();
	float getPerimetr();
	std::string toString();
	~Rectangle();

};

