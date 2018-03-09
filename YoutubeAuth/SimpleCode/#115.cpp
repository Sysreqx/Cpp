#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// сохранение данных в файл


int main()
{
	// path to file
	string path = "myFile.txt";
	ofstream fout; // Поток out будем использовать для записи
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

	// ifstream in;  // Поток in будем использовать для чтения
	// in.open("input.txt");
	
}