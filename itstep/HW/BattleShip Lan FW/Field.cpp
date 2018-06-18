#include "Field.h"

void SetColor(int f, int b)
{
	unsigned short ForeColor = f + 16 * b;
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, ForeColor);
}

#define BlackONLBlue SetColor(0, 9)
#define LightGreen SetColor(10, 0)
#define LightCyan SetColor(11, 0)
#define LightCyanONBlue SetColor(11, 1)
#define LightRed SetColor(12, 0)
#define LightRedONBlue SetColor(12, 1)
#define LightRedONRed SetColor(12, 4)
#define Red SetColor(4, 0)
#define redONLightMagenta SetColor(4, 13)
#define DarkGray SetColor(8, 0)

Field::Field(string dir, int player)
{
	this->dir = dir;

	vector<int> v;
	for (int i = 0; i < fieldSize + 2; i++)
		v.push_back(0);
	for (int i = 0; i < fieldSize + 2; i++)
	{
		field.push_back(v);
		fieldPC.push_back(v);
	}

	if (player == 1)
	{
		generation();

		// Записать двумерный вектор в файл.
		ofstream fout(dir + "\\2.txt");
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				fout << fieldPC[i][j];
				fout << " ";
			}
		}
		fout << endl;
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				fout << field[i][j];
				fout << " ";
			}
		}
		fout.close();
	}
	else
	{
		fstream fin(dir + "\\2.txt", ios::in);
		while (fin.fail())
		{
			Sleep(1000);
			fin.open(dir + "\\2.txt", ios::in);
		}

		// Считать двумерный вектор с файла.
		for (int i = 0; i < 12; i++)
			for (int j = 0; j < 12; j++)
				fin >> field[i][j];
		for (int i = 0; i < 12; i++)
			for (int j = 0; j < 12; j++)
				fin >> fieldPC[i][j];
		fin.close();
	}
}

void Field::multiplayer(int player)
{
	system("cls");
	printField();
	bool flag = true;
	while (flag)
	{
		fstream file(dir + "\\" + to_string(player) + ".txt", ios::in);
		ifstream ohYeeah;
		int ohYeeahVar = player % 2 + 1;
		while (file.fail())
		{
			file.open(dir + "\\" + to_string(player) + ".txt", ios::in);
			Sleep(500);
			ohYeeah.open(dir + "\\" + to_string(ohYeeahVar) + ".txt");

			for (int i = 0; i < 12; i++)
				for (int j = 0; j < 12; j++)
					ohYeeah >> fieldPC[i][j];
			for (int i = 0; i < 12; i++)
				for (int j = 0; j < 12; j++)
					ohYeeah >> field[i][j];
			ohYeeah.close();
			printField();
		}

		// Считать двумерный вектор с файла.
		for (int i = 0; i < 12; i++)
			for (int j = 0; j < 12; j++)
				file >> field[i][j];
		for (int i = 0; i < 12; i++)
			for (int j = 0; j < 12; j++)
				file >> fieldPC[i][j];
		file.close();

		system("cls");
		printField();

		attack(player);
		if (cntPC <= 0 || cnt <= 0)
			flag = false;
	}
}

void Field::attack(int player)
{
	int x, y, flag = 0;

	while (flag != 1)
	{
		if (cntPC <= 0 || cnt <= 0)
			flag = 1;

		printField();

		cin >> x >> y;
		while (x < 0 || y < 0 || x > 11 || y > 11)
			cin >> x >> y;

		if (fieldPC[x][y] == EMPTY)
			flag = 1;

		if (fieldPC[x][y] == SHIP)
			--cntPC;

		shoot(x, y, fieldPC);
		////////
/*
		ofstream fout(dir + "\\" + to_string(player) + ".txt");
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				fout << fieldPC[i][j];
				fout << " ";
			}
		}
		fout << endl;
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				fout << field[i][j];
				fout << " ";
			}
		}
		fout.close();*/
		///////////

		if (cntPC <= 0 || cnt <= 0)
			flag = 1;
	}
	///////////////
	// Записать двумерный вектор в файл.
	ofstream fout(dir + "\\" + to_string(player) + ".txt");
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			fout << fieldPC[i][j];
			fout << " ";
		}
	}
	fout << endl;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			fout << field[i][j];
			fout << " ";
		}
	}
	fout.close();

	if (player == 1)
	{
		string rename = "ren " + dir + "\\1.txt 2.txt";
		system(rename.c_str());
	}
	else {
		string rename = "ren " + dir + "\\2.txt 1.txt";
		system(rename.c_str());
	}
}

