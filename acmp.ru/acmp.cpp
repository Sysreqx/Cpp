#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); ++j)
		{
			string s1;
			s1 = str.substr(j, 1);
			cout << s1 << " ";
			if (j == 0 && (A == s1 || B == s1 || C == s1 || E == s1 || H == s1 || K == s1 || M == s1 || O == s1 || P == s1 || T == s1 || X == s1 || Y == s1))
			{

			}
		}
		cout << endl;
	}

	system("pause");
	return 0;
	//10 10 2 2 2 7 7 2 7 7
}