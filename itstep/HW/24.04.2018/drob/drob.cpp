#include "drob.h"

drob::drob(int x, int y)
{
	setX(x);
	setY(y);
}
void drob::setX(int x)
{
	this->x = x;
}
void drob::setY(int y)
{
	if (y != 0)
		this->y = y;
	else this->y = 1;
}

int drob::getX() const
{
	return this->x;
}

int drob::getY() const
{
	return this->y;
}

const drob& drob::operator+=(const drob &a)
{
	this->x = this->x * a.y + this->y * a.x;
	this->y = this->y * a.y;
	return *this;
}
void drob::operator-=(const drob &a)
{
	this->x = this->x * a.y - this->y * a.x;
	this->y = this->y * a.y;
}
void drob::operator*=(const drob &a)
{
	this->x = this->x * a.x;
	this->y = this->y * a.y;
}
void drob::operator/=(const drob &a)
{
	this->x = this->x * a.y;
	this->y = this->y * a.x;
}

drob operator+(const drob &a, const drob &b) {
	drob c = a;
	c += b;
	return c;
}

drob operator-(const drob &a, const drob &b) {
	drob c = a;
	c -= b;
	return c;
}
drob operator*(const drob &a, const drob &b) {
	drob c = a;
	c *= b;
	return c;
}
drob operator/(const drob &a, const drob &b) {
	drob c = a;
	c /= b;
	return c;
}
bool operator>(const drob&a, const drob&b) {

	return a.getDouble() > b.getDouble();
}

void drob::operator+=(int a) {
	this->x += this->y*a;
}

double drob::getDouble() const
{
	return double(x) / y;
}

const drob & drob::operator++()
{
	x += y;
	return *this;
}

const drob & drob::operator--()
{
	x -= y;
	return *this;
}

const drob & drob::operator++(int)
{
	//this - 3/2
	//1
	/*drob tmp;
	tmp.x = this->x;
	tmp.y = this->y;*/
	//2
	//drob tmp(this->x, this->y);

	drob tmp(*this);//copy constructor
	this->x += this->y;
	return tmp;
}

const drob & drob::operator--(int)
{
	drob tmp(*this);
	this->x -= this->y;
	return tmp;
}

void drob::findCommonDenum(drob & a)
{
	this->x *= a.y;
	this->y *= a.y;
	a.x *= this->y;
	a.y *= this->y;
}

void drob::getDec() const
{
	cout << getX() << "/" << getY() << endl;
}

bool operator<(const drob &a, const drob &b) {
	return a.getDouble() < b.getDouble();
}
bool operator>=(const drob &a, const drob &b) {
	return a.getDouble() >= b.getDouble();
}
bool operator<=(const drob &a, const drob &b) {
	return a.getDouble() <= b.getDouble();
}
bool operator!=(const drob &a, const drob &b) {
	return a.getDouble() != b.getDouble();
}
bool operator==(const drob &a, const drob &b) {
	return a.getDouble() == b.getDouble();
}

//c = a+5
drob operator+(const drob & a, int b)
{
	drob c = a;
	c += b;
	return c;
}

ostream & operator<<(ostream & out, const drob & a)
{
	a.getDec();
	return out;
}

istream & operator>>(istream & in, drob & a)
{
	int x, y;
	in >> x >> y;
	a.setX(x);
	a.setY(y);
	return in;
}
