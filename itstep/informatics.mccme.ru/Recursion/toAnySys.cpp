#include <iostream>
using namespace std;

void Octal(int n, int m) {
	if (n == 0)
	{
		return;
	}
	if (n < 0)
	{
		n = -n;
	}

	// solution with if
	if (m < 10)
	{
		Octal(n / m, m);
		cout << n % m;
	}
	else
	{
		if (n % m < 10)
		{
			Octal(n / m, m);
			cout << n % m;
		}
		else
		{
			Octal(n / m, m);
			cout << char(n % m + 55);
		}
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	if (a > 0) Octal(a, b);
	else if (a == 0) cout << "0";
	else
	{
		cout << "-";
		Octal(a, b);
	}

	system("pause");
	return 0;
} 