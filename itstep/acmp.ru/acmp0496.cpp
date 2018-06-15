#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	int max = a[0] + a[1] + a[n - 1], tmp = 0;
	for (int i = 1; i < n; i++)
	{
		tmp = a[(i) % n] + a[(i - 1) % n] + a[(i + 1) % n];
		//std::cout << tmp << std::endl;
		if (tmp > max)
		{
			max = tmp;
		}
	}
	std::cout << max << std::endl;

	delete[] a;

	// system("pause");
	return 0;
}
