#include <iostream>

int main() {
	int n, sum = 0;
	std::cin >> n;

	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
	}
	else
	{
		for (int i = 1; i >= n; i--)
		{
			sum += i;
		}
	}

	std::cout << sum << std::endl;

	// system("pause");
	return 0;
}