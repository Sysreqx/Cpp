#pragma once
#include <iostream>
#include <string>
#include <vector>

class Worker
{/*
Worker: ������� � ��������, ���������, ��� ����������� �� ������, ��������.
	������� ������ ��������.������� :
	a) ������ ����������, ���� ������ ������� �� ������ ����������� ����������� �������� ����� ���;
	b) ������ ����������, �������� ������� ����������� ��������;
	c) ������ ����������, ���������� �������� ���������.*/
private:
	std::string Name, Position;
	int Year, Salary;
public:
	//set
	void setName(std::string Name);
	//�������� ��������� ���������...
	void setPosition(std::string Position = "Assistant Assistant Plankton");
	void setYear(int Year = 1950);
	void setSalary(int Salary = 100000);
	//get
	std::string getName();
	std::string getPosition();
	int getYear();
	int getSalary();
	//constructor
	Worker(std::string Name, std::string Position, int Year, int Salary);
	~Worker();
};

