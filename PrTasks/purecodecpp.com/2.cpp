#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int temp[50];

	for (int i = 0; i < 50;)
	{
		int tmp = rand() % 100 + 1;
		if (tmp % 2 != 0)
		{
			cout << tmp << " ";
			++i;
		}

		if (i == 10 || i == 20 || i == 30 || i == 40 || i == 50)
			cout << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}