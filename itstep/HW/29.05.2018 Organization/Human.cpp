#include "human.h"





human::human(string name, date_ bdate, bool gender)
{
	this->name = name;
	this->bdate = bdate;
	this->gender = gender;
}

string human::getName() const
{

	return name;
}

string human::getBdate() const
{
	return bdate.dataStr();
}

bool human::getGender() const
{
	return gender;
}

void human::setBdate(int day, int month, int year)
{
	bdate.setDay(day);
	bdate.setMonth(month);
	bdate.setYear(year);
}

void human::setGender(bool gender)
{
	this->gender = gender;
}

void human::setName(string name)
{
	this->name = name;
}

void human::info() const
{
	cout << "Имя: " << name << endl;
	cout << "Дата рождения: " << bdate << endl;
	cout << "Пол: ";
	cout << (gender == 0 ? "женский" : "мужской");
}


