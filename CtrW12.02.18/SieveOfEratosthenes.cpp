#include <iostream>
using namespace std;
// Optimized Sieve of Eratosthenes
//http://compsci.ca/v3/viewtopic.php?t=26417

int main() {
int n, m;
cin >> n >> m;
bool a[n];
int a1[m];
for (int i = 2; i <= n; ++i)
{
	a[i] = true;
}
for (int i = 2; i * i <= n; ++i)
{
	if (a[i] == true)
	{
		for (int j = i * i; j <= n; j += i)
		{
			a[j] = false;
		}
	}
}

int j = 0;
for (int i = 2; i <= n; ++i)
{
	if (a[i] == true)
	{
		cout << i << ' ';
		a1[j] = i;
		++j;
		// cout << "j" << i << endl;
	}
}
cout << endl;
cout << a1[m - 1];


system("pause");
return 0;
}