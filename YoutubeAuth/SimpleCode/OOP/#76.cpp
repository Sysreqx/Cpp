#include <iostream>
using namespace std;

/*
РРЅРєР°РїСЃСѓР»СЏС†РёСЏ
*/

class Point
{
private:
	int x;
	int y;

public:
	// Р“РµС‚С‚РµСЂ, РґРѕР»Р¶РµРЅ РІРѕР·РІСЂР°С‰Р°С‚СЊ Р·РЅР°С‡РµРЅРёСЏ, РЅР°С‡РёРЅР°РµС‚СЃСЏ СЃРѕ СЃР»РѕРІР° GET
	int GetX()
	{
		return x;
	}

	int GetY()
	{
		return y;
	}

	// РњРµС‚РѕРґ СЃРµС‚С‚РµСЂ, РЅР°С‡РёРЅР°РµС‚СЃСЏ СЃРѕ СЃР»РѕРІР° SET
	void SetX(int valueX)
	{
		x = valueX;
	}

	void SetY(int valueY)
	{
		y = valueY;
	}


	void Print()
	{
		cout << "x = " << x << "\ny = " << y << endl;
	}
};

int main()
{   
	Point a;
	a.SetX(5);
	a.SetY(4);
	// a.Print();
	cout << a.GetX();
	cout << a.GetY();

	system("pause");
	return 0;
}
