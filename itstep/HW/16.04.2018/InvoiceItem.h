#pragma once
#include <iostream>
#include <string>

class InvoiceItem
{
private:
	std::string id;
	std::string desc;
	int qty;
	double unitPrice;
public:
	InvoiceItem();
	InvoiceItem(std::string _id, std::string _desc, int _qty, double _unitPrice);
	std::string getID();
	std::string getDesc();
	int getQty();
	void setQty(int _qty);
	double getUnitPrice();
	void setUnitPrice(double _unitPrice);
	double getTotal();
	std::string toString();
	~InvoiceItem();
};

