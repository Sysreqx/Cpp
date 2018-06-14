#include "Interface.h"

void Interface::header(map<string, string>& m, int exitz = 9)
{
	system("cls");
	cout << "\n\t\t\t\t------------" << endl <<
		"\t\t1. Перевести слово с английского на русский" << endl
		<< "\t\t2. Перевести слово с русского на английский" << endl;

	cout << "\t\t\t\t------------" << endl <<
		"\t\t1. Translate word from English to Russian" << endl
		<< "\t\t2. Translate word from Russian to English" << endl;
	if (exitz == 7)
		exit(1);
}

int Interface::enterWordEnglish(map<string, string>& m)
{
	int i;
	system("cls");
	cout << "\n\t\tВведите слово на английском" << endl <<
		"\t\tEnter word in English" << endl;
	string s;
	cin >> s;
	bool t = true;
	for (auto l : m)
	{
		if (l.first == s)
		{
			cout << l.first << "  -  " << l.second << endl;
			t = false;
			//return 1;
			Sleep(3000);
		}
	}

	while (t)
	{
		cout << "\n\t\tСлово не найдено" << endl
			<< "\t\t1. Ввести слово еще раз" << endl
			<< "\t\t2. Выйти из программы" << endl
			<< "\t\t3. Вернуться в меню" << endl << endl
			<< "\t\tWord not found" << endl
			<< "\t\t1. Try another one" << endl
			<< "\t\t2. Exit" << endl
			<< "\t\t3. Main menu" << endl;
		cin >> i;
		if (i == 1)
		{
			cin >> s;
			for (auto l : m)
			{
				if (l.first == s)
				{
					cout << l.first << "  -  " << l.second << endl;
					t = false;
					//return 1;
					Sleep(3000);
				}
			}
		}
		if (i == 2)
		{
			exit(1);
		}
		else
			dicInterface(m);
	}
	dicInterface(m);
}

int Interface::enterWordRussian(map<string, string>& m)
{
	int i;
	system("cls");
	cout << "\n\t\tВведите слово на русском" << endl <<
		"\t\tEnter word in Russian" << endl;
	string s;
	cin >> s;
	bool t = true;
	for (auto l : m)
	{
		if (l.second == s)
		{
			cout << l.second << "  -  " << l.first << endl;
			t = false;
			//return 1;
			Sleep(3000);
		}
	}

	while (t)
	{
		cout << "\n\t\tСлово не найдено" << endl
			<< "\t\t1. Ввести слово еще раз" << endl
			<< "\t\t2. Выйти из программы" << endl
			<< "\t\t3. Вернуться в меню" << endl << endl
			<< "\t\tWord not found" << endl
			<< "\t\t1. Try another one" << endl
			<< "\t\t2. Exit" << endl
			<< "\t\t3. Main menu" << endl;
		cin >> i;
		if (i == 1)
		{
			cin >> s;
			for (auto l : m)
			{
				if (l.second == s)
				{
					cout << l.second << "  -  " << l.first << endl;
					t = false;
					//return 1;
					Sleep(3000);
				}
			}
		}
		if (i == 2)
		{
			exit(1);
		}
		else
			dicInterface(m);
	}
	dicInterface(m);
}

void Interface::dicInterface(map<string, string>& m)
{
	header(m);
	int n;
	cin >> n;
	if (n == 1)
		enterWordEnglish(m);
	else enterWordRussian(m);
}
