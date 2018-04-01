#include <iostream>
using namespace std;

int AmN(int n)
{
	if (n == 0)
	{
		return n;
	}
	int am = n % 10;
	return am + AmN(n / 10);
}

int main()
{
	int n;
	cin >> n;
	cout << AmN(n);
	system("pause");
	return 0;
}