void Field::yourMap() const
{
	system("cls");
	std::cout << "\n";
	DarkGray;
	std::cout << "\t\tYour map:\n"
		"\t\t\t\t\t    1  2  3  4  5  6  7  8  9  10\n";
	std::cout << "\t\t\t\t\t  _______________________________";
	for (int i = 1; i < field.size() - 1; i++)
	{

		std::cout << "\n\t\t\t\t\t";
		for (int j = 1; j < field.size() - 1; j++)
		{

			// Вывод разметки полей.
			DarkGray;

			if (i == 1 && j == 1) std::cout << " 1|";
			else if (i == 2 && j == 1) std::cout << " 2|";
			else if (i == 3 && j == 1) std::cout << " 3|";
			else if (i == 4 && j == 1) std::cout << " 4|";
			else if (i == 5 && j == 1) std::cout << " 5|";
			else if (i == 6 && j == 1) std::cout << " 6|";
			else if (i == 7 && j == 1) std::cout << " 7|";
			else if (i == 8 && j == 1) std::cout << " 8|";
			else if (i == 9 && j == 1) std::cout << " 9|";
			else if (i == 10 && j == 1) std::cout << "10|";

			if (field[i][j] == EMPTY)
			{
				LightCyan;
				std::cout << " ~ ";
				DarkGray;
			}
			else if (field[i][j] == HIT)
			{
				LightRedONBlue;
				std::cout << " x ";
				DarkGray;
			}
			else if (field[i][j] == KILL)
			{
				LightRedONRed;
				std::cout << " X ";
				DarkGray;
			}
			else if (field[i][j] == MISS)
			{
				LightGreen;
				std::cout << " o ";
			}
			else
			{
				BlackONLBlue;
				std::cout << " 1 ";
				DarkGray;
			}
		}
	}
	DarkGray;

	std::cout << endl << endl;
	PCMap();
}

void Field::PCMap() const
{
	//system("cls");
	std::cout << "\n";
	DarkGray;
	std::cout << "\t\tOpponent map:\n"
		"\t\t\t\t\t    1  2  3  4  5  6  7  8  9  10\n";
	std::cout << "\t\t\t\t\t  _______________________________";
	for (int i = 1; i < fieldPC.size() - 1; i++)
	{

		std::cout << "\n\t\t\t\t\t";
		for (int j = 1; j < fieldPC.size() - 1; j++)
		{

			// Вывод разметки полей.
			DarkGray;

			if (i == 1 && j == 1) std::cout << " 1|";
			else if (i == 2 && j == 1) std::cout << " 2|";
			else if (i == 3 && j == 1) std::cout << " 3|";
			else if (i == 4 && j == 1) std::cout << " 4|";
			else if (i == 5 && j == 1) std::cout << " 5|";
			else if (i == 6 && j == 1) std::cout << " 6|";
			else if (i == 7 && j == 1) std::cout << " 7|";
			else if (i == 8 && j == 1) std::cout << " 8|";
			else if (i == 9 && j == 1) std::cout << " 9|";
			else if (i == 10 && j == 1) std::cout << "10|";

			if (fieldPC[i][j] == EMPTY || fieldPC[i][j] == SHIP)
			{
				LightCyan;
				std::cout << " ~ ";
				DarkGray;
			}
			else if (fieldPC[i][j] == HIT)
			{
				LightRedONBlue;
				std::cout << " x ";
				DarkGray;
			}
			else if (fieldPC[i][j] == KILL)
			{
				LightRedONRed;
				std::cout << " X ";
				DarkGray;
			}
			else if (fieldPC[i][j] == MISS)
			{
				LightGreen;
				std::cout << " o ";
			}
		}
	}
	DarkGray;

	std::cout << endl << endl;
}

bool Field::check(int x, int y, vector<vector<int>>& field) const
{
	if (x == 0 || y == 0 || x == 11 || y == 11)
		return false;
	for (int i = x - 1; i < x + 2; i++)
		for (int j = y - 1; j < y + 2; j++)
			if (field[i][j] != 0)
				return false;
	return true;
}

bool Field::addShip(ship s, vector<vector<int>>& field)
{
	//srand(time(0));
	int x = rand() % 10 + 1;
	int y = rand() % 10 + 1;

	bool direction = rand() % 2;

	for (int i = 0; i < s; i++)
	{
		if (direction) {
			if (!check(x + i, y, field))
				return false;
		}
		else if (!check(x, y + i, field))
			return false;
	}

	for (int i = 0; i < s; i++)
	{
		if (direction)
			field[x + i][y] = 1;
		else
			field[x][y + i] = 1;
	}
	return true;
}

