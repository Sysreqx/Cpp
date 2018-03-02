/*// Достает уникальные слова с файла

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
	ofstream fout;
*/

	//Открыть файл который нужно отредактировать
	f1.open(f1_path1);
	//Создать выходной файл
	fout.open(f1_path2.substr(0, f1_path2.size() - 4) + "OUT.txt");

	string str_unic_words1;
	vector<string> vec_str_unic_words1;

	//Закинуть слово в вектор
	while(f1 >> str_unic_words1)
	{
		// Привести все к нижнему регистру
		for (int k = 0; k < str_unic_words1.size(); ++k)
		{
			str_unic_words1[k] = tolower(str_unic_words1[k]);
		}
		vec_str_unic_words1.push_back(str_unic_words1);
		vec_str_unic_words1.push_back("\n");
	}

	//Сортировать массив
	sort (vec_str_unic_words1.begin(), vec_str_unic_words1.end());

	  //Удалить одинаковые слова
	for (int i = 0; i < vec_str_unic_words1.size(); ++i)
	{
		for (int j = i + 1; j < vec_str_unic_words1.size(); ++j)
		{
			if (vec_str_unic_words1[i] == vec_str_unic_words1[j])
			{
				vec_str_unic_words1.erase(vec_str_unic_words1.begin() + j);
				--j;
			}
		}
	}

	//Вывести в файл
	for (int i = 0; i < vec_str_unic_words1.size(); ++i)
	{
		//не выводить пустые строки
		if (vec_str_unic_words1[i].size() > 1)
		{
			fout << vec_str_unic_words1[i] << endl;
		}
	}

	f1.close();
	fout.close();

	// system("pause");
/*}*/