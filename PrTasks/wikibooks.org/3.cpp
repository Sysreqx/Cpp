#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int temp[8], total = 0;
	

	for (int i = 0; i < 8; ++i)
	{
		temp[i] = rand() % 10;
		cout << temp[i] << " ";
		total += temp[i];
	}

	cout << endl << total << " " << total / 8;

	delete[] temp;
	system("pause");
	return 0;
}