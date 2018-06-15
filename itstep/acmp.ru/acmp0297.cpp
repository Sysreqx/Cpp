#include <iostream>
#include <string>
using namespace std;

int main()
{   
	string s;
	cin >> s;
	int cnt = 0;
	while (s != "")
	{
		string s_sub;
		s_sub = s.substr(0, 1);
		s = s.substr(1);
		// cout << s << endl;
		int a = stoi(s_sub);

		if (a % 10 == 0 || a % 10 == 9 || a % 10 == 6)
		{
			++cnt;
		}
		else if (a % 10 == 8)
		{
			cnt += 2;
		}
		a /= 10;

	}
	
	cout << cnt;
	// system("pause");
	return 0;
}
