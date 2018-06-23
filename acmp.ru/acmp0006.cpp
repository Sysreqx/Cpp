#include <iostream>
#include <string>

int main()
{
	std::string chess_path;
	std::string yes = "YES\n", no = "NO\n", error = "ERROR\n";
	std::cin >> chess_path;
	//РІРµСЂРЅС‹Рµ Р»Рё РєРѕРѕСЂРґРёРЅР°С‚С‹
	if (chess_path.length() == 5 && (chess_path[0] >= 65 && chess_path[0] <= 72) && (chess_path[3] >= 65 && chess_path[3] <= 72) && (chess_path[1] >= 49 && chess_path[1] <= 56) && (chess_path[4] >= 49 && chess_path[4] <= 56) && chess_path[2] == 45)
	{
		if (abs((chess_path[0] - chess_path[3]) * (chess_path[1] - chess_path[4])) == 2)
		{
			std::cout << yes;
		}
		else
		{
			std::cout << no;
		}
	}
	else
	{
		std::cout << error;
	}

	// system("pause");
	return 0;
}