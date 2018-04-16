#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
//
//*2.	�������� ����� ��������.
//�����, ����� ������ � ������ �������� ��������� � ������������ ������.

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
	//������������ ������ - ���
	void setFName(const char * _fName);
	void setSName(std::string s);
	void setMName(std::string s);
	void setAdress(std::string s);
	void setDateOfBirth(std::string s);
	void setPhone(int s);
	//getters
	//������������ ������ - ���
	char* getFName();
	std::string getSName();
	std::string getMName();
	std::string getAdress();
	std::string getDateOfBirth();
	int getPhone();
	Student();
	~Student();
};

