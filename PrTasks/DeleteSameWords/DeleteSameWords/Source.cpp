#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	set<string> s;
	ifstream fin("dic.txt");
	istream_iterator<string> in(fin);
	istream_iterator<string> inEnd;
	copy(in, inEnd, inserter(s, s.end()));
	fin.close();

	ofstream fout("dic.txt");
	ostream_iterator<string> out(fout, "\n");
	copy(s.begin(), s.end(), out);
	fout.close();
	system("pause");
	return 0;
}