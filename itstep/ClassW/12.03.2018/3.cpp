#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

int max(int *a, int n)
{
	int maxN = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > maxN)
		{
			maxN = a[i];
		}
	}
	return maxN;
}
int min(int *a, int n)
{
	int maxN = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] < maxN)
		{
			maxN = a[i];
		}
	}
	return maxN;
}

int main()
{
	srand(time(0));
	int *a = new int[5];
	for (int i = 0; i < 5; ++i)
	{
		a[i] = rand() % 10;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << max(a, 5) << endl;
	cout << min(a, 5) << endl;

	delete[] a;

	system("pause");
	return 0;
}

