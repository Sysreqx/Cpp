#include "iostream" 
#include <vector> 

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<char>> c;
	std::vector<char> d;
	char e = '.';
	for (int i = 0; i < n + 2; i++)
	{
		for (int j = 0; j < m + 2; j++)
			d.push_back(e);
		c.push_back(d);
		d.clear();
	}

	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < m + 1; j++)
		{
			std::cin >> e;
			c[i][j] = e;
		}
	}

	int cnt = 0;
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < m + 1; j++)
		{
			if (c[i][j] == '.' &&
				c[i + 1][j] == '.' &&
				c[i - 1][j] == '.' &&
				c[i][j + 1] == '.' &&
				c[i][j - 1] == '.'
				)
				++cnt;
		}
	}
	std::cout << cnt;

/*
	for (auto i : c)
	{
		for (auto j : i)
			std::cout << j << ' ';
		std::cout << std::endl;
	}*/

	//system("pause");
	return 0;
}