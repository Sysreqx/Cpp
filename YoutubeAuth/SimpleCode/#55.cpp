#include <iostream>

#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	srand(time(0));
	// int arr[n];
	int n;
	cin >> n;
	int *arr = new int [n];

	for (int i = 0; i < n; ++i)
	{
		*(arr + i) = rand() % 11;
		cout << arr[i] << "\t";
		cout << (arr + i) << endl;
	}

	delete [] arr;

	system("pause");
	return 0;
}