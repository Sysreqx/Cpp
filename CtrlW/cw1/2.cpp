#include <algorithm>
#include <functional>
#include <array>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	bool arr[256];
	for (int i = 0; i < 255; ++i)
	{
		arr[i] = false;
	}
	sort(str.begin(), str.end());

	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == str[i + 1])
		{
			cout << "no";
			return 0;
		}
	}
	cout << "yes";

	cin.get();
	return 0;
}