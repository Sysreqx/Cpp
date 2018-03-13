#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int s;
	int a[10];
	s = rand() % 20;

	for (int i = 0; i < 10; ++i)
	{
		a[i] = rand() % 20;
		if (s = a[i])
		{
			cout << s;
			system("pause");
			return 0;
		}
	}

	cout << "sorry not found..." << endl;

	delete[] a;
	system("pause");
	return 0;
}