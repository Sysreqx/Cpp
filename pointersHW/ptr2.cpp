#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	int *ptr_arr = arr;
	for (int i = 0; i < n; ++i)
	{
		*(ptr_arr + i) = i + 1;
	}
	for (int i = 0; i < n; ++i)
	{
		// cout << arr[n - 1 - i] << " ";
		cout << *(ptr_arr + n - 1 - i) << " ";
	}
	
	system("pause");
}