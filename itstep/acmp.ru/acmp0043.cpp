#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::cin >> input;
	int cnt = 0;
	int tmp = 0;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '0')
		{
			++tmp;
		}
		if (tmp > cnt)
		{
			cnt = tmp;
		}
		if (input[i] != '0')
		{
			tmp = 0;
		}
	}
	std::cout << cnt << std::endl;

	//system("pause");
	return 0;
}
