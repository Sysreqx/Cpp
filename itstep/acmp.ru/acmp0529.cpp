#include <iostream>
using namespace std;

int main()
{   
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int u_x1 = -x1;
	int u_x2 = -x2;
	int u_y1 = -y1;
	int u_y2 = -y2;

	double l;
	// Если иксы равны
	if (x1 == x2)
	{
		if (y1 <= 0 && y2 <= 0)
		{
			if (u_y2 > u_y1)
				l = u_y2 - u_y1;
			else
				l = u_y1 - u_y2;
		}

		if (y1 >= 0 && y2 >= 0)
		{
			if (y2 > y1)
				l = y2 - y1;
			else
				l = y1 - y2;
		}

		if (y1 >= 0 && y2 <= 0)
			l = y1 - y2;

		if (y2 >= 0 && y1 <= 0)
			l = y2 - y1;
	}

	// Если игрики равны
	if (y1 == y2)
	{
		if (x1 <= 0 && x2 <= 0)
		{
			if (u_x2 > u_x1)
				l = u_x2 - u_x1;
			else
				l = u_x1 - u_x2;
		}

		if (x1 >= 0 && x2 >= 0)
		{
			if (x2 > x1)
				l = x2 - x1;
			else
				l = x1 - x2;
		}

		if (x1 >= 0 && x2 <= 0)
			l = x1 - x2;

		if (x2 >= 0 && x1 <= 0)
			l = x2 - x1;
	}

	if (x1 != x2)
	{
		if (x1 > x2)
		{
			if (y1 >= 0 && y1 > y2)
				l = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
		}
	}
}
