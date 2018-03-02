// Добавить перевод к английским словам

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
	f1.open(f1_path4);
	f2.open(f1_path4.substr(0, f1_path4.size() - 4) + ".en.ru.txt");
	// f1.open("misfits3s2eOUT.txt");
	//Создать выходной файл
	fout.open(f1_path4.substr(0, f1_path4.size() - 4) + "EnRu.txt");

	string str_com_en_ru;
	vector<string> vec_str_com_en_ru1;
	vector<string> vec_str_com_en_ru2;

	//английский
	while(!f1.eof())
	{
		getline(f1, str_com_en_ru);
		vec_str_com_en_ru1.push_back(str_com_en_ru);
		vec_str_com_en_ru1.push_back("\n");
	}

	//русский
	while(!f2.eof())
	{
		getline(f2, str_com_en_ru);
		vec_str_com_en_ru2.push_back(str_com_en_ru);
		vec_str_com_en_ru2.push_back("\n");
	}

	for (int i = 0; i < vec_str_com_en_ru1.size(); ++i)
	{
			fout << vec_str_com_en_ru1[i] << " - " << vec_str_com_en_ru2[i];
	}

	f1.close();
	f2.close();
	fout.close();

	// system("pause");
}