#include <iostream>
#include <string>
using namespace std;

/*
Инкапсуляция ООП пример. private методы.
Что такое инкапсуляция.
Урок#77
*/

class Humanw
{
	//Идентификатор(Модификатор?) доступа
public:
	// Свойства класса, поля класса
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