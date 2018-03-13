#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int b = 0;
	int a[10];
	for (int i = 0; i < 10; ++i)
	{
		a[i] = rand() % 20;
		if (a[i] >= 10)
			++b;
	}

	cout << b << endl;

	delete[] a;
	system("pause");
	return 0;
}