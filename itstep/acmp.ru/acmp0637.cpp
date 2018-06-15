#include <iostream>
#include <string>

int main()
{
	int n, k, output = 0;
	std::cin >> n;
	int *team = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> team[i];
	}
	std::cin >> k;
	for (int i = 0; i < n; i++)
	{
		if (team[i] > k)
		{
			team[i] = k;
		}
		output += team[i];
	}
	std::cout << output << std::endl;
	
	delete[] team;
	//system("pause");
	return 0;
}
