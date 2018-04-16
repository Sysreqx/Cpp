#include "Decimals.h"

void Decimals::setNum(int n)
{
	numerator = n;
}

void Decimals::setDenum(int d)
{
	denumerator = d;
}

void Decimals::Input(int n, int d)
{
	setNum(n);
	setDenum(d);
}

double Decimals::getDecimals()
{
	return (double)numerator / denumerator;
}

int Decimals::getWholePartOfDec()
{
	return (int)getDecimals();
}

Decimals::Decimals()
{
}


Decimals::~Decimals()
{
}
