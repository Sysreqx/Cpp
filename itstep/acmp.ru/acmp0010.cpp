#include <iostream>
#include <vector>

int main()
{
	long long a, b, c, d;
	std::cin >> a >> b >> c >> d;

	std::vector<int> v;
	for (int i = -100; i <= 100; ++i)
	{
		if (a * i * i * i + b * i * i + c * i + d == 0)
		{
			v.push_back(i);
		}
	}
	for (auto i : v)
		std::cout << i << " ";
	std::cout << std::endl;

	// system("pause");
	return 0;
}