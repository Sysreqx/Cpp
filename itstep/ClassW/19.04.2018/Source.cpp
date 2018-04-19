#include "Vector_.h"
#include <ctime>

int main()
{
	Vector_ v;
	v.push_back(150);
	v.printInfo();
	for (size_t i = 0; i < 9; i++)
	{
		v.push_back(rand() % 10);
	}
	Vector_ v2 = v;
	v2.printInfo();
	v.printInfo();
	//for (int i = 0; i < 15; i++)
	//{
	//	v.pop_back();
	//	v.printInfo();
	//}
	system("pause");
	return 0;
}