#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int **a = new int*[n];

	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for(int j =0; j < m; ++j)
		{
			a[i][j] = rand() % 11;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;

	system("pause");
	return 0;
}