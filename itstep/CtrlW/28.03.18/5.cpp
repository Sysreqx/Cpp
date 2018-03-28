#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int n, m,maxInCol = 0,maxInRow = 0;
	srand(time(NULL));
	cin >> n >> m;
	int ** a = new int *[n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 101;
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		maxInCol = 0;
		for (int j = 0; j < m; j++)
		{
			if (maxInCol < a[i][j])
			{
				maxInCol = a[i][j];
			}
		}
		cout << endl << "in " << i+1 << " col maximum is " << maxInCol;
	}
	cout << endl;
	for (int j = 0; j < m; j++)
	{
		maxInRow = 0;
		for (int i = 0; i < n; i++)
		{
			if (maxInRow < a[i][j])
			{
				maxInRow = a[i][j];
			}
		}
		cout << endl << "in " << j + 1 << " row maximum is " << maxInRow;
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;
	system("pause");
	return 0;
}