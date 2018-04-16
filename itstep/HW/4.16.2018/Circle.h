#pragma once
#include <iostream>
#include <string>


class Circle
{
	std::string color = "red";
	double radius = 1.0;
public:
	Circle();
	Circle(double _radius);
	Circle(double _radius, std::string _color);
	~Circle();
	double getRadius();
	double getArea();
	void setRadius(double newRadius);
	void setColor(std::string newColor);
	std::string getColor();

	std::string toString();
};

