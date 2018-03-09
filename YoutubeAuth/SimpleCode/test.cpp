#include <iostream>
using namespace std;

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int size = 10;
	int *arr1 = new int[size];
	int *arr2 = new int[size];

	FillArray(arr1, size);
	FillArray(arr2, size);
	ShowArray(arr1, size);
	ShowArray(arr2, size);

	delete[] arr1;
	
	arr1 = new int[size];
	for (int i = 0; i < size; ++i)
	{
		arr1[i] = arr2[i];
	}

	cout << endl;
	ShowArray(arr1, size);
	ShowArray(arr2, size);


	delete[] arr2;
	delete[] arr1;
	system("pause");
}