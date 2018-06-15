#include <string>
#include <iostream>
#include <ctime>
using namespace std;

int fillA(int(*arr)[5])
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			arr[i][j] = rand() % 31 + 30;
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << arr[i][j] << " ";
		}
	}
	cout << endl;
	return 0;
}

int showMin(int(*arr)[5])
{
	int min = arr[0][0];
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	cout << min << endl;
	return 0;
}

int showMax(int(*arr)[5])
{
	int max = arr[0][0];
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	cout << max << endl;
	return 0;
}

int main()
{
	srand(time(0));
	int a[5][5];

	fillA(a);
	showMin(a);
	showMax(a);

	system("pause");
	return 0;
}
