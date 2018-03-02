// Сравнить словарь и уникальные слова

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

	//Открыть файл который нужно отредактировать
	f1.open(f1_path_editS);
	//Создать выходной файл
	fout.open(f1_path_editS.substr(0, f1_path_editS.size() - 4) + "(edit).srt");

	string str_editS1;
	char ch_editS1;
	vector<string> vec_str_editS1;

  //Закинуть символы только если это буквы или пробел
	while(f1.get(ch_editS1))
	{
		if ((ch_editS1 >= 65 && ch_editS1 <= 90) || (ch_editS1 >= 97 && ch_editS1 <= 122) || ch_editS1 == 32 || ch_editS1 == 39 || ch_editS1 == 10)
		{
			str_editS1 += ch_editS1;
			if (ch_editS1 == 10)
			{
				ch_editS1 = 32;
			}
			if (ch_editS1 == 32)
			{
				vec_str_editS1.push_back(str_editS1);
				str_editS1 = "";
			}
		}
	}

	//Сортировать массив
	sort (vec_str_editS1.begin(), vec_str_editS1.end());

	//Вывести в файл
	for (int i = 0; i < vec_str_editS1.size(); ++i)
	{
		//не выводить пустые строки
		if (vec_str_editS1[i].size() > 1)
		{
			fout << vec_str_editS1[i] << endl;
		}
	}

	f1.close();
	f2.close();
	fout.close();

	#include "UnicWords.cpp" // подтянуть file
	#include "CompDicAndUW.cpp" // подтянуть file

	// system("pause");
}