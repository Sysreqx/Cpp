#include <iostream>
using namespace std;

int main()
{
	int id;
	char str[30];
	cin >> str;
	cin >> id;

	cout << str[id];
	cout << endl;
	for (int i = 0; i < sizeof(str); ++i)
	{
		if (i < id)
		{
			cout << str[i];
		}
		else if (i > id)
		{
			if (str[i] >= 0 && str[i] <= 127)
			{
				cout << str[i];
			}
		}
	}
	cout << endl;

	system("pause");
	return 0;
	//10 10 2 2 2 7 7 2 7 7
}