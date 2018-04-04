#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Employee.h"
#include "InvoiceItem.h"
#include "Account.h"

int main()
{
	//Circle
	/*
	Circle c(2, "black");
	std::cout << c.getArea() << std::endl;
	std::cout << c.getRadius() << std::endl;
	Circle c4;
	c4.setColor("purple");
	c4.setRadius(2.5);
	std::cout << c4.getColor() << std::endl;
	std::cout << c4.getRadius() << std::endl;
	*/

	//Rectangle

	//Rectangle r(3, 4);
	//std::cout << r.getLength() << std::endl;
	//r.setLength(5);
	//std::cout << r.getLength() << std::endl;
	//std::cout << r.getWidth() << std::endl;
	//r.setWidth(6);
	//std::cout << r.getWidth() << std::endl;
	//std::cout << r.getArea() << std::endl;
	//std::cout << r.getPerimetr() << std::endl;
	//std::cout << r.toString() << std::endl;

	//Employee
	/*
	Employee e(1, "Shedal", "Susl", 10000);
	e.setSalary(20000);
	std::cout << e.getAnnualSalary() << std::endl;
	std::cout << e.raiseSalary(50) << std::endl;
	std::cout << e.toString() << std::endl;*/

	//InvoiceItem
/*
	InvoiceItem ii("32", "book", 27, 60);
	std::cout << ii.getTotal() << std::endl;
	std::cout << ii.toString() << std::endl;
*/

	//Accout

	Account a1("1234", "Julia", 7777);
	Account a2("2345", "Quentin", 8888);
	a1.transferTo(a2, 333);
	std::cout << a1.toString() << std::endl;
	std::cout << a2.toString() << std::endl;

	system("pause");
	return 0;
}