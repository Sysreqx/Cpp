/*// РЎСЂР°РІРЅРёС‚СЊ СЃР»РѕРІР°СЂСЊ Рё СѓРЅРёРєР°Р»СЊРЅС‹Рµ СЃР»РѕРІР°

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
	*/

	//РћС‚РєСЂС‹С‚СЊ С„Р°Р№Р» РєРѕС‚РѕСЂС‹Р№ РЅСѓР¶РЅРѕ РѕС‚СЂРµРґР°РєС‚РёСЂРѕРІР°С‚СЊ
	f1.open(f1_path2.substr(0, f1_path2.size() - 4) + "OUT.txt");
	// f1.open("misfits3s2eOUT.txt");
	f2.open(f2_path1);
	//РЎРѕР·РґР°С‚СЊ РІС‹С…РѕРґРЅРѕР№ С„Р°Р№Р»
	fout.open(f1_path3.substr(0, f1_path3.size() - 4) + "WordsForStudying.txt");

	string str_comp_dic_and_w1;
	vector<string> vec_str_comp_dic_and_w1;
	vector<string> vec_str_comp_dic_and_w2;

	//РѕС‚СЃРѕСЂС‚РёСЂРѕРІР°РЅРЅС‹Рµ СЃСѓР±С‚РёС‚СЂС‹
	while(f1 >> str_comp_dic_and_w1)
	{
		vec_str_comp_dic_and_w1.push_back(str_comp_dic_and_w1);
		vec_str_comp_dic_and_w1.push_back("\n");
	}

	//СЃР»РѕРІР°СЂСЊ
	while(f2 >> str_comp_dic_and_w1)
	{
		vec_str_comp_dic_and_w2.push_back(str_comp_dic_and_w1);
		vec_str_comp_dic_and_w2.push_back("\n");
	}

  //РЎСЂР°РІРЅРёС‚СЊ С„Р°Р№Р»С‹
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

	//РЎРѕСЂС‚РёСЂРѕРІР°С‚СЊ РјР°СЃСЃРёРІ
	sort (vec_str_comp_dic_and_w1.begin(), vec_str_comp_dic_and_w1.end());

	//Р’С‹РІРµСЃС‚Рё РІ С„Р°Р№Р»
	for (int i = 0; i < vec_str_comp_dic_and_w1.size(); ++i)
	{
		//РЅРµ РІС‹РІРѕРґРёС‚СЊ РїСѓСЃС‚С‹Рµ СЃС‚СЂРѕРєРё
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