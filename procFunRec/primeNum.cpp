#include <iostream>
using namespace std;
bool isPrime(int n)
{
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			return 0;
		}
		else return 1;
	}
}

int primeNum(int a) {
	for (int i = 0; i < 100; ++i)
	{
		if (isPrime(a))
		{
			cout << i << " ";
		}
	}
}

int main()
{
	int a;
	cin >> a;
	primeNum(a);

	system("pause");
	return 0;
}