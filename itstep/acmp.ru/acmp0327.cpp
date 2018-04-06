#include <iostream>
#include <string>

int main()
{
	std::string str, l_str, r_str;
	int l_int_sum = 0, r_int_sum = 0, r_int_sum_add = -1, r_int_sum_subtract = -1, n;
	std::cin >> n;
	for (int k = 0; k < n; k++)
	{
		std::cin >> str;
		for (int i = 0; i < 6; ++i)
		{
			if (i < 3)
				l_int_sum += (int)(str[i]) - 48;
			else
				r_int_sum += (int)(str[i]) - 48;
		}
		if ((int)(str[5]) - 48 == 0)
		{
			r_int_sum_add = r_int_sum + 1;
			r_int_sum_subtract = r_int_sum + 10;
		}
		else if ((int)(str[5]) - 48 == 9)
		{
			r_int_sum_subtract = r_int_sum - 1;
			r_int_sum_add = r_int_sum - 8;
		}
		else
		{
			r_int_sum_add = r_int_sum + 1;
			r_int_sum_subtract = r_int_sum - 1;
		}
		if (r_int_sum_add == l_int_sum || r_int_sum_subtract == l_int_sum)
			std::cout << "Yes" << std::endl;
		else
			std::cout << "No" << std::endl;
		l_int_sum = 0;
		r_int_sum = 0;
	}
/*
	std::cout << l_int_sum << std::endl;
	std::cout << r_int_sum << std::endl;
	system("pause");*/
	return 0;
}
