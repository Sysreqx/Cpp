#pragma once
#include <iostream>
#include<string>
using namespace std;

class date_
{
	int day, month, year;
	int whatKolDay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
public:
	date_(int d = 1, int m = 1, int y = 0);
	date_(const date_&d);
	void printDate() const;
	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);

	int getDay() const { return day; }
	int getMonth() const { return month; }
	int getYear() const { return year; }

	friend ostream& operator<<(ostream& out, const date_ &d);
	friend istream& operator>>(istream& in, date_ &d);

	string dataStr()const;
};