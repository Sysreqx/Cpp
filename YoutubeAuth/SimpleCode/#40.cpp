#include <iostream>
using namespace std;
int Sum(int a, int b, int c)
{
	return a + b + c;
}
int Sum(int a, int b)
{
	return a + b;
}

double Sum(double a, double b)
{
	return a + b;
}

int main()
{
	int a, b, c;
	double d, e;
	cin >> a >> b >> c >> d >> e;
	cout << Sum(a, b, c);
	cout << endl;
	cout << Sum(a, b);
	cout << endl;
	cout << Sum(d, e);

	system("pause");
	return 0;
}