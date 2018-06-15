#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
//
//*2.	Написать класс «Студент».
//Важно, чтобы строка с именем студента хранилась в динамической памяти.

class Student
{
private:
	std::string sName;
	char * fName;
	std::string mName;
	std::string dateOfBirth;
	std::string adress;
	int phone;
public:
	//setters
	//динамическая память - имя
	void setFName(const char * _fName);
	void setSName(std::string s);
	void setMName(std::string s);
	void setAdress(std::string s);
	void setDateOfBirth(std::string s);
	void setPhone(int s);
	//getters
	//динамическая память - имя
	char* getFName();
	std::string getSName();
	std::string getMName();
	std::string getAdress();
	std::string getDateOfBirth();
	int getPhone();
	Student();
	~Student();
};

