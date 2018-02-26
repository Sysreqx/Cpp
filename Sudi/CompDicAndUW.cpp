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
	string f1_path = "misfits3s2e.srt";
	string f2_path = "dict.txt";

	//Открыть файл который нужно отредактировать
	// f1.open(f1_path.substr(0, f1_path.size() - 4) + "OUT.txt");
	f1.open("misfits3s2eOUT.txt");
	f2.open(f2_path);
	//Создать выходной файл
	fout.open(f1_path.substr(0, f1_path.size() - 4) + "WordsForStudying.txt");

	string str;
	vector<string> vec_str1;
	vector<string> vec_str2;

	//Закинуть слово в вектор
	while(f1 >> str)
	{
		// Привести все к нижнему регистру
		for (int k = 0; k < str.size(); ++k)
		{
			str[k] = tolower(str[k]);
		}
		vec_str1.push_back(str);
		vec_str1.push_back("\n");
	}

	//Закинуть слово в вектор
	while(f2 >> str)
	{
		// Привести все к нижнему регистру
		for (int k = 0; k < str.size(); ++k)
		{
			str[k] = tolower(str[k]);
		}
		vec_str2.push_back(str);
		vec_str2.push_back("\n");
	}

  //Сравнить файлы
	for (int i = 0; i < vec_str1.size(); ++i)
	{
		for (int j = 0; j < vec_str2.size(); ++j)
		{
			if (vec_str2[i] == vec_str1[j])
			{
				vec_str2.erase(vec_str2.begin() + i);
				continue;
			}
		}
	}

	//Сортировать массив
	sort (vec_str2.begin(), vec_str2.end());

	//Вывести в файл
	for (int i = 0; i < vec_str2.size(); ++i)
	{
		fout << vec_str2[i] << endl;
	}

	f1.close();
	f2.close();
	fout.close();

	// system("pause");
}