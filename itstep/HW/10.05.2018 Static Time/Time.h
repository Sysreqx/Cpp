#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>   
#include <stdio.h>      /* puts, printf */
#include <time.h>       /* time_t, struct tm, time, localtime */
using namespace std;

class Time
{
private:
	int h, m, s;
public:
	void setH(int h);
	void setM(int m);
	void setS(int s);

	int getH() const;
	int getM() const;
	int getS() const;

	void PrintTime() const;

	void addHour(int h = 0);
	void addMin(int m = 0);
	void addSec(int s = 0);

	void subHour(int h = 0);
	void subMin(int m = 0);
	void subSec(int s = 0);

	//static Time 
	static void printTime();

	const Time&operator++();
	const Time&operator--();

	const Time&operator++(int);
	const Time&operator--(int);
	const Time&operator+=(const Time &a);
	const Time&operator-=(const Time &a);

	Time(int h = 0, int m = 0, int s = 0);
	~Time();
};

const bool &operator == (const Time &a, const Time &b);
const bool &operator != (const Time &a, const Time &b);
const bool &operator >= (const Time &a, const Time &b);
const bool &operator <= (const Time &a, const Time &b);
const bool &operator > (const Time &a, const Time &b);
const bool &operator < (const Time &a, const Time &b);
ostream &operator<<(ostream &out, const Time &a);
istream &operator >> (istream &in, Time &a);


