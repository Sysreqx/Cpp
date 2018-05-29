#include "iostream" 
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string p = "7182818284590452353602875";
	int r, n;
	cin >> n;
	if (n == 0)
	{
		cout << 3 << endl;
		return 0;
	}
	if (n == 25)
	{
		cout << "2.7182818284590452353602875\n";
		return 0;
	}
	r = n + 1;
	cout << "2.";
	p = p.substr(0, r);
	reverse(p.begin(), p.end());
	char s = p[0];
	p.erase(0, 1);
	if ((int(s) - 48) >= 5)
	{
		s = p[0];
		int t = int(s) - 48;
		++t;
		p.erase(0, 1);
		p.insert(0, to_string(t));
	}
	reverse(p.begin(), p.end());
	cout << p << endl;

	return 0;
}