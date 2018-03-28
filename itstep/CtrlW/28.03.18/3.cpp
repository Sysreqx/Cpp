#include <iostream>
#include <time.h>
using namespace std;

void countSort(int *a, int n) {
	int b[101];
	for (int i = 0; i < 101; ++i) {
		b[i] = 0;
	}
	for (int i = 0; i < n; ++i) {
		++b[a[i]];
	}

	for (int i = 0; i < 101; i++)
	{
		if (b[i] != 0)
			cout << i << ' ';
	}
	
}
int main()
{
	srand(time(NULL));
	int n = 10;
	int *a = new int[n];

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}
	countSort(a, n);

	system("pause");
	return 0;
}
