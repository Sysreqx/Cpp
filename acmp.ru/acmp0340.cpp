#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int in_num;
	std::vector<int> box1;
	std::vector<int> box2;
	for (int i = 0; i < 6; i++)
	{
		std::cin >> in_num;
		if (i < 3)
		{
			box1.push_back(in_num);
		}
		else
		{
			box2.push_back(in_num);
		}
	}
	std::sort(box1.begin(), box1.end());
	std::sort(box2.begin(), box2.end());
/*
	for (auto i : box1)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
	for (auto i : box2)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;*/
	int a, b, c, d, e, f;
	a = box1[0];
	b = box1[1];
	c = box1[2];
	d = box2[0];
	e = box2[1];
	f = box2[2];
	if (a == d && b == e && c == f)
	{
		std::cout << "Boxes are equal";
		//system("pause");
		return 0;
	}
	else if (a >= d && b >= e && c >= f)
	{
		std::cout << "The first box is larger than the second one";
	}
	else if (a <= d && b <= e && c <= f)
	{
		std::cout << "The first box is smaller than the second one";
	}
	else
	{
		std::cout << "Boxes are incomparable";
	}

	//system("pause");
	return 0;
}
