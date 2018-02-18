#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr1[n], arr2[n];
	int *ptr_arr1 = arr1, *ptr_arr2 = arr2;

	for (int i = 0; i < n; ++i)
	{
		// оператором разыменовывания * и арифметикой указателей продвигаемся по массиву 
		*(ptr_arr1 + i) = i + 1;
		// присваиваем значение первого массива во второй <=>
		// продвигаемся в обратном порядке = продвигаемся в прямом порядке
		*(ptr_arr2 + n - 1 - i) = *(ptr_arr1 + i);
	}
	for (int i = 0; i < n; ++i)
	{
		// cout << arr2[i] << " ";
		cout << *(ptr_arr2 + i) << " ";
	}

	system("pause");
}