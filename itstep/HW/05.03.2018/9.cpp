#include <iostream>
using namespace std;

int	Sequence(int n)
{
	if (n == 0)
	{
		return n;
	}
	cin >> n;
	return n + Sequence(n);
}

int main()
{
	int n;

	cout << Sequence(n);

	system("pause");
	return 0;
}