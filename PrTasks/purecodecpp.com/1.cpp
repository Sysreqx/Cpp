#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int temp[10];


	for (int i = 0; i < 10; ++i)
	{
		temp[i] = rand() % 7 + 8;
		cout << temp[i] << " ";
		if (temp[i] > 10)
			temp[i] -= 10;
	}
	cout << endl;

	for (int i = 0; i < 10; ++i)
	{
		cout << temp[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}