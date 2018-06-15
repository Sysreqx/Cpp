#pragma once
#include <iostream>
#include <string>

class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int _day, int _month, int _year);
	int getDay();
	int getYear();
	int getMonth();
	void setDay(int _day);
	void setMonth(int _month);
	void setYear(int _year);
	void setDate(int _day, int _month, int _year);
	std::string toString();
	~Date();

};

