#include <iostream>
using namespace std;

int main()
{   
	int n, age, sex;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> age >> sex;
		if (sex == 1)
			a[i] = age;
		else
			a[i] = 0;
	}

	int num = a[0];
	int num_i = 0;
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > num)
		{
			num = a[i];
			num_i = i;
		}
	}
	
	if (num == 0)
		cout << -1;
	else
		cout << num_i + 1 << endl;
	
	// system("pause");
	return 0;
}
