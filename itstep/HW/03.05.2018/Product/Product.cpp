#include "Product.h"

Product::Product(std::string ProductName, std::string Manufacturer, int y, int m, int d, double Price)
{
	setProductName(ProductName);
	setManufacturer(Manufacturer);
	setShelfLife(y, m, d);
	setPrice(Price);
}

Product::~Product()
{
}

void Product::setProductName(std::string ProductName)
{
	this->ProductName = ProductName;
}

void Product::setManufacturer(std::string Manufacturer)
{
	this->Manufacturer = Manufacturer;
}

void Product::setShelfLife(int y, int m, int d)
{
	setY(y);
	setM(m);
	setD(d);
	ShelfLife = std::to_string(getY()) + "y";
	if (getM() < 10)
		ShelfLife += "0";
	ShelfLife += std::to_string(getM()) + "m";
	if (getD() < 10)
		ShelfLife += "0";
	ShelfLife += std::to_string(getD()) + "d";
}

void Product::setY(int y)
{
	if (y < 0)
		y = 0;
	this->y += y;
}

void Product::setM(int m)
{
	if (m > 11)
		setY(m / 12);
	if (m < 0)
		m = 0;
	this->m += m % 12;
}

//типа 30 дней
void Product::setD(int d)
{
	if (d > 30)
		setM(d / 31);
	if (d < 0)
		d = 0;
	this->d += d % 31;
}

void Product::setPrice(double Price)
{
	if (Price < 0.0)
		Price = 0.0;
	this->Price = Price;
}

std::string Product::getProductName() const
{
	return ProductName;
}

std::string Product::getManufacturer() const
{
	return Manufacturer;
}

std::string Product::getShelfLife() const
{
	return ShelfLife;
}

int Product::getY()
{
	return y;
}

int Product::getM()
{
	return m;
}

int Product::getD()
{
	return d;
}

double Product::getPrice() const
{
	return Price;
}

std::ostream & operator<<(std::ostream & out, const Product & p)
{
	out << "Name: " << p.getProductName() << " /Manufacturer: " << p.getManufacturer() << " /Shelf life: " << p.getShelfLife() << " /Price: " << p.getPrice() << std::endl;
	return out;
}
