#include <iostream>
#include <vector>

//Сдвигать одну делать к другой, если есть свободное место
bool checkFreeSpace(std::vector<std::vector<char>>& v, int n, int & m);
//Расспечатать вектор
void PrintVector(std::vector<std::vector<char>>& v, int n, int m);
//Заполнить вектор
void FillVector(std::vector<std::vector<char>>& v, int n, int m);

int main()
{
	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<char>> palete;
	FillVector(palete, n, m);
	//PrintVector(palete, n, m);
	int cnt = 0;
	while (checkFreeSpace(palete, n, m))
	{
		++cnt;
	}
	//PrintVector(palete, n, m);
	std::cout << cnt;
	//system("pause");
	return 0;
}

bool checkFreeSpace(std::vector<std::vector<char>>& v, int n, int & m)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			// 46 == '.'
			if (v[i][j] == 46)
			{
				++cnt;
				break;
			}
		}
	}
	//std::cout << cnt;
	if (cnt == n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (v[i][j] == 46)
				{
					v[i].erase(v[i].begin() + j);
					break;
				}
			}
		}
		--m;
		return true;
		//std::cout << m;
	}
	return false;
}

void PrintVector(std::vector<std::vector<char>>& v, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << v[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void FillVector(std::vector<std::vector<char>>& v, int n, int m)
{
	char c;
	for (int i = 0; i < n; i++)
	{
		std::vector<char> tmp;
		tmp.clear();
		for (int j = 0; j < m; j++)
		{
			std::cin >> c;
			tmp.push_back(c);
		}
		v.push_back(tmp);
	}
}