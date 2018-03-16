#include <iostream>
#include <string>
using namespace std;

/*
Что такое класс
Что такое объект класса
*/

class Human
{
	//Идентификатор доступа
public:
	// Свойства класса, поля класса
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
	//firstHuman - объект класса Human
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