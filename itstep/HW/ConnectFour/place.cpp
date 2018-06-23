#include "place.h"

void SetColor(int f, int b)
{
	unsigned short ForeColor = f + 16 * b;
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, ForeColor);
}

#define Green SetColor(2, 0)
#define Yellow SetColor(14, 0)
#define LightRed SetColor(12, 0)
#define DarkGray SetColor(8, 0)

place::place(string dir) : matrix(6)
{
	this->dir = dir;
	generate_n(matrix.begin(), 6, []()
	{
		return vector<int>(7, 0);
	});
}

void place::game(int id, int player)
{
	bool flag = false;
	int p = 1;
	print();
	cout << "Player " << p << " turn\n";
	while (!flag)
	{
		if (player == 3)
			player = 1;

		cin >> id;
		if (id < 1 || id > 7)
			cin >> id;

		push(id - 1, player);
		++player;

		print();
		p = player - 1;
		cout << "Player " << p % 2 + 1 << " turn\n";
		flag = check();
	}

	if (p == 2)
		LightRed;
	if (p == 1)
		Green;

	cout << endl << "Player " << p << " won" << endl;
}

void place::multiplayer(int player)
{
	bool flag2 = true;
	bool flag = false;
	int id = 0;
	while (!flag)
	{
		print();
		fstream file(dir + "\\" + to_string(player) + ".txt", ios::in);
		if (!file.is_open())
			cout << "Player " << player % 2 + 1 << " turn\n";
		// Открывает файл.
		while (file.fail())
		{
			file.open(dir + "\\" + to_string(player) + ".txt", ios::in);
			Sleep(1000);
		}
		file >> id;
		if (id >= 1 && id <= 7)
			push(id - 1, player % 2 + 1);

		flag = check();

		if (flag)
		{

			ofstream fout(dir + "\\" + to_string(player % 2 + 1) + ".txt", ios::out);
			fout << id;
			fout.close();

			print();

			if (player == 2)
				Green;
			if (player == 1)
				LightRed;

			cout << endl << "Player " << player % 2 + 1 << " won" << endl;
			flag2 = false;
			break;
		}

		print();
		// Вводит ячейку для хода.
		cin >> id;
		if (id < 1 || id > 7)
			cin >> id;


		// Ставит фишку в эту ячейку
		push(id - 1, player);

		// Выводит.
		print();
		cout << "Player " << player % 2 + 1 << " turn\n";
		flag = check();

		file.close();

		ofstream fout(dir + "\\" + to_string(player) + ".txt", ios::out);
		fout << id;
		fout.close();

		// Переименовывает.
		if (player == 1)
		{
			string rename = "ren \"" + dir + "\\" + "1.txt\" " + "2.txt";
			system(rename.c_str());
		}
		else {
			string rename = "ren \"" + dir + "\\" + "2.txt\" " + "1.txt";
			system(rename.c_str());
		}

	}

	if (flag && flag2)
	{
		if (player == 2)
			LightRed;
		if (player == 1)
			Green;

		ofstream fout(dir + "\\" + to_string(player) + ".txt", ios::out);
		fout << id;
		fout.close();

		cout << endl << "Player " << player << " won" << endl;
	}
}

void place::print()
{
	DarkGray;
	system("cls");
	std::cout << "\n" <<
		"    1    2    3    4    5    6    7\n";
	int cnt = 1;
	for (auto i : matrix)
	{
		cout << cnt << " ";
		++cnt;
		for (auto j : i)
		{
			if (j == 1)
			{
				Yellow;
				std::cout << "|";
				Green;
				cout << " Q ";
				Yellow;
				std::cout << "|";
				DarkGray;
			}
			else if (j == 2)
			{
				Yellow;
				std::cout << "|";
				LightRed;
				cout << " O ";
				Yellow;
				std::cout << "|";
				DarkGray;
			}
			else
			{
				Yellow;
				std::cout << "|   |";
				DarkGray;
			}
		}
		cout << endl;
	}
}

void place::push(int id, int player)
{
	int bufId = -1;
	for_each(matrix.begin(), matrix.end(), [player, &id, &bufId](vector<int> &v)
	{
		if (v[id] == 0)
			bufId++;
	});
	if (bufId >= 0 && bufId < matrix.size() && id >= 0 && id < matrix[0].size())
	{
		matrix[bufId][id] = player;
		++c;
	}
	else
	{/*
		int t = id;
		while (t == id)
			cin >> t;
		push(t - 1, player);*/
	}

}

