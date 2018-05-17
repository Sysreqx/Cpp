#include <iostream>
#include <vector>

void checkFreeSpace(std::vector<std::vector<char>> &palete,int &n, int &m)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			if (palete[i][j] == '.')
			{
				++cnt;
			}
			break;
		}
	}
	if (cnt == n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (palete[i][j] == '.')
				{
					palete.erase(palete.begin() + j);
					break;
				}
			}
		}
		--m;
	}
}

int main()
{
	int n, m;
	std::cin >> n >> m;
	char c;
	std::vector<std::vector<char>> palete;
	for (int i = 0; i < n; i++)
	{
		std::vector<char> tmp;
		tmp.clear();
		for (int j = 0; j < m; j++)
		{
			std::cin >> c;
			tmp.push_back(c);
		}
		palete.push_back(tmp);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << palete[i][j] << " ";
		}
		std::cout << std::endl;
	}

	system("pause");
	return 0;
}