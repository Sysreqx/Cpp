#include <iostream>
using namespace std;
void printBin(int n) {
	if (n == 0)
	{
		return;
	}
	if (n < 0)
	{
		n = -n;
	}
	printBin(n / 2);
	cout << n % 2;
}

int main()
{
	int a;
	cin >> a;
	if (a > 0) printBin(a);
	else if (a == 0) cout << "0";
	else
	{
		cout << "-";
		printBin(a);
	}

	system("pause");
	return 0;
} 