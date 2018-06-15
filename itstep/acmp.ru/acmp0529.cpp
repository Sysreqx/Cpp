#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip> 

int main()
{
	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;

	double l = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	std::cout << std::setprecision(10) << l << std::endl;

	//system("pause");
	return 0;
}
