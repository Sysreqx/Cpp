#include <iostream>
using namespace std;
int sumDig(int n) {
	int sum = n % 10;
	if (n >= 10)
	{
		sum += sumDig(n / 10);
	}
	return sum;
}

int main()
{
	int a;
	cin >> a;
	cout << sumDig(a);

	system("pause");
	return 0;
}