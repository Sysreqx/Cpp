#include "Employee.h"

Employee::Employee(double _id, std::string _firstName, std::string _lastName, double _salary)
{
	id = _id;
	firstName = _firstName;
	lastName = _lastName;
	salary = _salary;
}

std::string Employee::getName()
{
	return firstName + " " + lastName;
}

double Employee::getSalary()
{
	return salary;
}

void Employee::setSalary(double _salary)
{
	salary = _salary;
}

double Employee::getAnnualSalary()
{
	return salary * 12;
}

double Employee::raiseSalary(double _percent)
{
	return salary * _percent / 100 + salary;
}

std::string Employee::toString()
{
	return "Employee[id=" + std::to_string(id) + ",name=" + firstName + lastName + "salary=" + std::to_string(salary);
}

Employee::~Employee()
{
}


double Employee::getID()
{
	return id;
}

std::string Employee::getFirstName()
{
	return firstName;
}

std::string Employee::getLastName()
{
	return lastName;
}
