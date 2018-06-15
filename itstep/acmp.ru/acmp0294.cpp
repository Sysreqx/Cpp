#include <iostream>
#include <string>

int main()
{
	int k1, m1, l1, k2, m2, l2;
	std::cin >> k1 >> m1 >> l1 >> k2 >> m2 >> l2;
	int num_bolts, num_nuts, shortage, bolts_value, nuts_value;
	num_bolts = k1 * m1 / 100;
	num_nuts = k2 * m2 / 100;
	bolts_value = k1 - num_bolts;
	nuts_value = k2 - num_nuts;
	if (bolts_value > nuts_value)
	{
		shortage = (bolts_value - nuts_value) * l1;
	}
	else
	{
		shortage = (nuts_value - bolts_value) * l2;
	}
	//std::cout << shortage << std::endl;
	num_bolts *= l1;
	num_nuts *= l2;
	shortage += num_bolts + num_nuts;
	std::cout << shortage << std::endl;
	//system("pause");
	return 0;
}
