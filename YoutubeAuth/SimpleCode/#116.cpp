#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// С‡С‚РµРЅРёРµ РґР°РЅРЅС‹С… РёР· С„Р°Р№Р»Р°


int main()
{
	// path to file
	string path = "myFile.txt";
	// Р§С‚РµРЅРёРµ С„Р°Р№Р»Р°
	ifstream fin;
	fin.open(path);

	// !fin.is_open()?cout<<"File not found"<<endl:cout<<"File found"<<endl;
	if (!fin.is_open())
	{
		cout << "File not found" << endl;
	}
	else
	{
		//vvoditt dannye i srazu ih sohranjatt
		cout << "File found" << endl;
		//РџРѕСЃРёРјРІРѕР»СЊРЅРѕ
		// fin.get();	
		string str;
		// char ch;
		while (!fin.eof())
		{
			// РЎС‡РёС‚С‹РІР°РЅРёРµ РґРѕ РїРµСЂРІРѕРіРѕ РїСЂРѕР±РµР»Р°
			// fin >> str;
			str = "";
			// РЎС‡РёС‚С‹РІР°С‚СЊ РїРѕСЃС‚СЂРѕС‡РЅРѕ
			getline(fin, str);
			cout << str;
		}
	}

	fin.close();

	system("pause");	
}