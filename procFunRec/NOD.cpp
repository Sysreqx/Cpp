#include <iostream>
using namespace std;
int NOD(int a, int b) {
	if (a == 0 || b == 0)
	{
		return a + b;
	}
	if (a > b)
	{
		// return NOD(a - b, b);
		return NOD(a % b, b);
	}
	else
	{
		// return NOD(a, b - a);
		return NOD(a, b % a);
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << NOD(a, b);

	system("pause");
	return 0;
}