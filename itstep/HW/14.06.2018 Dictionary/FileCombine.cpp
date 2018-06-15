#include "FileCombine.h"

void FileCombine::FileCombineFunc(string fileName = "Dictionary.txt")
{
	ifstream f1;
	ifstream f2;
	ofstream fout;
	//string fileName = "Dictionary.txt";

	//Открыть файл который нужно отредактировать
	f1.open(fileName);
	f2.open(fileName.substr(0, fileName.size() - 4) + ".en.ru.txt");
	// f1.open("misfits3s2eOUT.txt");
	//Создать выходной файл
	fout.open(fileName.substr(0, fileName.size() - 4) + "EnRu.txt");

	string str_com_en_ru;
	vector<string> vec_str_com_en_ru1;
	vector<string> vec_str_com_en_ru2;

	//английский
	while (!f1.eof())
	{
		getline(f1, str_com_en_ru);
		vec_str_com_en_ru1.push_back(str_com_en_ru);
		vec_str_com_en_ru1.push_back("\n");
	}

	//русский
	while (!f2.eof())
	{
		getline(f2, str_com_en_ru);
		vec_str_com_en_ru2.push_back(str_com_en_ru);
		vec_str_com_en_ru2.push_back("\n");
	}

	for (int i = 0; i < vec_str_com_en_ru1.size(); ++i)
	{
		if (vec_str_com_en_ru1[i].size() > 1 && vec_str_com_en_ru2[i].size() > 1)
		{
			fout << vec_str_com_en_ru1[i] << " - " << vec_str_com_en_ru2[i] << endl;
		}
	}

	f1.close();
	f2.close();
	fout.close();
}

void FileCombine::addToMap(map<string, string>& m)
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);
	ifstream f("DictionaryEnRu.txt");
	string s1, s2, s;
	while (!f.eof())
	{
		s1.clear();
		s2.clear();
		getline(f, s);
		for (int i = 0; i < s.size(); i++)
		{
			if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || s[i] == '\'')
				s1.push_back(s[i]);
			else
			{
				if (s[i] != ';')
					s2.push_back(s[i]);
			}
		}
		m.insert(make_pair(s1, s2));
	}
	f.close();
}
