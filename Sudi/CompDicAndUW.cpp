// Сравнить словарь и уникальные слова

#include <iostream>
#include <fstream> //ifstream ofstream
#include <algorithm> //transform , sort
#include <cctype> //tolower 
#include <string>
#include <vector>
// #include <iomanip> // hz why
using namespace std;

int main()
{
	ifstream f1;
	ifstream f2;
	ofstream fout;
	//Путь к файлу
	string f1_path_in = "TempFiles\\misfits3s2e.srt";
	string f1_path_out = "ForStudying\\misfits3s2e.srt";
	string f2_path = "dic.txt";

	//Открыть файл который нужно отредактировать
	f1.open(f1_path_in.substr(0, f1_path_in.size() - 4) + "OUT.txt");
	// f1.open("misfits3s2eOUT.txt");
	f2.open(f2_path);
	//Создать выходной файл
	fout.open(f1_path_out.substr(0, f1_path_out.size() - 4) + "WordsForStudying.txt");

	string str;
	vector<string> vec_str1;
	vector<string> vec_str2;

	//отсортированные субтитры
	while(f1 >> str)
	{
		vec_str1.push_back(str);
		vec_str1.push_back("\n");
	}

	//словарь
	while(f2 >> str)
	{
		vec_str2.push_back(str);
		vec_str2.push_back("\n");
	}

  //Сравнить файлы
	for (int i = 0; i < vec_str1.size(); ++i)
	{
		for (int j = 0; j < vec_str2.size(); ++j)
		{
			if (vec_str1[i] == vec_str2[j])
			{
				vec_str1[i].erase(vec_str1[i].begin(), vec_str1[i].end());
				--i;
				continue;
			}
		}
	}

	//Сортировать массив
	sort (vec_str1.begin(), vec_str1.end());

	//Вывести в файл
	for (int i = 0; i < vec_str1.size(); ++i)
	{
		//не выводить пустые строки
		if (vec_str1[i].size() > 1)
		{
			fout << vec_str1[i] << endl;
		}
	}

	f1.close();
	f2.close();
	fout.close();

	// system("pause");
}