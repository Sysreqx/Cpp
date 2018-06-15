#include <iostream>
using namespace std;

int main()
{
	int *pa = new int;
	*pa = 2;
	delete pa;

	system("pause");
	return 0;
}