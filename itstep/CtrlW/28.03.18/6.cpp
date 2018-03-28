#include <iostream>
#include <string>
// #include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s2 >> s1;
	int a1[26];
	for (int i = 0; i < 26; ++i)
	{
		a1[i] = 0;
	}
	cout << endl;

	for (int i = 0; i < s1.length(); ++i)
	{
		if(s1[i] == 'a')
		{
			++a1[0];
		}
		if(s1[i] == 'b')
		{
			++a1[1];
		}
		if(s1[i] == 'c')
		{
			++a1[2];
		}
		if(s1[i] == 'd')
		{
			++a1[3];
		}
		if(s1[i] == 'e')
		{
			++a1[4];
		}
		if(s1[i] == 'f')
		{
			++a1[5];
		}
		if(s1[i] == 'g')
		{
			++a1[6];
		}
		if(s1[i] == 'h')
		{
			++a1[7];
		}
		if(s1[i] == 'i')
		{
			++a1[8];
		}
		if(s1[i] == 'j')
		{
			++a1[9];
		}
		if(s1[i] == 'k')
		{
			++a1[10];
		}
		if(s1[i] == 'l')
		{
			++a1[11];
		}
		if(s1[i] == 'm')
		{
			++a1[12];
		}
		if(s1[i] == 'n')
		{
			++a1[13];
		}
		if(s1[i] == 'o')
		{
			++a1[14];
		}
		if(s1[i] == 'p')
		{
			++a1[15];
		}
		if(s1[i] == 'q')
		{
			++a1[16];
		}
		if(s1[i] == 'r')
		{
			++a1[17];
		}
		if(s1[i] == 's')
		{
			++a1[18];
		}
		if(s1[i] == 't')
		{
			++a1[19];
		}
		if(s1[i] == 'u')
		{
			++a1[20];
		}
		if(s1[i] == 'v')
		{
			++a1[21];
		}
		if(s1[i] == 'w')
		{
			++a1[22];
		}
		if(s1[i] == 'x')
		{
			++a1[23];
		}
		if(s1[i] == 'y')
		{
			++a1[24];
		}
		if(s1[i] == 'z')
		{
			++a1[25];
		}
	}
	cout << endl;


	for (int i = 0; i < s2.length(); ++i)
	{
		if(s2[i] == 'a')
		{
			--a1[0];
		}
		if(s2[i] == 'b')
		{
			--a1[1];
		}
		if(s2[i] == 'c')
		{
			--a1[2];
		}
		if(s2[i] == 'd')
		{
			--a1[3];
		}
		if(s2[i] == 'e')
		{
			--a1[4];
		}
		if(s2[i] == 'f')
		{
			--a1[5];
		}
		if(s2[i] == 'g')
		{
			--a1[6];
		}
		if(s2[i] == 'h')
		{
			--a1[7];
		}
		if(s2[i] == 'i')
		{
			--a1[8];
		}
		if(s2[i] == 'j')
		{
			--a1[9];
		}
		if(s2[i] == 'k')
		{
			--a1[10];
		}
		if(s2[i] == 'l')
		{
			--a1[11];
		}
		if(s2[i] == 'm')
		{
			--a1[12];
		}
		if(s2[i] == 'n')
		{
			--a1[13];
		}
		if(s2[i] == 'o')
		{
			--a1[14];
		}
		if(s2[i] == 'p')
		{
			--a1[15];
		}
		if(s2[i] == 'q')
		{
			--a1[16];
		}
		if(s2[i] == 'r')
		{
			--a1[17];
		}
		if(s2[i] == 's')
		{
			--a1[18];
		}
		if(s2[i] == 't')
		{
			--a1[19];
		}
		if(s2[i] == 'u')
		{
			--a1[20];
		}
		if(s2[i] == 'v')
		{
			--a1[21];
		}
		if(s2[i] == 'w')
		{
			--a1[22];
		}
		if(s2[i] == 'x')
		{
			--a1[23];
		}
		if(s2[i] == 'y')
		{
			--a1[24];
		}
		if(s2[i] == 'z')
		{
			--a1[25];
		}
	}
	cout << endl;

	bool z = false;
	for (int i = 0; i < 26; ++i)
	{
		if (a1[i] < 0)
		{
			z = true;
			break;
		}
	}
	if (z == false)
	{
		cout << "yes";
	}
	else
		cout << "no";

	system("pause");
	return 0;
}