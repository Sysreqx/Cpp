#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;

	fin.open("input.txt");
	fout.open("output.txt");
	// string str;
	int n = 0, k = 0, x;
	float s;
	while(fin >> x)
	{
		n += x;
		++k;
	}
	s = (float)n / k;
	fout << fixed;
	fout.precision(3);
	fout << s << endl;

	fin.close();
	fout.close();

	// system("pause");
}