#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if (arr[i] == 1)
		{
			++cnt;
		}
	}

	if (cnt > n / 2)
	{
		cout << n - cnt;
	}
	else
	{
		cout << cnt;
	}
	// system("pause");
}