bool place::check()
{
	vector<int> buffVP1 = { 1,1,1,1 };
	vector<int> buffVP2 = { 2,2,2,2 };

	bool p1 = false, p2 = false;
	// Gorizontal.
	for_each(matrix.begin(), matrix.end(), [&buffVP1, &buffVP2, &p1, &p2](vector<int> &v)
	{
		auto it = find_end(begin(v), end(v), begin(buffVP1), end(buffVP1));
		if (it != end(v))
			p1 = true;
		it = find_end(begin(v), end(v), begin(buffVP2), end(buffVP2));
		if (it != end(v))
			p2 = true;
	});
	if (p1 == true || p2 == true)
		return true;

	// Vertical.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			// 1
			if (matrix[i][j] == matrix[i + 1][j] &&
				matrix[i][j] == matrix[i + 2][j] &&
				matrix[i][j] == matrix[i + 3][j] &&
				matrix[i][j] == 1)
				p1 = true;
			// 2
			if (matrix[i][j] == matrix[i + 1][j] &&
				matrix[i][j] == matrix[i + 2][j] &&
				matrix[i][j] == matrix[i + 3][j] &&
				matrix[i][j] == 2)
				p2 = true;

			if (p1 == true || p2 == true)
				return true;
		}
		if (p1 == true || p2 == true)
			return true;
	}

	// BEGIN Main Diagonal.
	vector<int> md1, md2, md3, md4, md5, md6;
	// Fill MD1
	int j = 0;
	for (int i = 2; i < 6; i++, j++)
		md1.push_back(matrix[i][j]);
	// Fill MD2
	j = 0;
	for (int i = 1; i < 6; i++, j++)
		md2.push_back(matrix[i][j]);
	// Fill MD3
	j = 0;
	for (int i = 0; i < 6; i++, j++)
		md3.push_back(matrix[i][j]);
	// Fill MD4
	j = 1;
	for (int i = 0; i < 6; i++, j++)
		md4.push_back(matrix[i][j]);
	// Fill MD5
	j = 2;
	for (int i = 0; i < 5; i++, j++)
		md5.push_back(matrix[i][j]);
	// Fill MD6
	j = 3;
	for (int i = 0; i < 4; i++, j++)
		md6.push_back(matrix[i][j]);

	// Check MD
	// MD1
	if (std::find_end(md1.begin(), md1.end(), buffVP1.begin(), buffVP1.end()) != md1.end())
		p1 = true;
	if (std::find_end(md1.begin(), md1.end(), buffVP2.begin(), buffVP2.end()) != md1.end())
		p2 = true;
	// MD2
	if (std::find_end(md2.begin(), md2.end(), buffVP1.begin(), buffVP1.end()) != md2.end())
		p1 = true;
	if (std::find_end(md2.begin(), md2.end(), buffVP2.begin(), buffVP2.end()) != md2.end())
		p2 = true;
	// MD3
	if (std::find_end(md3.begin(), md3.end(), buffVP1.begin(), buffVP1.end()) != md3.end())
		p1 = true;
	if (std::find_end(md3.begin(), md3.end(), buffVP2.begin(), buffVP2.end()) != md3.end())
		p2 = true;
	// MD4
	if (std::find_end(md4.begin(), md4.end(), buffVP1.begin(), buffVP1.end()) != md4.end())
		p1 = true;
	if (std::find_end(md4.begin(), md4.end(), buffVP2.begin(), buffVP2.end()) != md4.end())
		p2 = true;
	// MD5
	if (std::find_end(md5.begin(), md5.end(), buffVP1.begin(), buffVP1.end()) != md5.end())
		p1 = true;
	if (std::find_end(md5.begin(), md5.end(), buffVP2.begin(), buffVP2.end()) != md5.end())
		p2 = true;
	// MD6
	if (std::find_end(md6.begin(), md6.end(), buffVP1.begin(), buffVP1.end()) != md6.end())
		p1 = true;
	if (std::find_end(md6.begin(), md6.end(), buffVP2.begin(), buffVP2.end()) != md6.end())
		p2 = true;

	if (p1 == true || p2 == true)
		return true;
	// END Main Diagonal.

	// BEGIN Anti-Diagonal
	vector<int> ad1, ad2, ad3, ad4, ad5, ad6;

	// Fill AD1
	j = 3;
	for (int i = 0; i < 4; i++, j--)
		ad1.push_back(matrix[i][j]);
	// Fill AD2
	j = 4;
	for (int i = 0; i < 5; i++, j--)
		ad2.push_back(matrix[i][j]);
	// Fill AD3
	j = 5;
	for (int i = 0; i < 6; i++, j--)
		ad3.push_back(matrix[i][j]);
	// Fill AD4
	j = 6;
	for (int i = 0; i < 6; i++, j--)
		ad4.push_back(matrix[i][j]);
	// Fill AD5
	j = 6;
	for (int i = 1; i < 6; i++, j--)
		ad5.push_back(matrix[i][j]);
	// Fill AD6
	j = 6;
	for (int i = 2; i < 6; i++, j--)
		ad6.push_back(matrix[i][j]);

	// Check AD
	// AD1
	if (std::find_end(ad1.begin(), ad1.end(), buffVP1.begin(), buffVP1.end()) != ad1.end())
		p1 = true;
	if (std::find_end(ad1.begin(), ad1.end(), buffVP2.begin(), buffVP2.end()) != ad1.end())
		p2 = true;
	// AD2
	if (std::find_end(ad2.begin(), ad2.end(), buffVP1.begin(), buffVP1.end()) != ad2.end())
		p1 = true;
	if (std::find_end(ad2.begin(), ad2.end(), buffVP2.begin(), buffVP2.end()) != ad2.end())
		p2 = true;
	// AD3
	if (std::find_end(ad3.begin(), ad3.end(), buffVP1.begin(), buffVP1.end()) != ad3.end())
		p1 = true;
	if (std::find_end(ad3.begin(), ad3.end(), buffVP2.begin(), buffVP2.end()) != ad3.end())
		p2 = true;
	// AD4
	if (std::find_end(ad4.begin(), ad4.end(), buffVP1.begin(), buffVP1.end()) != ad4.end())
		p1 = true;
	if (std::find_end(ad4.begin(), ad4.end(), buffVP2.begin(), buffVP2.end()) != ad4.end())
		p2 = true;
	// AD5
	if (std::find_end(ad5.begin(), ad5.end(), buffVP1.begin(), buffVP1.end()) != ad5.end())
		p1 = true;
	if (std::find_end(ad5.begin(), ad5.end(), buffVP2.begin(), buffVP2.end()) != ad5.end())
		p2 = true;
	// AD6
	if (std::find_end(ad6.begin(), ad6.end(), buffVP1.begin(), buffVP1.end()) != ad6.end())
		p1 = true;
	if (std::find_end(ad6.begin(), ad6.end(), buffVP2.begin(), buffVP2.end()) != ad6.end())
		p2 = true;
	// END Anti-Diagonal
	if (p1 == true || p2 == true)
		return true;

	return false;
}