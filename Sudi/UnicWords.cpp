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
	string f1_path_in = "Subtitles\\misfits3s2e.srt";
	string f1_path_out = "TempFiles\\misfits3s2e.srt";

	//Открыть файл который нужно отредактировать
	f1.open(f1_path_in);
	//Создать выходной файл
	fout.open(f1_path_out.substr(0, f1_path_out.size() - 4) + "OUT.txt");

	string str;
	vector<string> vec_str;

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
				--j;
			}
		}
	}

	//Вывести в файл
	for (int i = 0; i < vec_str.size(); ++i)
	{
		//не выводить пустые строки
		if (vec_str[i].size() > 1)
		{
			fout << vec_str[i] << endl;
		}
	}

	f1.close();
	fout.close();

	// system("pause");
}