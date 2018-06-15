#include <iostream>
using namespace std;

int bankP(double x, double p, double y, int c = 0)
{
	if (x >= y)
	{
		return c;
	}
	++c;
	x = x * p / 100 + x;
	int int_x = (int)x;
	x = int_x;
	return bankP(x, p, y, c);
}

int main()
{
	double x, p, y;
	int c;
	cin >> x >> p >> y;
	cout << bankP(x, p, y);
	system("pause");
	return 0;
}
//50 25 75