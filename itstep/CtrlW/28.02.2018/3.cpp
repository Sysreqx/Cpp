#include <iostream>
#include <string>
using namespace std;

// // С‚РёРїР° СЂРµРєСѓСЂСЃРёСЏ
// string subs (const string s1, const string s)
// {
// 	string ss1 = s.substr(0, s1.length())
// 	if (s1 == ss1)
// 	{
// 		return "yes";
// 	}
//     return subs(s1, s.substr(, s.length() - 1));
// }

int main()
{
	string s1, s;
	int cnt = 0;
	cin >> s >> s1;

	for (int i = 0; i < s1.length(); i++)
	{
		if (s[0] == s1[i])
		{
			for (int j = 0; j < s.length(); j++)
			{
				if (s[j] == s1[i + j])
				{
					++cnt;
				}

			}
			if (cnt == s.length())
			{
				cout << "yes";
				return 0;
			}
			else
				cnt = 0;
		}
	}
	cout << "no";

	return 0;
}