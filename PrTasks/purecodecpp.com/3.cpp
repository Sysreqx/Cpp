#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int a1[10];
	int a2[10];
	int a3[10];

	for (int i = 0; i < 10; ++i)
	{
		a1[i] = rand() % 21 + 10;
		a2[i] = rand() % 21 + 10;
	}

	for (int i = 0; i < 10; ++i)
	{
		a3[i] = a2[i] + a1[i];
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << a1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; ++i)
	{
		cout << a2[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; ++i)
	{
		cout << a3[i] << " ";
	}
	cout << endl;

	int max = a3[0], min = a3[0];
	double av_a = 0;
	for (int i = 0; i < 10; ++i)
	{
		if (max < a3[i])
			max = a3[i];
		if (min > a3[i])
			min = a3[i];
		av_a += a3[i];
	}
	cout << max << " " << min << " " << av_a / 10 << endl;

	system("pause");
	return 0;
}