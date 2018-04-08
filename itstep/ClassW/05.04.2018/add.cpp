#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string integer1, integer2;
	std::cin >> integer1 >> integer2;

	integer1 = "0" + integer1;
	integer2 = "0" + integer2;
	if (integer1 > integer2)
	{
		while (integer2.size() != integer1.size())
		{
			integer2 = "0" + integer2;
		}
	}
	if (integer1 < integer2)
	{
		while (integer2.size() != integer1.size())
		{
			integer1 = "0" + integer1;
		}
	}
	std::reverse(integer1.begin(), integer1.end());
	std::reverse(integer2.begin(), integer2.end());

	//add
	std::vector<int> a;
	std::vector<int> b;
	for (int i = 0; i < integer1.size(); i++)
	{	
		a.push_back(integer1[i] - 48);
	}
	for (int i = 0; i < integer2.size(); i++)
	{
		b.push_back(integer2[i] - 48);
	}

	for (auto i : a)
	{
		std::cout << i;
	}
	std::cout << std::endl;
	for (auto i : b)
	{
		std::cout << i;
	}
	std::cout << std::endl;

	for (int i = 0; i < a.size() - 1; i++)
	{
		b[i] += a[i];
		b[i + 1] += (b[i] / 10);
		b[i] %= 10;
	}
	std::reverse(b.begin(), b.end());

	for (auto i : b)
	{
		std::cout << i;
	}
	std::cout << " - add" << std::endl;
	
	system("pause");
	return 0;
}