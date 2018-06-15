#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	int *a = new int[n];
	int cnt = 0, tmp = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
		if (a[i] > 0)
		{
			++cnt;
		}
		else
		{
			cnt = 0;
		}
		if (cnt > tmp)
		{
			tmp = cnt;
		}
	}
	std::cout << tmp << std::endl;
	delete[] a;

	// system("pause");
	return 0;
}
