#include "Student.h"



Student::Student(string name, string surname, int age, int id, vector<int> marks)
{
	this->setName(name);
	this->setSurname(surname);
	this->setAge(age);
	this->setId(id);
	this->setMarks(marks);
}

void Student::setName(string name)
{
	this->name = name;
}

void Student::setSurname(string surname)
{
	this->surname = surname;
}

void Student::setAge(int age)
{
	this->age = age;
}

void Student::setId(int id)
{
	this->id = id;
}

void Student::setMarks(vector<int> marks)
{
	this->marks = marks;
}

string Student::getName() const
{
	return this->name;
}

string Student::getSurname() const
{
	return this->surname;
}

int Student::getAge() const
{
	return this->age;
}

int Student::getId() const
{
	return this->id;
}

vector<int> Student::getMarks() const
{
	return this->marks;
}

void Student::addMark(int mark)
{
	this->marks.push_back(mark);
}

void Student::deleteLastMark()
{
	this->marks.pop_back();
}

int Student::getAvgMark()
{
	int sum = 0;
	for (size_t i = 0; i < this->marks.size(); i++)
	{
		sum += this->marks[i];
	}
	return sum / this->marks.size();;
}

std::ostream & operator<<(std::ostream & out, const Student & obj)
{
	out << obj.name << std::endl << obj.surname;
	out << std::endl << obj.age << std::endl << obj.id << std::endl;
	for (auto i : obj.marks) out << i << " ";
	out << endl;
	return out;
}