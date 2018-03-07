#include <string>
#include <iostream>
#include <ctime>

int showA(int *arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr + i = rand() % 11;
	}
	for (int i = 0; i < size; ++i)
	{
		cout << *(arr + i) << ' ';
	}
	cout << endl;
}

int main()
{
	srand( time( 0 ) );
	int n, m;
	cin >> n >> m;
	int *a = new int[n];
	int *a1 = new int[m];

	showA(&a, n);
	showA(&a, m);


	system("pause");
	return 0;
}
