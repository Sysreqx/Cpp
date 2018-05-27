#include <iostream>     // std::cout
#include <string>

int main()
{
	std::string s;
	std::string arrow1 = ">>-->";
	std::string arrow2 = "<--<<";
	std::cin >> s;
/*
	int i = 0;
	for (i = s.find(arrow1, i++); i != std::string::npos; i = s.find(arrow1, i + 1))
		std::cout << i << std::endl;*/
	int cnt = 0;
	if (s.length() > 4)
		for (int i = 0; i < s.length() - 4; i++)
		{
			//std::cout << s.substr(i, 5) << std::endl;
			if (s.substr(i, 5) == arrow1 || s.substr(i, 5) == arrow2)
				++cnt;
		}
	std::cout << cnt;
	//system("pause");
	return 0;
}