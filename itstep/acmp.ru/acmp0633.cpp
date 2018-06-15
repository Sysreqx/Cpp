#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
	std::string team, name;
	std::vector<std::string> names;
	std::getline(std::cin, team);
	for (int i = 0; i < 3; i++)
	{
		std::getline(std::cin, name);
		names.push_back(name);
	}
	std::sort(names.begin(), names.end());

	std::cout << team << ": ";
	for (int i = 0; i < names.size() - 1; i++)
	{
		std::cout << names[i] << ", ";
	}
	std::cout << names[names.size() - 1] << std::endl;

	//system("pause");
	return 0;
}