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

// int *&arr --- РїРѕРґРјРµРЅРёС‚СЊ Р°РґСЂРµСЃСЃ
void push_back(int *&arr, int &size, const int value)
{
	int *newArr = new int [size + 1];

	for (int i = 0; i < size; ++i)
	{
		newArr[i] = arr[i];
	}

	newArr[size] = value;
	++size;
	delete[] arr;

	arr = newArr;
}

void pop_back(int *&arr, int &size)
{
	--size;
	int *newArr = new int [size];

	for (int i = 0; i < size; ++i)
	{
		newArr[i] = arr[i + 1];
	}

	delete[] arr;

	arr = newArr;
}

void push_st(int *&arr, int &size, const int value)
{
	int *newArr = new int [size + 1];

	newArr[0] = value;
	for (int i = 0; i < size; ++i)
	{
		newArr[i + 1] = arr[i];
	}

	++size;
	delete[] arr;
	arr = newArr;
}

void push_ID(int *&arr, int &size, const int ID, const int value)
{
	int *newArr = new int [size + 1];
	for (int i = 0; i < size; ++i)
	{
		if (i < ID)
		{
			newArr[i] = arr[i];
		}
		else if (i > ID)
		{
			newArr[i] = arr[i + 1];
		}
		else
		{
			newArr[i] = value;
		}
	}

	++size;
	delete[] arr;
	arr = newArr;
}

void pop_ID(int *&arr, int &size, const int ID)
{
	int *newArr = new int [size];
	for (int i = 0; i < size; ++i)
	{
		if (i < ID)
		{
			newArr[i] = arr[i];
		}
		else if (i > ID)
		{
			newArr[i - 1] = arr[i];
		}
	}

	--size;
	delete[] arr;
	arr = newArr;
}

void pop_st(int *&arr, int &size)
{
	--size;
	int *newArr = new int [size];
	for (int i = 0; i < size; ++i)
	{
		newArr[i] = arr[i + 1];
	}

	delete[] arr;
	arr = newArr;
}

int main()
{
	int size = 5;
	int *arr = new int [size];

	FillArray(arr, size);
	ShowArray(arr, size);
	push_st(arr, size, 19);
	ShowArray(arr, size);
	pop_st(arr, size);
	ShowArray(arr, size);
	push_ID(arr, size, 4, 19);
	ShowArray(arr, size);
	pop_ID(arr, size, 3);
	ShowArray(arr, size);

	delete [] arr;
	system("pause");
}