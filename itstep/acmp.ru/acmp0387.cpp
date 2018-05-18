#include <iostream>     // std::cout
//#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <string>       // std::string

template<class T>
void FillVector(std::vector<T>& v, int n);

int main()
{
	int n;
	std::cin >> n;
	std::vector<std::string> left_rec;
	FillVector(left_rec, n);/*
	for (auto i : left_rec)
		std::cout << i << " ";
	std::cout << std::endl;*/
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (left_rec[i][0] == left_rec[i][3])
			++cnt;
	}
	std::cout << cnt;
	//system("pause");
	return 0;
}

template<class T>
void FillVector(std::vector<T>& v, int n)
{
	std::string tmp_s;
	for (int i = 0; i < n; i++)
	{
		std::cin >> tmp_s;
		v.push_back(tmp_s);
	}
}