#include <iostream>
using namespace std;

int main()
{   
	int n;
	cin >> n;

	int i_i, l = 0, r = 0, r_last = 0, r_last_add = 0, r_last_subtract = 0;
	for (int i = 0; i < n; ++i, i_i = 0, l = 0, r = 0, r_last = 0, r_last_add = 0, r_last_subtract = 0)
	{
		cin >> i_i;
		// last digit
		r_last += i_i % 10;
		i_i /= 10;
		// right digits sum, without last
		for (int i = 0; i < 2; ++i)
		{
			r += i_i % 10;
			i_i /= 10;
		}
		// left digits sum
		for (int i = 0; i < 3; ++i)
		{
			l += i_i % 10;
			i_i /= 10;
		}
		//check
		cout << r_last << endl;
		cout << r << endl;
		cout << l << endl;
		r_last_add = r_last + 1;
		r_last_subtract = r_last - 1;
		cout << r_last_add << endl;
		cout << r_last_subtract << endl;

		// +
		if (r_last_add > 9)
		{
			r_last_add = 0;
			r += 1;
			if (r == l)
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
		else
		{
			r = r + r_last_add;
			if (r == l)
			{
				cout << "Yes" << endl;
			}
			else 
			{
				cout << "No" << endl;
			}
		}

		// -
		if (r_last_subtract < 0)
		{
			cout << "No" << endl;
		}
		else
		{
			r = r + r_last_subtract;
			if (r == l)
			{
				cout << "Yes" << endl;
			}
			else 
			{
				cout << "No" << endl;
			}
		}
	}

	system("pause");
	return 0;
}
