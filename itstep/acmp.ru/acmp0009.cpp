#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		std::cin >> tmp;
		v.push_back(tmp);
	}/*
	for (int i = 0; i < n; i++)
	{
		std::cout << v[i] << " ";
	}*/
	int sum = 0; int mul = 1;
	for (int i = 0; i < n; i++)
	{
		if (v[i] > 0)
		{
			sum += v[i];
		}
	}
	int min = v[0], min_i = 0;
	int max = v[0], max_i = 0;
	for (int i = 1; i < n; i++)
	{
		if (min > v[i])
		{
			min = v[i];
			min_i = i;
		}
		if (max < v[i])
		{
			max = v[i];
			max_i = i;
		}
	}
	if (min_i > max_i)
	{
		std::swap(min_i, max_i);
	}
	for (int i = min_i + 1; i < max_i; i++)
	{
		mul *= v[i];
	}
	std::cout << sum << " " << mul << std::endl;

	// system("pause");
	return 0;
}