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
			a[i][j] = rand() % 91 + 10;
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

	int r_s_t;
	int r_s = 0;
	// РїСЂРѕРІРµСЂРєР° РЅР° РјРёРЅРёРјСѓРј
	for (int i = 0; i < n; ++i)
	{
		r_s_t = 0;
		for (int j = 0; j < m; ++j)
		{
			if (i == 0)
			{
				r_s += a[i][j];
			}
			else
			{
				r_s_t += a[i][j];
			}
		}

		if (i > 1)
		{
			if (r_s_t < r_s)
			{
				r_s = r_s_t;
			}
		}
	}
	cout << endl;
	cout << r_s << endl;


	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}

	delete[] a;
	system("pause");
	return 0;
}
