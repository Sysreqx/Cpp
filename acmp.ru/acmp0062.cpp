#include <iostream>
using namespace std;

int main()
{   
	int a;
	char c;
	cin >> c >> a;
	int int_c = (int)c;

		if (int_c % 2 == 0)
		{
			if (a % 2 == 0)
				cout << "BLACK" << endl;
			else
				cout << "WHITE" << endl;
		}
		else
		{
			if (a % 2 == 0)
				cout << "WHITE" << endl;
			else
				cout << "BLACK" << endl;
		}

	// system("pause");
	return 0;
}
