#include "drob.h"
#include <ctime>
#include <iostream>

void main()
{
	drob a(1, 5);
	drob b(2, 3);
	
	//a.findCommonDenum(b);
	cout << a.getDec();

	system("pause");
}