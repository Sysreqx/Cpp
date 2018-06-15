#include <iostream>
using namespace std;

int main()
{   
	int a;
	cin >> a;
	int cnt = 0;
	while (a)
	{
		if (a % 2 != 0)
		{
			++cnt;
		}
		a /= 2;
	}
	
	cout << cnt;
	// system("pause");
	return 0;
}
