#include <iostream>
#include <string>

int main()
{
	int n, i, j;
	std::cin >> n >> i >> j;
	int forward;
	int backward;
	if (j < i)
	{
		int temp = i;
		i = j;
		j = temp;
	}
	forward = n + i - j;
	backward = j - i;
	if (forward > backward && i != j)
	{
		std::cout << backward - 1 << std::endl;
	}
	else
	{
		if (i == j)
		{
			std::cout << 0;
		}
		else
			std::cout << forward - 1 << std::endl;
	}

	 //system("pause");
	return 0;
}