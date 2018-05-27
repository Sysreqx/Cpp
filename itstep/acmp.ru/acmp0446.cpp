#include <iostream>     // std::cout
#include <string>
#include <vector>

//заполнить вектор векторов
template<class T>
void fillVector(std::vector<std::vector<T>> &vectorIn, int n, int m);

//Вывести вектор векторов.
template<class T>
void printVector(std::vector<std::vector<T>> const& vectorIn, int n, int m);

int main()
{
	std::vector<std::string> rgbTable;
	rgbTable.push_back(".");    // 0
	rgbTable.push_back(".B"); 	// 1
	rgbTable.push_back(".G"); 	// 2
	rgbTable.push_back(".GB");	// 3
	rgbTable.push_back(".R"); 	// 4
	rgbTable.push_back(".RB"); 	// 5
	rgbTable.push_back(".RG"); 	// 6
	rgbTable.push_back(".RGB"); // 7
	std::vector<std::vector<char>> rgbTableIn;
	std::vector<std::vector<int>> numberTable;
	int n, m;
	std::cin >> n >> m;
	fillVector(rgbTableIn, n, m);
	fillVector(numberTable, n, m);
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < rgbTable[numberTable[i][j]].length(); k++)
			{
				std::string z = rgbTable[numberTable[i][j]].substr(k, 1);
				std::string x;
				x.push_back(rgbTableIn[i][j]);
				if (x == z)
					++cnt;
			}
		}
	}
	if (cnt == n * m)
		std::cout << "YES";
	else
		std::cout << "NO";

	//system("pause");
	return 0;
}

template<class T>
void fillVector(std::vector<std::vector<T>> &vectorIn, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		std::vector <T> v;
		v.clear();
		for (int j = 0; j < m; j++)
		{
			T c;
			std::cin >> c;
			v.push_back(c);
		}
		vectorIn.push_back(v);
	}
}

template<class T>
void printVector(std::vector<std::vector<T>> const & vectorIn, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << vectorIn[i][j] << " ";
		}
		std::cout << std::endl;
	}
}