#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "";
	int n, m, d, k;
	cin >> k;
	for (int i = 0; i < k; ++i)
	{
		cin >> n >> m;
		d = 19 * m + (n + 239) * (n + 366) / 2;
		s += to_string(d) + "\n";;
	}
		cout << s << endl;
	// system("pause");
}