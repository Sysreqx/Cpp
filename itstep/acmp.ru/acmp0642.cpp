#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

//Р Р°СЃСЃРїРµС‡Р°С‚Р°С‚СЊ РІРµРєС‚РѕСЂ
void PrintVector(std::vector<std::vector<char>>& v, int n, int m);
//Р—Р°РїРѕР»РЅРёС‚СЊ РґРІСѓРјРµСЂРЅС‹Р№ РІРµРєС‚РѕСЂ
void FillVector(std::vector<std::vector<char>>& v, int n, int m);
//Р—Р°РїРѕР»РЅРёС‚СЊ РІРµРєС‚РѕСЂ
void FillVector(std::vector<int>& v, int n);

int main()
{
	int n, s;
	std::cin >> n >> s;
	std::vector<int> car_prices;
	FillVector(car_prices, n);
	std::sort(car_prices.begin(), car_prices.end());
	int cnt = 0;
	for (auto i : car_prices)
	{
		if (s >= 0 && s >= i)
		{
			s -= i;
			//std::cout << s << std::endl;
			++cnt;
		}
	}
	std::cout << cnt;
	//system("pause");
	return 0;
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

void FillVector(std::vector<int>& v, int n)
{
	int tmp;
	for (int i = 0; i < n; i++)
	{
		std::cin >> tmp;
		v.push_back(tmp);
	}
}
