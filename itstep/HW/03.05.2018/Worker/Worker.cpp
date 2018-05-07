#include "Worker.h"

Worker::Worker(std::string Name, std::string Position, int Year, int Salary)
{
	setName(Name);
	setPosition(Position);
	setYear(Year);
	setSalary(Salary);
}

Worker::~Worker()
{
}

void Worker::setName(std::string Name)
{/*
	Gavriil, Louka, Timofey, Sousanna, Semen, Raisa, Raisavan, Ignat, Igor, Ilya, Iosif, Julia, Khristina, Uliana*/
	this->Name = Name;
}

void Worker::setPosition(std::string Position)
{/*
	Chief Executive, Director General, Chairman, Chief Accountant, Deputy Director, Head of Department, Senior Manager, Plankton, Assistant Plankton, Assistant Assistant Plankton*/
	this->Position = Position;
}

void Worker::setYear(int Year)
{
	if (Year < 1950 || Year > 2018)
		Year = 1950;
	this->Year = Year;
}

void Worker::setSalary(int Salary)
{
	int minSalary = 30000;
	if (Salary < minSalary)
		Salary = minSalary;
	this->Salary = Salary;
}

std::string Worker::getName()
{
	return Name;
}

std::string Worker::getPosition()
{
	return Position;
}

int Worker::getYear()
{
	return Year;
}

int Worker::getSalary()
{
	return Salary;
}
