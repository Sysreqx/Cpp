#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<int> a, b;

	std::string e, d;
	std::cin >> e;
	std::cin >> d;

	int n_cow = 0, n_bull = 0;
	for (int i = 0; i < 4; i++)
	{
		a.push_back(e[i]);
		b.push_back(d[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		if (a[i] == b[i])
		{
			a[i] = 0;
			b[i] = 0;
			++n_bull;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (a[i] == b[j] && a[i] != 0)
			{
				++n_cow;
			}
		}
	}
	std::cout << n_bull << " " << n_cow << std::endl;
	// system("pause");
	return 0;
}