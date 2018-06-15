
#include <iostream>

using namespace std;

int main()
{
	int a, b, c = 0;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		c += b;
	}
	cout << c;
	system("pause");
	return 0;
}