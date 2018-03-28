#include <iostream>
#include <string>
using namespace std;

int main()
{	
	string s1, s2;
	cin >> s1 >> s2;

	int a[256];
	for (int i = 0; i < 256; ++i)
	{
		a[i] = 0;
	}

	for (int i = 0; i < s1.length(); ++i)
	{
		int id = (int)s1[i];
		--a[id];
	}

	for (int i = 0; i < s2.length(); ++i)
	{
		int id = (int)s2[i];
		++a[id];
	}

	bool b = false;
	for (int i = 0; i < 256; ++i)
	{
		if (a[i] < 0)
		{
			b = true;
			break;
		}
	}
	
	if (b == false)
		cout << "yes";
	else
		cout << "no";
	cout << endl;

	system("pause");
	return 0;
}