#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int out_int = 0;
	for (int cnt = 1; cnt <= n; ++cnt)
	{
		if (n % cnt == 0)
		{
			out_int += cnt;
		}
		// cout << out_int << endl;
	}
	cout << out_int << endl;
	// system("pause");
	return 0;
}
