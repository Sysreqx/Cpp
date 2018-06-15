#include <iostream>
#include <string>
#include <vector>

int subtract(std::vector<int> x, std::vector<int> y, std::vector<int> z, int length)
{
	if (x == y)
	{
		std::cout << 0;
		return 0;
	}
	else
	{
		for (int i = 0; i < length - 1; i++)
		{
			if (i < length - 1)
			{
				--x[i + 1];
				z[i] += 10 + x[i];
			}
			else
			{
				z[i] -= y[i];
			}
			z[i] -= y[i];
			if (z[i] / 10 > 0)
			{
				++z[i + 1];
				z[i] %= 10;
			}
		}
	}
	std::reverse(z.begin(), z.end());
	//z.erase(z.end());
	for (auto i : z)
	{
		std::cout << i;
	}
	return 0;
}

int main()
{
	std::string integer1, integer2;
	std::cin >> integer1 >> integer2;
	
	int k = 3;
	int length = integer1.length();
	if (integer1.length() > integer2.length())
	{
		length = integer1.length();
		k = 1;
	}
	else
	{
		if (integer1.length() < integer2.length())
		{
			length = integer2.length();
			k = 2;
		}
		else
		{
			for (int i = 0; i < length; i++)
			{
				if (integer1[i] > integer2[i])
				{
					k = 1;
					break;
				}
				if (integer2[i] > integer1[i])
				{
					k = 2;
					break;
				}
			}
		}
	}

	std::vector<int> x;
	std::vector<int> y;
	std::vector<int> z;

	if (integer1.size() > integer2.size())
	{
		while (integer2.size() != integer1.size())
		{
			integer2 = "0" + integer2;
		}
	}
	if (integer1.size() < integer2.size())
	{
		while (integer2.size() != integer1.size())
		{
			integer1 = "0" + integer1;
		}
	}

	for (int i = 0; i < length; i++)
	{
		z.push_back(0);
	}
	for (int i = 0; i < integer1.size(); i++)
	{
		x.push_back(integer1[i] - 48);
	}
	for (int i = 0; i < integer2.size(); i++)
	{
		y.push_back(integer2[i] - 48);
	}

	std::reverse(x.begin(), x.end());
	std::reverse(y.begin(), y.end());

	if (k == 1 || k == 3)
	{
		subtract(x, y, z, length);
	}

	if (k == 2)
	{
		std::cout << "-";
		subtract(y, x, z, length);
	}

	system("pause");
	return 0;
}