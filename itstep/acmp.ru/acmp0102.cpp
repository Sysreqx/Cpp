#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	//1 3 2 -5 -8 4 -2 1 //-71, 35.5
	std::string _In = "In\n", _Out = "Out\n";
	double S, mod_stuff;
	int x1, x2, x3, y1, y2, y3, x, y;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x >> y;
	mod_stuff = (x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3);
	S = 0.5 * abs(mod_stuff);

	double S1, mod_stuff1, S2, mod_stuff2, S3, mod_stuff3;
	mod_stuff1 = (x1 - x) * (y2 - y) - (x2 - x) * (y1 - y);
	S1 = 0.5 * abs(mod_stuff1);				      
	mod_stuff2 = (x1 - x) * (y3 - y) - (x3 - x) * (y1 - y);
	S2 = 0.5 * abs(mod_stuff2);				      
	mod_stuff3 = (x3 - x) * (y2 - y) - (x2 - x) * (y3 - y);
	S3 = 0.5 * abs(mod_stuff3);

	if (S1 + S2 + S3 == S)
	{
		std::cout << _In;
	}
	else
	{
		std::cout << _Out;
	}

	//system("pause");
	return 0;
}