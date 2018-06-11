#include "Student.h"

//динамическая память - имя
void Student::setFName(const char * _fName)
{
	fName = new char[strlen(_fName)];
	strcpy(fName, _fName);
	//delete[] _fName;
}

void Student::setSName(std::string s)
{
	sName = s;
}

void Student::setMName(std::string s)
{
	mName = s;
}

void Student::setAdress(std::string s)
{
	adress = s;
}

void Student::setDateOfBirth(std::string s)
{
	dateOfBirth = s;
}

void Student::setPhone(int s)
{
	phone = s;
}

//динамическая память - имя
char * Student::getFName()
{
	return fName;
}

std::string Student::getSName()
{
	return sName;
}

std::string Student::getMName()
{
	return mName;
}

std::string Student::getAdress()
{
	return adress;
}

std::string Student::getDateOfBirth()
{
	return dateOfBirth;
}

int Student::getPhone()
{
	return phone;
}

Student::Student()
{
}


Student::~Student()
{
	delete[] fName;
}
