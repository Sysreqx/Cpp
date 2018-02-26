// Достает уникальные слова с файла

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
	ofstream fout;
	//Путь к файлу
	string f1_path = "misfits3s2e.srt";

	//Открыть файл который нужно отредактировать
	f1.open(f1_path);
	//Создать выходной файл
	fout.open(f1_path.substr(0, f1_path.size() - 4) + "OUT.txt");

	string str;
	char ch;
	vector<string> vec_str;
	vector<string> vec_ch;

	// while(f1 >> ch)
	// {
	// 	if (str[i] >= 0 && str[i] < 32 || str[i] > 32 && str[i] < 65 || str[i] > 90 && str[i] < 97 || str[i] > 122 && str[i] < 256)
	// 	{
	// 		/* code */
	// 	}
	// }

	//Закинуть слово в вектор
	while(f1 >> str)
	{
		// Привести все к нижнему регистру
		for (int k = 0; k < str.size(); ++k)
		{
			str[k] = tolower(str[k]);
		}
		vec_str.push_back(str);
		vec_str.push_back("\n");
	}

  //Удалить одинаковые слова
	for (int i = 0; i < vec_str.size(); ++i)
	{
		for (int j = i + 1; j < vec_str.size(); ++j)
		{
			if (vec_str[i] == vec_str[j])
			{
				vec_str.erase(vec_str.begin() + j);
			}
		}
	}

	//Сортировать массив
	sort (vec_str.begin(), vec_str.end());

	  //Удалить одинаковые слова
	for (int i = 0; i < vec_str.size(); ++i)
	{
		for (int j = i + 1; j < vec_str.size(); ++j)
		{
			if (vec_str[i] == vec_str[j])
			{
				vec_str.erase(vec_str.begin() + j);
			}
		}
	}

	//Вывести в файл
	for (int i = 0; i < vec_str.size(); ++i)
	{
		fout << vec_str[i] << endl;
	}

	f1.close();
	fout.close();

	// system("pause");
}