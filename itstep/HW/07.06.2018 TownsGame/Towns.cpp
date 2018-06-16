#include "Towns.h"

townsGame::townsGame(string dir, int mP)
{
	this->dir = dir;
	fstream f(dir + "\\city.csv", ios::in);
	string str;
	while (!f.eof())
	{
		getline(f, str);
		towns.insert(make_pair(str, 0));
	}
	f.close();

	for (int i = 0; i < mP; i++)
		maxPlayers.push_back(i);
}

void townsGame::play()
{
	string city;
	int i_player = 1;
	while (true)
	{
		if (i_player == 3)
			i_player = 1;
		system("cls");
		cout << i_player << " игрок ходит";
		cout << "\nВведите город на букву " << nextWord << endl;
		cin >> city;
		try
		{
			check_city(city);

			nextWord = (char)toupper(city[city.size() - 1]);

			if (nextWord == 'Ы' || nextWord == 'Ь' || nextWord == 'Э' || nextWord == 'Ъ')
			{
				nextWord = (char)toupper(city[city.size() - 2]);
			}
			++i_player;
			//SysRq;
			towns.find(city)->second = 1;

		}
		catch (const std::exception&e)
		{
			cout << e.what() << endl;
			Sleep(3000);
		}
	}
}

void townsGame::check_city(string city) const
{
	//указатель на найденный узел

	if (towns.find(city) == towns.end())
		throw exception("Город не найден");
	if (towns.find(city)->second == 1)
		throw exception("Город уже был");
	if (city[0] != nextWord && nextWord != '.')
		// c_str возвращает указатель на строку
		throw exception(("Введите город начинающийся с буквы " + to_string(nextWord)).c_str());
}

void townsGame::multiplay(int pos)
{
	while (true)
	{
		fstream file(dir + "\\" + to_string(maxPlayers[pos - 1]) + ".csv", ios::in);
		ifstream ohhhYeaaah;

		while (file.fail()) {
			file.open(dir + "\\" + to_string(maxPlayers[pos - 1]) + ".csv", ios::in);
			Sleep(1000);

			for (int i = 0; i < maxPlayers.size(); i++)
			{
				ohhhYeaaah.open(dir + "\\" + to_string(maxPlayers[i]) + ".csv");
				if (ohhhYeaaah.is_open())
				{
					system("cls");
					cout << "Ходит игрок " << i + 1 << endl;
					break;
				}
			}
			ohhhYeaaah.close();
		}
		system("cls");
		vector<string> oldCities;
		string c;
		while (!file.eof()) {
			getline(file, c);
			oldCities.push_back(c);
		}
		file.close();
		char lastChar = '.';
		if (oldCities.size() > 0) {
			string lastCity = oldCities[oldCities.size() - 1];
			if (lastCity.size() > 0)
				lastChar = (char)toupper(lastCity[lastCity.size() - 1]);
		}
		cout << "\nВведите город на букву \n" << lastChar << endl;
		getline(cin, c);
		try {
			check_city(c);
			for (size_t i = 0; i < oldCities.size(); i++)
				if (oldCities[i] == c)
					throw exception("Город уже был!");
			if (oldCities.size() > 0) {

				if (c[0] != lastChar && lastChar != '.')
					throw exception("Неверная буква!");
			}
			file.open(dir + "\\" + to_string(maxPlayers[pos - 1]) + ".csv", ios::app);
			file << "\n" << c;
			file.close();
			if (maxPlayers[pos - 1] == maxPlayers.size() - 1)
			{
				string rename = "ren " + dir + "\\" + to_string(maxPlayers[pos - 1]) + ".csv " + to_string(0) + ".csv";
				system(rename.c_str());
			}
			else {
				string rename = "ren " + dir + "\\" + to_string(maxPlayers[pos - 1]) + ".csv " + to_string(maxPlayers[pos]) + ".csv";
				system(rename.c_str());
			}

		}
		catch (exception&e) {
			cout << e.what();
		}

	}
}



