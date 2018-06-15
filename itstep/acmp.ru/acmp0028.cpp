#include <iostream>

int main() {
	int x1, y1, x2, y2, x, y;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

	if (x1 == x2)
	{
		x = x > x1 ? x1 - (x - x1) : x1 + (x1 - x);
	}
	if (y1 == y2)
	{
		y = y > y1 ? y1 - (y - y1) : y1 + (y1 - y);
	}

	std::cout << x << " " << y << std::endl;

	// system("pause");
	return 0;
}