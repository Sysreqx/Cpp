#pragma once
#include <iostream>
using namespace std;
class drob
{
	int x;
	int y;
public:
	drob(int x = 0, int y = 1);
	void setX(int x = 0);
	void setY(int y = 1);
	int getX() const;
	int getY() const;

	const drob & operator+=(const drob & a);
	const drob & operator*=(const drob & a);
	const drob & operator/=(const drob & a);
	const drob & operator-=(const drob & a);

	void operator-=(int a);//this-=a
	void operator*=(int a);//this*=a
	void operator/=(int a);//this/=a
	void operator+=(int a);//this+=a
	
	//operator 
	operator int() const;
	operator double() const;

	//���������� �������� + � ���� ������ ������
	//drob operator+(const drob& a) {
	//	//drob c(*this);
	//	this->x++;
	//	drob c;
	//	c.x = this->x;
	//	c.y = this->y;
	//	c += a;
	//	return c;
	//}

	//���������� ���������� �����  0,5
	double getDouble() const;
	//prefix
	const drob& operator++();
	const drob& operator--();
	//postfix
	const drob& operator++(int);
	const drob& operator--(int);
	//���������� � ������ �����������
	void findCommonDenum(drob &a);
	//���������� ������
	void getDec() const;
};

//���������� �������� + � ����  ���������� �������
//drob drob
drob operator+(const drob &a, const drob &b);
drob operator-(const drob &a, const drob &b);
drob operator*(const drob &a, const drob &b);
drob operator/(const drob &a, const drob &b);
bool operator>(const drob &a, const drob &b);
bool operator<(const drob &a, const drob &b);
bool operator>=(const drob &a, const drob &b);
bool operator<=(const drob &a, const drob &b);
bool operator!=(const drob &a, const drob &b);
bool operator==(const drob &a, const drob &b);
//int drob
drob operator+(int a, const drob &b);
drob operator-(int a, const drob &b);
drob operator*(int a, const drob &b);
drob operator/(int a, const drob &b);
bool operator>(int a, const drob &b);
bool operator<(int a, const drob &b);
bool operator>=(int a, const drob &b);
bool operator<=(int a, const drob &b);
bool operator!=(int a, const drob &b);
bool operator==(int a, const drob &b);
//drob int
drob operator+(const drob &a, int b);
drob operator-(const drob &a, int b);
drob operator*(const drob &a, int b);
drob operator/(const drob &a, int b);
bool operator>(const drob &a, int b);
bool operator<(const drob &a, int b);
bool operator>=(const drob &a, int b);
bool operator<=(const drob &a, int b);
bool operator!=(const drob &a, int b);
bool operator==(const drob &a, int b);

ostream &operator<<(ostream &out, const drob &a);
istream &operator>>(istream &in, drob &a);