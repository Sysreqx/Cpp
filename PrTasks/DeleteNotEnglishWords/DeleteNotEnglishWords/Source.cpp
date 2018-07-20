#include <fstream>
#include <iterator>
#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main()
{
	ifstream fin("1.txt");
	istream_iterator<string> i(fin);
	istream_iterator<string> e;
	vector<string> s(i, e);
	set<string> c;
	fin.close();

	for (int i = 0; i < s.size(); i++)
		if ((s[i][0] >= 65 && s[i][0] <= 90) || (s[i][0] >= 97 && s[i][0] <= 122))
			c.insert(s[i]);
	
	ofstream fout("2.txt");
	for (auto i : c)
		fout << i << endl;
	fout.close();

	system("pause");
	return 0;
}