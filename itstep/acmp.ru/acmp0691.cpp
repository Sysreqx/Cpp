#include <iostream>
#include <string>

int main()
{
	std::string bus_number;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> bus_number;

		bool check1 = 0;
		bool check2 = 0;
		bool check3 = 0;
		bool check4 = 0;
		bool check5 = 0;
		bool check6 = 0;
		std::string cmp1 = bus_number.substr(0, 1);
		std::string cmp2 = bus_number.substr(1, 1);
		std::string cmp3 = bus_number.substr(2, 1);
		std::string cmp4 = bus_number.substr(3, 1);
		std::string cmp5 = bus_number.substr(4, 1);
		std::string cmp6 = bus_number.substr(5, 1);
		if (cmp1 == "A" || cmp1 == "B" || cmp1 == "C" || cmp1 == "E" || cmp1 == "H" || cmp1 == "K" || cmp1 == "M" || cmp1 == "O" || cmp1 == "P" || cmp1 == "T" || cmp1 == "X" || cmp1 == "Y")
		{
			check1 = 1;
		}
		if (cmp5 == "A" || cmp5 == "B" || cmp5 == "C" || cmp5 == "E" || cmp5 == "H" || cmp5 == "K" || cmp5 == "M" || cmp5 == "O" || cmp5 == "P" || cmp5 == "T" || cmp5 == "X" || cmp5 == "Y")
		{
			check5 = 1;
		}
		if (cmp6 == "A" || cmp6 == "B" || cmp6 == "C" || cmp6 == "E" || cmp6 == "H" || cmp6 == "K" || cmp6 == "M" || cmp6 == "O" || cmp6 == "P" || cmp6 == "T" || cmp6 == "X" || cmp6 == "Y")
		{
			check6 = 1;
		}
		if (cmp2 == "1" || cmp2 == "2" || cmp2 == "3" || cmp2 == "4" || cmp2 == "5" || cmp2 == "6" || cmp2 == "7" || cmp2 == "8" || cmp2 == "9" || cmp2 == "0")
		{
			check2 = 1;
		}
		if (cmp3 == "1" || cmp3 == "2" || cmp3 == "3" || cmp3 == "4" || cmp3 == "5" || cmp3 == "6" || cmp3 == "7" || cmp3 == "8" || cmp3 == "9" || cmp3 == "0")
		{
			check3 = 1;
		}
		if (cmp4 == "1" || cmp4 == "2" || cmp4 == "3" || cmp4 == "4" || cmp4 == "5" || cmp4 == "6" || cmp4 == "7" || cmp4 == "8" || cmp4 == "9" || cmp4 == "0")
		{
			check4 = 1;
		}

		if (check1 && check2 && check3 && check4 && check5 && check6 && bus_number.length() == 6)
		{
			std::cout << "Yes" << std::endl;
		}
		else
		{
			std::cout << "No" << std::endl;
		}
	}

	// system("pause");
	return 0;
}
