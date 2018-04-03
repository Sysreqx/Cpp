#include <iostream>
//#include "Circle.h"
#include "Rectangle.h"
//#include "Circle.h"
//#include "Circle.h"

int main()
{
	/*
	//Circle
	Circle c(2, "black");
	std::cout << c.getArea() << std::endl;
	std::cout << c.getRadius() << std::endl;
	Circle c4;
	c4.setColor("purple");
	c4.setRadius(2.5);
	std::cout << c4.getColor() << std::endl;
	std::cout << c4.getRadius() << std::endl;
	*/

	Rectangle r(3, 4);
	std::cout << r.getLength() << std::endl;
	r.setLength(5);
	std::cout << r.getLength() << std::endl;
	std::cout << r.getWidth() << std::endl;
	r.setWidth(6);
	std::cout << r.getWidth() << std::endl;
	std::cout << r.getArea() << std::endl;
	std::cout << r.getPerimetr() << std::endl;
	std::cout << r.toString() << std::endl;

	system("pause");
	return 0;
}