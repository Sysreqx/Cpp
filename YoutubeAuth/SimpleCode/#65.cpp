#include <iostream>
#include <string>
using namespace std;

	//Указатель на функцию
	// Тип функции(*имя указателя)(спецификация параметров);

string DataFromBD()
{
	return "Data From Bd";
}

string DataFromWEbServer()
{
 return "Data from WEbServer";
}

void showInfo(string(*foo)())
{
	cout << foo() << endl;
}

int main()
{
	showInfo(DataFromWEbServer);
	system("pause");
}