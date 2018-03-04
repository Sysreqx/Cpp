#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, s1 = "";
	getline(cin, s);
	bool b = true;
	if (s[0] == '.' || s[s.length() - 1] == '.')
	{
		cout << 0;
		system("pause");
		return 0;
	}
	
	for (int i = 0; i < s.length() + 1; ++i)
	{
		if (s[i] != '.')
		{
			s1 = s1 + s[i];
		}
		// check for end line or dot
		if (s[i] == '.' || s[i] == '\0')
		{
			// check for dots
			if (s[i] == '.' && s[i - 1] == '.')
			{
				b = false;
				break;
			}
			// cout << s1;
			// str to int
			int x = -1;
			x = stoi (s1, 0);
			// cout << x << endl;
			// IP adress range
			if (x < 0 || 255 < x){
				b = false;
				break;
			}
			// cout << s[i];
			s1 = "";
		}
	}
	if (b)
		cout << 1;
	else 
		cout << 0;
	// cout << s1;

	system("pause");
}