#include "Time.h"

void Time::setH(int h)
{
	if (h > 23 || h < 0)
	{
		this->h = 0;
	}
	else
	{
		this->h = h;
	}
}

void Time::setM(int m)
{
	if (m > 59 || m < 0)
	{
		this->m = 0;
	}
	else
	{
		this->m = m;
	}
}

void Time::setS(int s)
{
	if (s > 59 || s < 0)
	{
		this->s = 0;
	}
	else
	{
		this->s = s;
	}
}

int Time::getH() const
{
	return h;
}

int Time::getM() const
{
	return m;
}

int Time::getS() const
{
	return s;
}

void Time::PrintTime() const
{
	if (this->h < 10)
		cout << "0";
	cout << h << " ";
	if (this->m < 10)
		cout << "0";
	cout << m << " ";
	if (this->s < 10)
		cout << "0";
	cout << s << endl;
}

void Time::addHour(int h)
{
	int h1 = this->h + h;
	this->h = h1 % 24; // 73 mod 24 = 1
}

void Time::addMin(int m)
{
	int m1 = this->m + m;
	this->m = m1 % 60;
	m1 /= 60;
	addHour(m1);
}

void Time::addSec(int s)
{
	int s1 = this->s + s;
	this->s = s1 % 60;
	s1 /= 60;
	addMin(s1);
}

const Time & Time::operator--()
{
	// TODO: insert return statement here
}

const Time & Time::operator++(int)
{
	Time a(*this);
	this->addSec(1);
	return a;
}

const Time & Time::operator--(int)
{
	Time a(*this);
	this->subSec(1);
	return a;
}

const Time & Time::operator+=(const Time & a)
{
	this->addHour(a.h);
	this->addMin(a.m);
	this->addSec(a.s);
	return *this;
}

const Time & Time::operator-=(const Time & a)
{
	this->subHour(a.h);
	this->subMin(a.m);
	this->subSec(a.s);
	return *this;
}

void Time::subHour(int h)
{
	if (h % 24 > this->h)
		this->h = this->h + 24 - h % 24;
	else
		this->h = this->h - h % 24;
}

void Time::subMin(int m)
{
	int tm1 = m / 60;
	int tm2 = m % 60;
	if (tm2 > this->m)
	{
		this->m = this->m + 60 - m;
	}
	else
	{
		this->m -= tm2;
	}
	subHour(tm1);
}

void Time::subSec(int s)
{
	int tmp = s / 60;
	int tmp1 = s % 60;
	if (tmp1 > this->s)
		this->s = this->s + 60 - s;
	else
		this->s -= tmp1;
	subMin(tmp);
}

const Time & Time::operator++()
{
	this->addSec(1);
	return *this;
}

const Time & Time::operator--()
{
	this->subSec(1);
	return *this;
}

Time::Time(int h, int m, int s)
{
	this->setH(h);
	this->setM(m);
	this->setS(s);
}

Time::~Time()
{
}

const bool & operator==(const Time & a, const Time & b)
{
		if (b.getH() == a.getH() && b.getM() == a.getM() && b.getS() == a.getS())
			return true;
		return false;
}

const bool & operator!=(const Time & a, const Time & b)
{
	return !(a == b);
}

const bool & operator>=(const Time & a, const Time & b)
{
	return !(a <= b);
}

const bool & operator<=(const Time & a, const Time & b)
{
	if (a.getH() <= b.getH())
		return true;
	if (a.getH() == b.getH() && a.getM() <= b.getM())
		return true;
	if (a.getH() == b.getH() && a.getM() == b.getM() && a.getS() <= b.getS())
		return true;
	return false;
}

const bool & operator>(const Time & a, const Time & b)
{
	return !(a < b);
}

const bool & operator<(const Time & a, const Time & b)
{
	if (a.getH() < b.getH())
		return true;
	if (a.getH() == b.getH() && a.getM() < b.getM())
		return true;
	if (a.getH() == b.getH() && a.getM() == b.getM() && a.getS() < b.getS())
		return true;
	return false;
}

ostream & operator<<(ostream & out, const Time & a)
{
	a.PrintTime();
	return out;
}

istream & operator >> (istream & in, Time &a)
{
	int h, m, s;
	cout << "Введите часы\n";
	in >> h;
	cout << "Введите минуты\n";
	in >> m;
	cout << "Введите секунды\n";
	in >> s;
	a.setH(h);
	a.setM(m);
	a.setS(s);
	return in;
}
