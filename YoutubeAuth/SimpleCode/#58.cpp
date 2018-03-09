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
	int *firstArray = new int[size];
	int *secondArray = new int[size];

	FillArray(firstArray, size);
	FillArray(secondArray, size);

	cout << "1 array: ";
	ShowArray(firstArray, size);
	cout << "2 array: ";
	ShowArray(secondArray, size);

	delete[] firstArray;

	firstArray = new int[size];
	for (int i = 0; i < size; ++i)
	{
		firstArray[i] = secondArray[i];
	}

	cout << "===============" << endl;
	cout << "1 array: ";
	ShowArray(firstArray, size);
	cout << "2 array: ";
	ShowArray(secondArray, size);

	delete[] secondArray;
	delete[] firstArray;

	system("pause");
}