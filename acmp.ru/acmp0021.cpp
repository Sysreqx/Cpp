#include <iostream>
using namespace std;

int main()
{   
	int a, b, c;
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		if (b >= c)
		{
			cout << a - c;
		}
		else
			cout << a - b;
	}
	else if (b >= a && b >= c)
	{
		if (a >= c)
		{
			cout << b - c;
		}
		else
			cout << b - a;
	}
	else
	{
		if (b >= a)
		{
			cout << c - a;
		}
		else
			cout << c - b;
	}
	// system("pause");
}
