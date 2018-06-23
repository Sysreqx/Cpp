#include "iostream" 
#include <vector> 
using namespace std;

int main()
{
	vector<vector<char>> c;
	vector<char> d;
	char e;
	for (int i = 0; i < 4; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> e;
			d.push_back(e);
		}
		c.push_back(d);
		d.clear();
	}

	for (int i = 0; i < 3; i++)
	{
		//check right
		if (c[i][2] == c[i][3] &&
			c[i][2] == c[i + 1][2] &&
			c[i][2] == c[i + 1][3])
		{
			cout << "No";
			return 0;
		}
		// check left 
		if (c[i][0] == c[i][1] &&
			c[i][0] == c[i + 1][0] &&
			c[i][0] == c[i + 1][1])
		{
			cout << "No";
			return 0;
		}
		// check center 
		if (c[i][1] == c[i][2] &&
			c[i][1] == c[i + 1][1] &&
			c[i][1] == c[i + 1][2])
		{
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	//system("pause");
	return 0;
}