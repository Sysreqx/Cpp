#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	//space memory for arr
	int** arr = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[m];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			arr[i][j] = rand() % 11;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// delete memory for arr
	//удалять в обратном порядке, в котором создавал
	for (int i = 0; i < n; ++i)
	{
		// достаточно удалить arr[i], потому что создал @@arr[i]@@ = new int[m];
		delete [] arr[i];
	}
	// достаточно удалить arr, потому что создал int** @@arr@@ = new int* [n];
	delete [] arr;

	system("pause");
	return 0;
}