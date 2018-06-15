// РЎСЂР°РІРЅРёС‚СЊ СЃР»РѕРІР°СЂСЊ Рё СѓРЅРёРєР°Р»СЊРЅС‹Рµ СЃР»РѕРІР°

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
	f1.open(f1_path_editS);
	//РЎРѕР·РґР°С‚СЊ РІС‹С…РѕРґРЅРѕР№ С„Р°Р№Р»
	fout.open(f1_path_editS.substr(0, f1_path_editS.size() - 4) + "(edit).srt");

	string str_editS1;
	char ch_editS1;
	vector<string> vec_str_editS1;

  //Р—Р°РєРёРЅСѓС‚СЊ СЃРёРјРІРѕР»С‹ С‚РѕР»СЊРєРѕ РµСЃР»Рё СЌС‚Рѕ Р±СѓРєРІС‹ РёР»Рё РїСЂРѕР±РµР»
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

	//РЎРѕСЂС‚РёСЂРѕРІР°С‚СЊ РјР°СЃСЃРёРІ
	sort (vec_str_editS1.begin(), vec_str_editS1.end());

	//Р’С‹РІРµСЃС‚Рё РІ С„Р°Р№Р»
	for (int i = 0; i < vec_str_editS1.size(); ++i)
	{
		//РЅРµ РІС‹РІРѕРґРёС‚СЊ РїСѓСЃС‚С‹Рµ СЃС‚СЂРѕРєРё
		if (vec_str_editS1[i].size() > 1)
		{
			fout << vec_str_editS1[i] << endl;
		}
	}

	f1.close();
	f2.close();
	fout.close();

	#include "UnicWords.cpp" // РїРѕРґС‚СЏРЅСѓС‚СЊ file
	#include "CompDicAndUW.cpp" // РїРѕРґС‚СЏРЅСѓС‚СЊ file

	// system("pause");
}