#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip> 

int main()
{
	int x1, y1, x2, y2, n, x, y;
	std::cin >> x1 >> y1 >> x2 >> y2 >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> x >> y;
		double lB = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
		double lD = sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2));
		//std::cout << lD << " " << lB << std::endl;
		if ((lD / 2) >= lB)
		{
			std::cout << i + 1 << std::endl;
			//system("pause");
			return 0;
		}
	}
	std::cout << "NO" << std::endl;

	//system("pause");
	return 0;
}