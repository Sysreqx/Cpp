#include <iostream>
#include <vector>
#include <string>

int main()
{
	int sum, mul, a = 0, b = 0;
	std::cin >> sum >> mul;

	for (int i = 0; i < 1001; i++)
	{
		for (int j = 0; j < 1001; j++)
		{
			if (i + j == sum && i * j == mul)
			{
				a = i;
				b = j;
				break;
			}
		}
	}
	if (a > b)
	{
		int temp = b;
		b = a;
		a = temp;
	}
	std::cout << a << " " << b << std::endl;

	//system("pause");
	return 0;
}
