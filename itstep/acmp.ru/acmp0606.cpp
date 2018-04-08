#include <iostream>
#include <string>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a < b + c && b < a + c && c < a + b)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	//system("pause");
	return 0;
}
