#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// СЃРѕС…СЂР°РЅРµРЅРёРµ РґР°РЅРЅС‹С… РІ С„Р°Р№Р»


int main()
{
	// path to file
	string path = "myFile.txt";
	ofstream fout; // РџРѕС‚РѕРє out Р±СѓРґРµРј РёСЃРїРѕР»СЊР·РѕРІР°С‚СЊ РґР»СЏ Р·Р°РїРёСЃРё
	//Rewrite file
	// fout.open(path);

	//Dobavitt soderzhimoe v fail
	fout.open(path, ofstream::app);
	int x = 555;

	//Proverka mozhno li otkritt file
	if (!fout.is_open())
	{
		cout << "Can't open file" << endl;
	}
	else
	{
		//vvoditt dannye i srazu ih sohranjatt
		cout << "Enter number" << endl;
		int a;
		cin >> a;
		fout << a;		
	}

	fout.close();

	// ifstream in;  // РџРѕС‚РѕРє in Р±СѓРґРµРј РёСЃРїРѕР»СЊР·РѕРІР°С‚СЊ РґР»СЏ С‡С‚РµРЅРёСЏ
	// in.open("input.txt");
	
}