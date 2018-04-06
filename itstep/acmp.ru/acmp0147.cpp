#include <iostream>
#include <string>

int main()
{
	int n, l = 1, k = 0, m = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		k = l;
		l = m;
		m = k + l;
	}
	std::cout << m << std::endl;
	
	// system("pause");
	return 0;
}
