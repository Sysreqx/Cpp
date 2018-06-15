#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	//РїСЂРѕСЃС‚Рѕ Р·Р°РїРѕР»РЅРёС‚СЊ РјР°СЃСЃРёРІ
	int n, m;
	cin >> n >> m;
	int **a = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = 1 + rand() % 11;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << a[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < n; ++i)
	{
		int r_s = 0;
		for (int j = 0; j < m; ++j)
		{
			r_s += a[i][j];
		}
		cout << r_s << endl;
	}
	cout << endl;

	for (int i = 0; i < m; ++i)
	{
		int r_s = 0;
		for (int j = 0; j < n; ++j)
		{
			r_s += a[j][i];
		}
		cout << r_s << endl;
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
