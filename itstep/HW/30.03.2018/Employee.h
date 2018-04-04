#pragma once
#include <iostream>
#include <string>

class Employee
{
private:
	double id;
	double salary;
	std::string firstName, lastName;
public:
	Employee(double _id, std::string _firstName, std::string _lastName, double _salary);
	double getID();
	std::string getFirstName();
	std::string getLastName();
	std::string getName();
	double getSalary();
	void setSalary(double _salary);
	double getAnnualSalary();
	double raiseSalary(double _percent);
	std::string toString();
	~Employee();

};

