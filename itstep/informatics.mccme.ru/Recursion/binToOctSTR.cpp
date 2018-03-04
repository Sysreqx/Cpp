#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

int binToOctSTR(string s)
{
	string s1;
	if (!s.empty())
	{
		s1 = s.substr(0, 3);
		if (s1 == "000") cout << 0;
		if (s1 == "001") cout << 1;
		if (s1 == "010") cout << 2;
		if (s1 == "011") cout << 3;
		if (s1 == "100") cout << 4;
		if (s1 == "101") cout << 5;
		if (s1 == "110") cout << 6;
		if (s1 == "111") cout << 7;
		s.erase(0, 3);
		binToOctSTR(s);
	}
	else return 0;
}

int main()
{
	string s;
	getline(cin, s);
	if (s[0] == '-')
	{
		cout << '-';
		s.erase(0, 1);
	}
	if (s.size() % 3 == 1)
		s = "00" + s;
	if (s.size() % 3 == 2)
		s = "0" + s;
	binToOctSTR(s);

	system("pause");
	return 0;
}
