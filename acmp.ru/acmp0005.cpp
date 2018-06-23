#include <iostream>
using namespace std;

int main()
{   
	int n;
	cin >> n;
	int a[n], b[n], c[n];

	int k = 0, j = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if (a[i] % 2 == 0)
		{
			b[j] = a[i];
			++j;
		}
		else
		{
			c[k] = a[i];
			++k;
		}
	}

	for (int i = 0; i < k; ++i)
		cout << c[i] << " ";
	cout << endl;

	for (int i = 0; i < j; ++i)
		cout << b[i] << " ";
	cout << endl;

	if (j >= k)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	
	// system("pause");
	return 0;
}
