#include <iostream>
using namespace std;
int numOfEvenDig(int n)
{
	int cnt = 0;
	if (!n)
		return cnt;
	if (n == 0)
		return 1;
	if (n % 10 % 2 == 0)
		++cnt;
	return cnt + numOfEvenDig(n / 10);
}

int main()
{
	int a;
	cin >> a;
	cout << numOfEvenDig(a);

	system("pause");
	return 0;
} 