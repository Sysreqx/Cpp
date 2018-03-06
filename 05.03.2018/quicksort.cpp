#include <iostream>
#include <algorithm>
using namespace std;

int quicksort(A, lo, hi)
{
	if (lo < hi)
	{
		p = partition(A, lo, hi);
		quicksort(A, lo, p - 1);
		quicksort(A, p, hi);
	}
}

int partition(A, lo, hi)
{
	pivot = get_pivot(A, lo, hi);
	i = lo;
	j = hi;
	while (i <= j)
	{
		while(A[j] < pivot)
		{
			++i;
		}
		while (A[j] > pivot)
		{
			--j;
		}
		if (i <= j)
		{
			swap(A[i], A[j]);
			i = j + 1;
			j = j - 1;
		}
	}
	return i;
}

int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int j = 0; j < n; ++j)
	{
		for (int i = 0; i < n - 1; ++i)
			{
				if (a[i] > a[i + 1])
				{
					swap(a[i], a[i + 1]);
				}
			}	
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	system("pause");
	return 0;
}