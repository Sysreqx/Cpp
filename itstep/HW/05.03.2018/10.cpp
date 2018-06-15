#include <iostream>
using namespace std;
int max = 0,m2 = 0;
int Seq2m()
{
	int n;
	cin >> n;
	
	if (n == 0)
	{
		return m2;
	}

	if (max < n)
	{
		m2 = max;
		max = n;
	}
	return Seq2m();
}
int main()
{
	cout << Seq2m();
	system("pause");
	return 0;
}