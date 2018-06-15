#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool func(std::string a, std::string b)
{
	if (a.length() < b.length()) return true;
	else if (a.length() > b.length()) return false;
	else return a < b;
}

int main()
{
	std::vector<std::string> vect;
	std::string tmp;
	for (int i = 0; i < 3; i++)
	{
		std::cin >> tmp;
		vect.push_back(tmp);
	}
	sort(vect.begin(), vect.end(), func);

	std::cout << vect[2] << std::endl;

	// system("pause");
	return 0;
}