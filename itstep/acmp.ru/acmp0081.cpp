#include <iostream>
using namespace std;

int main()
{   
	int n;
	cin >> n;
	int a[n];
	
	int k;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		a[i] = k;
	}

	int min = a[0], max = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (min > a[i])
			min = a[i];
		if (max < a[i])
			max = a[i];
	}
	cout << min << " " << max << endl;

	// system("pause");
	return 0;
}
