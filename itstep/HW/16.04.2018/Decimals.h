#pragma once
#include <iostream>
#include <string>
//
//1.	Класс «Дробь» пополнить методам ввода числителя и знаменателя с клавиатуры
//Input(), а также методами выделения целой части и перевода дроби
//в вещественное число.
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

