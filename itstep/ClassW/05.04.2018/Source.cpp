#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string integer1, integer2, char1;
	std::cin >> integer1 >> char1 >> integer2;

	int temp1, temp2;
	int digits = 0;
	int dec = 0;
	int max_length = integer1.size();
	// сюда записывать получившееся число
	std::string output_str, output_str1;
	//задать диапазон
	if (integer1.size() < integer2.size())
	{
		max_length = integer2.size();
	}
/*
	std::cout << std::endl << integer1 << std::endl;
	std::cout << std::endl << integer2 << std::endl;*/
	//std::cout << "asdfasdfasd" << (int)integer1[integer1.size() - 1] - 48;

	//add
	for (int i = 1; i < max_length + 1; i++)
	{
		temp1 = (int)integer1[integer1.size() - i] - 48;
		temp2 = (int)integer2[integer2.size() - i] - 48;
		std::cout << "temp1 - " << temp1 << std::endl;
		std::cout << "temp2 - " << temp2 << std::endl;
		digits = (temp1 + temp2 + dec) % 10;
		dec = (temp1 + temp2) / 10;
		output_str += std::to_string(digits);
		dec = 0;
	}
	std::reverse(output_str.begin(), output_str.end());
	std::cout << output_str << std::endl;

	//subtract
	for (int i = 1; i < max_length + 1; i++)
	{
		temp1 = (int)integer1[integer1.size() - i] - 48;
		temp2 = (int)integer2[integer2.size() - i] - 48;
		std::cout << "temp1 - " << temp1 << std::endl;
		std::cout << "temp2 - " << temp2 << std::endl;
		if (temp1 < temp2)
		{
			temp1 += 10;
		}
		digits = (temp1 - temp2);
		output_str1 += std::to_string(digits);
	}
	std::reverse(output_str1.begin(), output_str.end());
	std::cout << output_str1 << std::endl;

	system("pause");
	return 0;
}