#include <iostream>
#include <string>
using namespace std;

/*
Методы класса
функции класса
*/

class Human
{
	//Идентификатор(Модификатор?) доступа
public:
	// Свойства класса, поля класса
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