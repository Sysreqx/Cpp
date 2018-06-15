#include <iostream>
using namespace std;

int main()
{   
	int n;
	cin >> n;
	int bus_height = 437;

	int k;
	for (int i = 1; i <= n; ++i)
	{
		cin >> k;
		if (k <= bus_height)
		{
			cout << "Crash " << i << endl;
			// system("pause");
			return 0;
		}
	}
	cout << "No crash" << endl;

	// system("pause");
	return 0;
}
