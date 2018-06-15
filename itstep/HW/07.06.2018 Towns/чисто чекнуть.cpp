#include "Towns.h"

townsGame::townsGame(string dir)
{
	this->dir = dir;
	fstream f(dir+"\\city.csv", ios::in);
	string str;
	while (!f.eof())
	{
		getline(f, str);
		towns.insert(make_pair(str, 0));
	}
	f.close();
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
		cout << i_player << " ����� �����";
		cout << "\n������� ����� �� ����� " << nextWord << endl;
		cin >> city;
		try
		{

			check_city(city);

			nextWord = (char)toupper(city[city.size() - 1]);
			
			if (nextWord == '�' || nextWord == '�' || nextWord == '�' || nextWord == '�')
			{
				nextWord = (char)toupper(city[city.size() - 2]);
			}
			++i_player;
			//towns[city] = 1;
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
	//��������� �� ��������� ����
	
	if (towns.find(city) == towns.end())
		throw exception("����� �� ������");
	if (towns.find(city)->second == 1)
		throw exception("����� ��� ���");
	if (city[0] != nextWord && nextWord != '.')
		// c_str ���������� ��������� �� ������
		throw exception(("������� ����� ������������ � ����� " + to_string(nextWord)).c_str());
}

void townsGame::multiplay(int pos, int players)
{
	// ������ �������.
	vector<int> v;
	for (int i = 0; i < players; i++)
		v.push_back(i);

	while (1) {
		fstream file(dir + "\\" + to_string(v[pos - 1]) + ".csv", ios::in);
		while (file.fail()) {
			file.open(dir + "\\" + to_string(v[pos - 1]) + ".csv", ios::in);
			cout << "������� ����� �������\n";
			Sleep(1000);
			system("cls");
		}
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
			if (lastCity.size()>0)
				lastChar = (char)toupper(lastCity[lastCity.size() - 1]);
		}
		cout << "\n������� ����� �� ����� \n" << lastChar << endl;
		getline(cin, c);
		try {
			check_city(c);
			for (size_t i = 0; i < oldCities.size(); i++)
				if (oldCities[i] == c)
					throw exception("����� ��� ���!");
			if (oldCities.size() > 0) {

				if (c[0] != lastChar && lastChar != '.')
					throw exception("�������� �����!");
			}
			file.open(dir + "\\" + to_string(v[pos - 1]) + ".csv", ios::app);
			file << "\n" << c;
			file.close();
			if (v[pos - 1] == v.size() - 1)
			{
				string rename = "ren " + dir + "\\" + to_string(v[pos - 1]) + ".csv " + to_string(v[0]) + ".csv";
				system(rename.c_str());
			}
			else {
				string rename = "ren " + dir + "\\" + to_string(v[pos - 1]) + ".csv " + to_string(v[pos - 1] + 1) + ".csv";
				system(rename.c_str());
			}

		}
		catch (exception&e) {
			cout << e.what();
		}

	}
}