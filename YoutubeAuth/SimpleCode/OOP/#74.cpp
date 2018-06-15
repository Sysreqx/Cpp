#include <iostream>
#include <string>
using namespace std;

/*
РњРµС‚РѕРґС‹ РєР»Р°СЃСЃР°
С„СѓРЅРєС†РёРё РєР»Р°СЃСЃР°
*/

class Human
{
	//РРґРµРЅС‚РёС„РёРєР°С‚РѕСЂ(РњРѕРґРёС„РёРєР°С‚РѕСЂ?) РґРѕСЃС‚СѓРїР°
public:
	// РЎРІРѕР№СЃС‚РІР° РєР»Р°СЃСЃР°, РїРѕР»СЏ РєР»Р°СЃСЃР°
	int age;
	int weight;
	int height;
	string name;

	void Print()
	{
		cout << "Name " << name << "\nWeight " <<  weight << "\nAge " << age << endl;
	}
};

class Point
{
public:
	int x;
	int y;
	int z;
};

int main()
{
	Human firstHuman;
	Human secondHuman;

	firstHuman.age = 30;
	firstHuman.weight = 140;
	firstHuman.height = 300;
	firstHuman.name = "Tengri";

	firstHuman.Print();
	secondHuman.Print();

	system("pause");
	return 0;
}