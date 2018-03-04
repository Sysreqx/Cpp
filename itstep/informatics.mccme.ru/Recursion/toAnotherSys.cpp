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
	if (m == m) {
		Octal(n / m, m);
		cout << n % m;
	}

/*	// solution with switch;
	switch (m)
	{
		case 2:
		Octal(n / 2, m);
		cout << n % 2;
		break;
		case 3:
		Octal(n / 3, m);
		cout << n % 3;
		break;
		case 4:
		Octal(n / 4, m);
		cout << n % 4;
		break;
		case 5:
		Octal(n / 5, m);
		cout << n % 5;
		break;
		case 6:
		Octal(n / 6, m);
		cout << n % 6;
		break;
		case 7:
		Octal(n / 7, m);
		cout << n % 7;
		break;
		case 8:
		Octal(n / 8, m);
		cout << n % 8;
		break;
		case 9:
		Octal(n / 9, m);
		cout << n % 9;
		break;
	}*/
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