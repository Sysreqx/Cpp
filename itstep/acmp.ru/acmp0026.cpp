#include <iostream>
#include <string>
#include <cmath>

int main()
{
	float x1, y1, r1, x2, y2, r2;
	std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	float r = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	//std::cout << r << std::endl;
	if (r1 + r2 >= r && r + r2 >= r1 && r + r1 >= r2)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
	// system("pause");
	return 0;
}
