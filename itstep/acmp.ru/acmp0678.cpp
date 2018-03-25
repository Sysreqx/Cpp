#include <iostream>
#include <string>
using namespace std;

int main()
{   
	string s;
	cin >> s;
	int s_l = s.length();
	bool b1 = true, b2 = false, b3 = false;
	for (int i = 0; i < s_l; ++i)
	{
		string s1 = s.substr(0, 1);
		if (s1 == "A")
		{
			swap(b1, b2);
		}
		if (s1 == "B")
		{
			swap(b2, b3);
		}
		if (s1 == "C")
		{
			swap(b1, b3);
		}
		s = s.substr(1);
		// cout << s << endl;
	}

	if (b1 == true)
	{
		cout << 1;
	}
	if (b2 == true)
	{
		cout << 2;
	}
	if (b3 == true)
	{
		cout << 3;
	}

	// system("pause");
	return 0;
}
