#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//1 2 2 3 3 4 4 4 5 6
int main()
{
	string str;
	vector<string> vec_str;

	int i = 0;
	while (i < 10)
	{
		cin >> str;
		vec_str.push_back(str);
		++i;
	}

	sort(vec_str.begin(), vec_str.end());

	for (int i = 1; i < vec_str.size(); ++i)
	{
			if (vec_str[i] == vec_str[i - 1])
			{
				vec_str.erase(vec_str.begin() + i);
				--i;
			}
	}

	for (int i = 0; i < vec_str.size(); ++i)
	{
		cout << vec_str[i] << ' ';
	}

	return 0;
}