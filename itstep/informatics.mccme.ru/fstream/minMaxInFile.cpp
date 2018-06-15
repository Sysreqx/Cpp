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
	int min = 2147483647;
	int max = 0;
	int cnt = 0;
	int x;
	while(fin>>x)
	{
		// fin >> x;
		if (x >= 0)
		{
			if (x > max && x % 2 == 0)
			{
				max = x;
			}
			if (x < min && x % 2 == 0)
			{
				min = x;
			}
			if (x % 2 == 0)
			{
				++cnt;
			}
		}
	}
	
	if (cnt == 0)
	{
		fout << 0;
	}
	else
	{
		fout << min << ' ' << max;
	}
	// fout << fixed << setprecision(3) << tmp / cnt << endl;

	fin.close();
	fout.close();

	// system("pause");
}