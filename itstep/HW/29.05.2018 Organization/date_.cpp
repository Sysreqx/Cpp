#include "date_.h"

date_::date_(int d, int m, int y)
{
	if (y < 0)
		y = 0;
	if (m <= 0 || m > 12)
		m = 1;
	if (d > whatKolDay[m] || d <= 0)
		d = 1;
	year = y;
	month = m;
	day = d;
}
date_::date_(const date_&d)
{
	day = d.day;
	month = d.month;
	year = d.year;
}

void date_::printDate()const
{
	if (day < 10)
		cout << "0";
	cout << day << ".";
	if (month < 10)
		cout << "0";
	cout << month << ".";
	cout << year;

}

void date_::setYear(int y)
{
	if (y < 0)
		y = 0;
	year = y;
}
void date_::setMonth(int m)
{
	if (m <= 0 || m > 12)
		m = 1;
	month = m;
}
void date_::setDay(int d)
{
	if (d > whatKolDay[month] || d <= 0)
		d = 1;
	day = d;
}

string date_::dataStr() const
{
	string  data;
	if (day < 10)
		data.push_back('0');
	data += to_string(day) += ".";

	if (month < 10)
		data.push_back('0');
	data += to_string(month) += ".";

	data += to_string(year);
	return data;
}

ostream & operator<<(ostream & out, const date_ & d)
{
	d.printDate();
	return out;
}

istream & operator >> (istream & in, date_ & d)
{
	int day, m, y;
	char tchk;

	cout << "Введите дату(Например: 15.02.1997): ";
	cin >> day >> tchk >> m >> tchk >> y;

	d.setYear(y);
	d.setMonth(m);
	d.setDay(day);

	return in;
}
