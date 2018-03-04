#include <iostream>
using namespace std;
void Octal(int n) {
	if (n == 0)
	{
		return;
	}
	if (n < 0)
	{
		n = -n;
	}
	Octal(n / 8);
	cout << n % 8;
}

int main()
{
	int a;
	cin >> a;
	if (a > 0) Octal(a);
	else if (a == 0) cout << "0";
	else
	{
		cout << "-";
		Octal(a);
	}

	system("pause");
	return 0;
} 