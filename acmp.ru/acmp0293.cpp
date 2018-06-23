#include <iostream>     // std::cout
//#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <string>       // std::string

template<class T>
void fillVector(std::vector<T>& v, int n);

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> revenue, tax;
	fillVector(revenue, n);
	fillVector(tax, n);
	double maximumTax = revenue[0] * tax[0];
	int index = 1;
	for (int i = 1; i < n; i++)
	{
		if (revenue[i] * tax[i] > maximumTax)
		{
			maximumTax = revenue[i] * tax[i];
			index = i + 1;
		}
	}
	std::cout << index;
	//system("pause");
	return 0;
}

template<class T>
void fillVector(std::vector<T>& v, int n)
{
	T tmp_s;
	for (int i = 0; i < n; i++)
	{
		std::cin >> tmp_s;
		v.push_back(tmp_s);
	}
}