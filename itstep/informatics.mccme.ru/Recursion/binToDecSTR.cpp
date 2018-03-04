#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

int binToDecSTR(string str, long long i, long long &su)
{
	if(str.size() == 0) return su;
	else
	{
		if (str[str.size() - 1] == '1') su += i;
		i *= 2;
		str.erase(str.size() - 1, 1);
	}
	// cout << str << " " << su << endl;
	binToDecSTR(str, i, su);
}

int main()
{
	long long i = 1, su = 0;
	string s;
	cin >> s;
	if (s[0] == '-')
	{
		cout << '-';
		s.erase(0, 1);
	}
	binToDecSTR(s, i, su);
	cout << su;
	system("pause");
	return 0;
}
