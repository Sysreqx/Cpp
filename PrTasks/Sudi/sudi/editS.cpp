// Сравнить словарь и уникальные слова

#include <iostream>
#include <iterator>
#include <fstream>		//ifstream ofstream
#include <algorithm>	//transform , sort
#include <cctype>		//tolower 
#include <string>
#include <vector>
#include <set>

using namespace std;

int main()
{
	// Сюда вставить название сабтитров
	//string path1 = "The Vampire Diaries - 04x02 Memorial.srt";
	string path1 = "Introduction.txt";
	string path2 = "dic.txt";
	string path3 = path1.substr(0, path1.size() - 4) + "WordsForStudying.txt";

	ifstream f1;
	ifstream f2;
	ofstream fout;

	f1.open(path1);
	fout.open(path1.substr(0, path1.size() - 4) + "(edit).srt");

	string str_editS1;
	char ch_editS1;
	set<string> set_str_editS1;

	// Закинуть символы только если это буквы или пробел.
	while (f1.get(ch_editS1))
	{
		if ((ch_editS1 >= 65 && ch_editS1 <= 90) || (ch_editS1 >= 97 && ch_editS1 <= 122) || ch_editS1 == 32 || ch_editS1 == 39 || ch_editS1 == 10)
		{
			str_editS1 += (char)tolower(ch_editS1);
			if (ch_editS1 == 10)
			{
				ch_editS1 = 32;
			}
			if (ch_editS1 == 32)
			{
				set_str_editS1.insert(str_editS1);
				str_editS1 = "";
			}
		}
	}

	//Вывести в файл
	for (auto i : set_str_editS1)
		if (i.size() > 2)
			fout << i << endl;

	f1.close();
	f2.close();
	fout.close();

	//Открыть файл который нужно отредактировать
	f1.open(path1.substr(0, path1.size() - 4) + "(edit).srt");
	f2.open(path2);
	//Создать выходной файл
	fout.open(path1.substr(0, path1.size() - 4) + "WordsForStudying.txt");

	string str_comp_dic_and_w1;
	vector<string> vec_str_comp_dic_and_w1;
	vector<string> vec_str_comp_dic_and_w2;

	//отсортированные субтитры
	while (f1 >> str_comp_dic_and_w1)
	{
		vec_str_comp_dic_and_w1.push_back(str_comp_dic_and_w1);
		vec_str_comp_dic_and_w1.push_back("\n");
	}

	//словарь
	while (f2 >> str_comp_dic_and_w1)
	{
		vec_str_comp_dic_and_w2.push_back(str_comp_dic_and_w1);
		vec_str_comp_dic_and_w2.push_back("\n");
	}

	//Сравнить файлы
	for (int i = 0; i < vec_str_comp_dic_and_w1.size(); ++i)
		for (int j = 0; j < vec_str_comp_dic_and_w2.size(); ++j)
			if (vec_str_comp_dic_and_w1[i] == vec_str_comp_dic_and_w2[j])
			{
				vec_str_comp_dic_and_w1[i].erase(vec_str_comp_dic_and_w1[i].begin(), vec_str_comp_dic_and_w1[i].end());
				if (i != 0)
					--i;
				continue;
			}

	set_str_editS1.clear();
	set_str_editS1.insert(vec_str_comp_dic_and_w1.begin(), vec_str_comp_dic_and_w1.end());

	//Вывести в файл
	for (auto i : set_str_editS1)
		if (i.size() > 1)
			fout << i << endl;

	f1.close();
	f2.close();
	fout.close();

	// запустить программу дальше
	cout << "Translate words\n" <<
		"and enter \"n\" to continue...\n";
	char n;
	cin >> n;
	while (n != 'n')
		cin >> n;
	// запустить программу дальше

	// comEnRu

	//Открыть файл который нужно отредактировать
	f1.open(path3);
	f2.open(path3.substr(0, path3.size() - 4) + ".en.ru.txt");

	//Создать выходной файл
	fout.open(path3.substr(0, path3.size() - 4) + "EnRu.txt");

	string str_com_en_ru;
	vector<string> vec_str_com_en_ru1;
	vector<string> vec_str_com_en_ru2;

	//английский
	while (!f1.eof())
	{
		getline(f1, str_com_en_ru);
		// ToLower
		std::transform(str_com_en_ru.begin(), str_com_en_ru.end(), str_com_en_ru.begin(), ::tolower);
		vec_str_com_en_ru1.push_back(str_com_en_ru);
		vec_str_com_en_ru1.push_back("\n");
	}

	//русский
	while (!f2.eof())
	{
		getline(f2, str_com_en_ru);
		// ToLower
		std::transform(str_com_en_ru.begin(), str_com_en_ru.end(), str_com_en_ru.begin(), ::tolower);
		vec_str_com_en_ru2.push_back(str_com_en_ru);
		vec_str_com_en_ru2.push_back("\n");
	}

	for (int i = 0; i < vec_str_com_en_ru1.size(); ++i)
	{
		if (vec_str_com_en_ru1[i].size() > 2 &&
			(vec_str_com_en_ru1[i] != vec_str_com_en_ru2[i]))
			fout << vec_str_com_en_ru1[i] << "-" << vec_str_com_en_ru2[i] << endl;
	}

	f1.close();
	f2.close();
	fout.close();

	// Записать новые слова в словарь
	fout.open("dic.txt", ios::app);

	for (auto i : set_str_editS1)
		if (i.size() > 1)
			fout << i << endl;
	fout.close();

	return 0;
}