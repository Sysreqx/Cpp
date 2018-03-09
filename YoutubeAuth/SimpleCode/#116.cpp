#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// чтение данных из файла


int main()
{
	// path to file
	string path = "myFile.txt";
	// Чтение файла
	ifstream fin;
	fin.open(path);

	// !fin.is_open()?cout<<"File not found"<<endl:cout<<"File found"<<endl;
	if (!fin.is_open())
	{
		cout << "File not found" << endl;
	}
	else
	{
		//vvoditt dannye i srazu ih sohranjatt
		cout << "File found" << endl;
		//Посимвольно
		// fin.get();	
		string str;
		// char ch;
		while (!fin.eof())
		{
			// Считывание до первого пробела
			// fin >> str;
			str = "";
			// Считывать построчно
			getline(fin, str);
			cout << str;
		}
	}

	fin.close();

	system("pause");	
}