#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{   
	string s = "GCV";
	int k;
	cin >> k;
	int j = 1;
	for (int i = 0; i < k; ++i)
	{
		swap(s[j], s[j + 1]);
		swap(s[j - 1], s[j]);
	}
	cout << s << endl;
	// system("pause");
	return 0;
}
