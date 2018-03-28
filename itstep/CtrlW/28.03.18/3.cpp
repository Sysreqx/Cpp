#include <iostream>
#include <ctime>
using namespace std;

int main()
{   
	srand(time(0));
	int n;
	cin >> n;
	int a[n];
	int b[n];

	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				// меняем элементы местами
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	int cnt = 0;
	for (int i = 0, j = 0; i < n; ++i)
	{
		if (a[i] != a[i + 1])
		{
			b[j] = a[i];
			++j;
			++cnt;
		}
	}

	for (int i = 0; i < cnt; ++i)
	{
		cout << b[i] << " ";
	}
	cout << endl;
	
	system("pause");
	return 0;
}
