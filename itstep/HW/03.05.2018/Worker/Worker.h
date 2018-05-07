#pragma once
#include <iostream>
#include <string>
#include <vector>

class Worker
{/*
Worker: Фамилия и инициалы, Должность, Год поступления на работу, Зарплата.
	Создать массив объектов.Вывести :
	a) список работников, стаж работы которых на данном предприятии превосходит заданное число лет;
	b) список работников, зарплата которых превосходит заданную;
	c) список работников, занимающих заданную должность.*/
private:
	std::string Name, Position;
	int Year, Salary;
public:
	//set
	void setName(std::string Name);
	//помощник помощника помощника...
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

