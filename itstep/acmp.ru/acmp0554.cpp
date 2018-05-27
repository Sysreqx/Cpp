#include <iostream>     // std::cout

int main()
{
	int L = 0;
	int n;
	std::cin >> n;
	L = n * (n + 1) / 2 + 1;
	std::cout << L;
	//system("pause");
	return 0;
}