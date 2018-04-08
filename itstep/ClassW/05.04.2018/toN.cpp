#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	bool *a = new bool[n];
	int *a1 = new int[m];
	for (int i = 2; i <= n; ++i)
	{
		a[i] = true;
	}
	for (int i = 2; i * i <= n; ++i)
	{
		if (a[i] == true)
		{
			for (int j = i * i; j <= n; j += i)
			{
				a[j] = false;
			}
		}
	}

	int j = 0;
	for (int i = 2; i <= n; ++i)
	{
		if (a[i] == true)
		{
			cout << i << ' ';
			a1[j] = i;
			++j;
			// cout << "j" << i << endl;
		}
	}
	cout << endl;
	cout << a1[m - 1];

	delete[] a1;
	delete[] a;

	system("pause");
	return 0;
}