#include <iostream>
using namespace std;

int main()
{
	for (int i = 10, j = 0; i < 37; ++i, ++j)
	{
		cout << i << " " << char(65 + j) << endl;
	}

	system("pause");
	return 0;
} 