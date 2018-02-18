#include <iostream>
using namespace std;
void printBin(int n) {
	int k = 128;
	while (k > 0)
	{
		cout << n / k;
		n %= k;
		k /= 2;
	}
}

int main()
{
	int a;
	cin >> a;
	printBin(a);

	system("pause");
	return 0;
}