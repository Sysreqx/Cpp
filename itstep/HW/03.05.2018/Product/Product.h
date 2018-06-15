#pragma once
#include <iostream>
#include <string>
#include <vector>

class Product
{/*
	7. Product: Наименование, Производитель, Цена, Срок хранения, Количество.
		Создать массив объектов.Вывести :
		a) список товаров для заданного наименования;
		b) список товаров для заданного наименования, цена которых не превосходит заданную;
		c) список товаров, срок хранения которых больше заданного.*/
private:
	std::string ProductName, Manufacturer, ShelfLife;
	double Price;
	int Number, y = 0, m = 0, d = 0;
public:
	//SET
	void setProductName(std::string ProductName = "Laptop");
	void setManufacturer(std::string Manufacturer = "Asus");
	void setShelfLife(int y = 0, int m = 0, int d = 1);
	void setY(int y = 0);
	void setM(int m = 0);
	void setD(int d = 1);
	void setPrice(double Price = 1300);
	//get
	std::string getProductName() const;
	std::string getManufacturer() const;
	std::string getShelfLife() const;
	double getPrice() const;
	int getY();
	int getM();
	int getD();
	//constuctor
	Product(std::string ProductName, std::string Manufacturer, int y, int m, int d, double Price);
	~Product();
};

std::ostream& operator<<(std::ostream &out, const Product & p);

