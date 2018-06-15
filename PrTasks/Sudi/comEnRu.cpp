// Р”РѕР±Р°РІРёС‚СЊ РїРµСЂРµРІРѕРґ Рє Р°РЅРіР»РёР№СЃРєРёРј СЃР»РѕРІР°Рј

#include <iostream>
#include <fstream> //ifstream ofstream
#include <algorithm> //transform , sort
#include <cctype> //tolower 
#include <string>
#include <vector>
// #include <iomanip> // hz why
using namespace std;
#include "path.cpp" // РїРѕРґС‚СЏРЅСѓС‚СЊ РїРµСЂРµРјРµРЅРЅС‹Рµ

int main()
{
	ifstream f1;
	ifstream f2;
	ofstream fout;

	//РћС‚РєСЂС‹С‚СЊ С„Р°Р№Р» РєРѕС‚РѕСЂС‹Р№ РЅСѓР¶РЅРѕ РѕС‚СЂРµРґР°РєС‚РёСЂРѕРІР°С‚СЊ
	f1.open(f1_path4);
	f2.open(f1_path4.substr(0, f1_path4.size() - 4) + ".en.ru.txt");
	// f1.open("misfits3s2eOUT.txt");
	//РЎРѕР·РґР°С‚СЊ РІС‹С…РѕРґРЅРѕР№ С„Р°Р№Р»
	fout.open(f1_path4.substr(0, f1_path4.size() - 4) + "EnRu.txt");

	string str_com_en_ru;
	vector<string> vec_str_com_en_ru1;
	vector<string> vec_str_com_en_ru2;

	//Р°РЅРіР»РёР№СЃРєРёР№
	while(!f1.eof())
	{
		getline(f1, str_com_en_ru);
		vec_str_com_en_ru1.push_back(str_com_en_ru);
		vec_str_com_en_ru1.push_back("\n");
	}

	//СЂСѓСЃСЃРєРёР№
	while(!f2.eof())
	{
		getline(f2, str_com_en_ru);
		vec_str_com_en_ru2.push_back(str_com_en_ru);
		vec_str_com_en_ru2.push_back("\n");
	}

	for (int i = 0; i < vec_str_com_en_ru1.size(); ++i)
	{
		if (vec_str_com_en_ru1[i].size() > 1 && vec_str_com_en_ru2[i].size() > 1)
		{
			fout << vec_str_com_en_ru1[i] << "  -  " << vec_str_com_en_ru2[i] << endl;
		}
	}

	f1.close();
	f2.close();
	fout.close();

	// system("pause");
}