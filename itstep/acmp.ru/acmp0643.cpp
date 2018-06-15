#include <iostream>
#include <string>
#include <bitset>  // std::bitset

int main()
{
	int n, cnt = 0;
	std::cin >> n;
	std::string bin = std::bitset<32>(n).to_string();
	for (int i = 0; i < bin.length(); i++)
	{
		if (bin[i] == '1')
		{
			++cnt;
		}
	}
	std::cout << n + cnt << std::endl;

	//system("pause");
	return 0;
}