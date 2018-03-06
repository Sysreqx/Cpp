#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int j = 0; j < n; ++j)
	{
		for (int i = 0; i < n - 1; ++i)
			{
				if (a[i] > a[i + 1])
				{
					swap(a[i], a[i + 1]);
				}
			}	
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	system("pause");
	return 0;
}