#pragma once
#include <iostream>
#include <string>
//
//1.	����� ������� ��������� ������� ����� ��������� � ����������� � ����������
//Input(), � ����� �������� ��������� ����� ����� � �������� �����
//� ������������ �����.
class Decimals
{
private:
	int numerator, denumerator;
public:
	void setNum(int n);
	void setDenum(int d);
	void Input(int n, int d);
	double getDecimals();
	int getWholePartOfDec();

	Decimals();
	~Decimals();
};

