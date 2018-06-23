#include <iostream>
#include <string>

int main()
{
	int a;
	std::cin >> a;
	std::string a_str = std::to_string(a);
	while (a_str.length() != 4) a_str = "0" + a_str;

	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		std::cout << "12" << "/" << "09" << "/" << a_str << std::endl;
	else
		std::cout << "13" << "/" << "09" << "/" << a_str << std::endl;

	// system("pause");
	return 0;
}
