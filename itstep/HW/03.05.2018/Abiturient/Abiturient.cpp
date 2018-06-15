#include "Abiturient.h"

void Abiturient::setMarks(std::vector<int> marks)
{
	this->marks = marks;
}

void Abiturient::setName(std::string name)
{
	this->name = name;
}

void Abiturient::setSurname(std::string surname)
{
	this->surname = surname;
}

void Abiturient::setPatronymic(std::string patronymic)
{
	this->patronymic = patronymic;
}

void Abiturient::setAdress(std::string adress)
{
	this->adress = adress;
}

void Abiturient::setArithmeticMean(int arithmeticMean)
{
	this->arithmeticMean = arithmeticMean;
}

std::vector<int> Abiturient::getMarks() const
{
	return marks;
}

std::string Abiturient::getName() const
{
	return name;
}

std::string Abiturient::getSurname() const
{
	return surname;
}

std::string Abiturient::getPatronymic() const
{
	return patronymic;
}

std::string Abiturient::getAdress() const
{
	return adress;
}

int Abiturient::getArithmeticMean() const
{
	return arithmeticMean;
}

bool Abiturient::operator==(const Abiturient & a) const
{
	return
		this->name == a.name &&
		this->surname == a.surname &&
		this->patronymic == a.patronymic &&
		this->adress == a.adress &&
		this->marks == a.marks &&
		this->arithmeticMean == a.arithmeticMean;
}

Abiturient::Abiturient(std::string name, std::string surname, std::string patronymic, std::string adress, std::vector<int> marks, int arithmeticMean)
{
	this->name = name;
	this->surname = surname;
	this->patronymic = patronymic;
	this->adress = adress;
	this->marks = marks;
	for (int i = 0; i < marks.size(); i++)
	{
		arithmeticMean += marks[i];
	}
	arithmeticMean /= marks.size();
	this->arithmeticMean = arithmeticMean;
}

Abiturient::~Abiturient()
{
}

std::ostream & operator<<(std::ostream & out, const Abiturient & a)
{
	out << "\nName: " << a.getName() << " \nSurname: " << a.getSurname() << " \nPatronymic: " << a.getPatronymic() << " \nAdress: " << a.getAdress() << " \n";
	for (int i = 0; i < a.getMarks().size(); i++)
	{
		out << a.getMarks()[i] << " ";
	}
	out << " \nArithmetic Mean: " << a.getArithmeticMean() << "\n";

	return out;
}