void Field::generation()
{
	// My map.
	while (!addShip(FOUR, field));
	for (int i = 0; i < 2; i++)
		while (!addShip(THREE, field));
	for (int i = 0; i < 3; i++)
		while (!addShip(TWO, field));
	for (int i = 0; i < 4; i++)
		while (!addShip(ONE, field));

	// PC map, player 2 map.
	while (!addShip(FOUR, fieldPC));
	for (int i = 0; i < 2; i++)
		while (!addShip(THREE, fieldPC));
	for (int i = 0; i < 3; i++)
		while (!addShip(TWO, fieldPC));
	for (int i = 0; i < 4; i++)
		while (!addShip(ONE, fieldPC));
}

void Field::printField() const
{
	yourMap();
}

bool Field::isKilled(int x, int y, vector<vector<int>>& field) const
{
	if (field[x + 1][y] == SHIP ||
		field[x - 1][y] == SHIP ||
		field[x][y + 1] == SHIP ||
		field[x][y - 1] == SHIP)
		return false;

	if (field[x - 1][y] == HIT ||
		field[x + 1][y] == HIT)
	{
		// Пробежаться до крайней ячейки корабля.
		while (field[x - 1][y] != MISS &&
			field[x - 1][y] != EMPTY)
			--x;

		// Проверять все ячейки корабля
		while (field[x][y] != MISS &&
			field[x][y] != EMPTY)
		{
			if (field[x][y] == SHIP ||
				field[x - 1][y] == SHIP ||
				field[x + 1][y] == SHIP
				)
				return false;

			++x;
		}
	}

	if (field[x][y - 1] == HIT ||
		field[x][y + 1] == HIT)
	{
		// Пробежаться до крайней ячейки корабля.
		while ((field[x][y - 1] != MISS &&
			field[x][y - 1] != EMPTY))
			--y;

		// Проверять все ячейки корабля
		while (field[x][y] != MISS &&
			field[x][y] != EMPTY)
		{
			if (field[x][y] == SHIP ||
				field[x][y - 1] == SHIP ||
				field[x][y + 1] == SHIP)
				return false;

			++y;
		}
	}

	return true;
}

void Field::shoot(int x, int y, vector<vector<int>>& field)
{
	if (field[x][y] == EMPTY)
		field[x][y] = MISS;
	if (field[x][y] == SHIP ||
		field[x][y] == HIT)
	{
		field[x][y] = HIT;
		if (isKilled(x, y, field))
		{
			field[x][y] = KILL;
			fillKilledShip(x, y, field);
		}
		//return true;
	}
	return;
}

void Field::fillKilledShip(int x, int y, vector<vector<int>>& field)
{
	// Сокращения. Работает только когда не нужно двигаться
	// Ячейка выше.
	int u = field[x - 1][y];
	// Ячейка ниже.
	int d = field[x + 1][y];
	// Ячейка справа.
	int r = field[x][y + 1];
	// Ячейка слева.
	int l = field[x][y - 1];
	// Текущая ячейка.
	int c = field[x][y];

	// Окружить одну ячейку.
	if ((d == EMPTY ||
		d == MISS)
		&&
		(u == EMPTY ||
			u == MISS)
		&&
		(r == EMPTY ||
			r == MISS)
		&&
		(l == EMPTY ||
			l == MISS))
	{
		for (int i = x - 1; i < x + 2; i++)
		{
			for (int j = y - 1; j < y + 2; j++)
			{
				if (field[i][j] == HIT ||
					field[i][j] == KILL)
					continue;

				field[i][j] = MISS;
			}
		}
	}

	// Левая сторона или правая.
	if (r == HIT ||
		l == HIT)
	{
		// Добежать до крайней ячейки корабля.
		while (field[x][y - 1] != EMPTY &&
			field[x][y - 1] != MISS)
			--y;

		// Заполнять все пространство вокрук корабля, "промохами".
		while (field[x][y] != EMPTY &&
			field[x][y] != MISS)
		{
			for (int i = x - 1; i < x + 2; i++)
			{
				for (int j = y - 1; j < y + 2; j++)
				{
					if (field[i][j] == HIT)
						field[i][j] = KILL;
					else if (field[i][j] == KILL);
					else
						field[i][j] = MISS;
				}
			}
			++y;
		}
	}

	// Верх или низ.
	if (u == HIT ||
		d == HIT)
	{
		// Добежать до крайней ячейки корабля.
		while (field[x - 1][y] != EMPTY &&
			field[x - 1][y] != MISS)
			--x;

		// Заполнять все пространство вокрук корабля, "промохами".
		while (field[x][y] != EMPTY &&
			field[x][y] != MISS)
		{
			for (int i = x - 1; i < x + 2; i++)
			{
				for (int j = y - 1; j < y + 2; j++)
				{
					if (field[i][j] == HIT)
						field[i][j] = KILL;
					else if (field[i][j] == KILL);
					else
						field[i][j] = MISS;
				}
			}
			++x;
		}
	}
	return;
}