#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int n;
	cin >> n;
	int a[n][n];
	int a1[n][n];
	int a2[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			a[i][j] = rand() % 10;
			a1[i][j] = 0;
			a2[i][j] = 0;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	int max_row = 0, max_col = 0, cnt1 = -1, cnt2 = -1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (a[i][j] > max_row)
			{
				max_row = a[i][j];
				cnt1 = j;
			}
			if (a[j][i] > max_col)
			{
				max_col = a[j][i];
				cnt2 = j;
			}
		}
		a1[i][cnt1] = max_row;
		a2[i][cnt2] = max_col;

		for (int k = 0; k < n; ++k)
		{
			if (a[i][k] == max_row)
			{
				a1[i][k] = max_row;
			}
			if (a[k][i] == max_col)
			{
				a2[k][i] = max_col;
			}
		}

		max_row = 0;
		max_col = 0;
	}
	cout << endl;

	// check i| j->;
/*	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << a1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << a2[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;*/

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (a1[i][j] == a2[j][i] && a1[i][j] > 0)
			{
				cout << "num = " << a1[i][j] << ", i =" << i << ", j = " << j << endl;;
			}
		}
	}

	system("pause");
	return 0;
}