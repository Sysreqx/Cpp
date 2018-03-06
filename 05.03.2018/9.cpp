#include <iostream>
#include <string>
using namespace std;

int Seq2m(int n)
{
	cin >> n;
	if (n == 0)
	{
		return n;
	}
	return n + Seq2m(n);
}

int main()
{
	cout << Seq2m(0);
	system("pause");
	return 0;
}
