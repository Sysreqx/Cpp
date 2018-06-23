#include <iostream>
#include <vector>

//РЎРґРІРёРіР°С‚СЊ РѕРґРЅСѓ РґРµР»Р°С‚СЊ Рє РґСЂСѓРіРѕР№, РµСЃР»Рё РµСЃС‚СЊ СЃРІРѕР±РѕРґРЅРѕРµ РјРµСЃС‚Рѕ
bool checkFreeSpace(std::vector<std::vector<char>>& v, int n, int & m);
//Р Р°СЃСЃРїРµС‡Р°С‚Р°С‚СЊ РІРµРєС‚РѕСЂ
void PrintVector(std::vector<std::vector<char>>& v, int n, int m);
//Р—Р°РїРѕР»РЅРёС‚СЊ РІРµРєС‚РѕСЂ
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