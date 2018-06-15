#include <iostream>
using namespace std;

int main()
{   
	int n;
	cin >> n;

	int start_sum = 0, end_sum = 0;
	int start = 0, end = 0;
	for (int i = 0; i < 3; ++i)
	{
		end_sum += n % 10;
		n /= 10;
	}
	for (int i = 0; i < 3; ++i)
	{
		start_sum += n % 10;
		n /= 10;
	}
		
	// while (n > 0)
	// {
	// 	if (n >= 1000)
	// 	{
	// 		end_sum += n % 10;
	// 	}
	// 	else
	// 	{
	// 		start_sum += n % 10;
	// 	}
	// 	n /= 10;
	// }

	// cout << start_sum << " " << end_sum;
	if (start_sum == end_sum)
	{
		cout << "YES";
	}
	else
		cout << "NO";
	// system("pause");
	return 0;
}
