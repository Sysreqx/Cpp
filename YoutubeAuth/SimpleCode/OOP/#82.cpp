#include <iostream>
#include <string>
using namespace std;

/*
РРЅРєР°РїСЃСѓР»СЏС†РёСЏ РћРћРџ РїСЂРёРјРµСЂ. private РјРµС‚РѕРґС‹.
Р§С‚Рѕ С‚Р°РєРѕРµ РёРЅРєР°РїСЃСѓР»СЏС†РёСЏ.
РЈСЂРѕРє#77
*/

class Humanw
{
	//РРґРµРЅС‚РёС„РёРєР°С‚РѕСЂ(РњРѕРґРёС„РёРєР°С‚РѕСЂ?) РґРѕСЃС‚СѓРїР°
public:
	// РЎРІРѕР№СЃС‚РІР° РєР»Р°СЃСЃР°, РїРѕР»СЏ РєР»Р°СЃСЃР°
	int age;
	int weight;
	int height;
	string name;

	void Print()
		cout << "Name " << name << "\nWeight " << weight << "\nAge " << age << endl;
};

class Point
{
public:
	int x;
	int y;
	int z;
};

class CoffeeGrinder
{
private:
	bool CheckVoltage()
		return false;
public:
	void Start()
	{
		bool voltageIsNormal = CheckVoltage();
		if (voltageIsNormal)
			cout << "vjuhhh?" << endl;
		else
			cout << "Beep Beep" << endl;
	}

	CoffeeGrinder();
	~CoffeeGrinder();

};

CoffeeGrinder::CoffeeGrinder()
{
}

CoffeeGrinder::~CoffeeGrinder()
{
}

int main()
{
	CoffeeGrinder a;
	a.Start();

	system("pause");
	return 0;
}