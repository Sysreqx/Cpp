#include <iostream>
#include <string>
using namespace std;

/*
Р§С‚Рѕ С‚Р°РєРѕРµ РєР»Р°СЃСЃ
Р§С‚Рѕ С‚Р°РєРѕРµ РѕР±СЉРµРєС‚ РєР»Р°СЃСЃР°
*/

class Human
{
	//РРґРµРЅС‚РёС„РёРєР°С‚РѕСЂ РґРѕСЃС‚СѓРїР°
public:
	// РЎРІРѕР№СЃС‚РІР° РєР»Р°СЃСЃР°, РїРѕР»СЏ РєР»Р°СЃСЃР°
	int age;
	int weight;
	int height;
	string name;
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
	//firstHuman - РѕР±СЉРµРєС‚ РєР»Р°СЃСЃР° Human
	Human firstHuman;

	firstHuman.age = 30;
	firstHuman.weight = 140;
	firstHuman.height = 300;
	firstHuman.name = "Tengri";

	cout << firstHuman.age << endl;
	cout << firstHuman.weight << "kg" << endl;
	cout << firstHuman.height << "cm" << endl;
	cout << firstHuman.name << endl;

	Human secondHuman;
	secondHuman.age = 19;
	secondHuman.name = "Noname";
	secondHuman.weight = 75;

	cout << "_________________________" << endl;
	cout << firstHuman.age << endl;
	cout << firstHuman.weight << "kg" << endl;
	cout << firstHuman.name << endl << endl;

	Point a;
	a.x = 2;
	a.y = 3;
	a.z = 5;

	cout << a.x << " " << a.y << " " << a.z << " " << endl;

	system("pause");
	return 0;
}