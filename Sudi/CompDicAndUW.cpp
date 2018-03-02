/*// Сравнить словарь и уникальные слова

#include <iostream>
#include <fstream> //ifstream ofstream
#include <algorithm> //transform , sort
#include <cctype> //tolower 
#include <string>
#include <vector>
// #include <iomanip> // hz why
using namespace std;
#include "path.cpp" // подтянуть переменные

int main()
{
	ifstream f1;
	ifstream f2;
	ofstream fout;
	*/

	//Открыть файл который нужно отредактировать
	f1.open(f1_path2.substr(0, f1_path2.size() - 4) + "OUT.txt");
	// f1.open("misfits3s2eOUT.txt");
	f2.open(f2_path1);
	//Создать выходной файл
	fout.open(f1_path3.substr(0, f1_path3.size() - 4) + "WordsForStudying.txt");

	string str_comp_dic_and_w1;
	vector<string> vec_str_comp_dic_and_w1;
	vector<string> vec_str_comp_dic_and_w2;

	//отсортированные субтитры
	while(f1 >> str_comp_dic_and_w1)
	{
		vec_str_comp_dic_and_w1.push_back(str_comp_dic_and_w1);
		vec_str_comp_dic_and_w1.push_back("\n");
	}

	//словарь
	while(f2 >> str_comp_dic_and_w1)
	{
		vec_str_comp_dic_and_w2.push_back(str_comp_dic_and_w1);
		vec_str_comp_dic_and_w2.push_back("\n");
	}

  //Сравнить файлы
	for (int i = 0; i < vec_str_comp_dic_and_w1.size(); ++i)
	{
		for (int j = 0; j < vec_str_comp_dic_and_w2.size(); ++j)
		{
			if (vec_str_comp_dic_and_w1[i] == vec_str_comp_dic_and_w2[j])
			{
				vec_str_comp_dic_and_w1[i].erase(vec_str_comp_dic_and_w1[i].begin(), vec_str_comp_dic_and_w1[i].end());
				--i;
				continue;
			}
		}
	}

	//Сортировать массив
	sort (vec_str_comp_dic_and_w1.begin(), vec_str_comp_dic_and_w1.end());

	//Вывести в файл
	for (int i = 0; i < vec_str_comp_dic_and_w1.size(); ++i)
	{
		//не выводить пустые строки
		if (vec_str_comp_dic_and_w1[i].size() > 1)
		{
			fout << vec_str_comp_dic_and_w1[i] << endl;
		}
	}

	f1.close();
	f2.close();
	fout.close();

	// system("pause");
/*}*/