#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 0; n / 10 != 0; ++i)
	{
		if ((n % 10) % 2 == 0)
		{
			++cnt;
		}
		n /= 10;
	}

	cout << cnt;

	system("pause");
	return 0;
} 