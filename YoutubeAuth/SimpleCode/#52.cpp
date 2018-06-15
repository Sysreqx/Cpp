#include <iostream>
#include <sstream>
using namespace std;
void Foo1(int &a, int &b, int &c)
{
	a = 1;
	b *= 2;
	c -= 10;
}

////////////////////HW53
template <typename T>
int Swap(T &a, T &b)
{
	// a = b + a;
	// b = a - b;
	// a = a - b;
	T c = b;
	b = a;
	a = c;
}


int main()
{
// 	int a, b, c;
// 	cin >> a >> b >> c;
// 	cout << a << " " << b << " " << c << " ";

// 	Foo1(a, b, c);
// 	cout << a << " " << b << " " << c << " ";
	int a = 5, b = 8;
	double c = 7.3, d = 12;
	string e = "asd", f = "qwe";

	Swap(a, b);
	cout << a << " " << b << endl;
	Swap(c, d);
	cout << c << " " << d << endl;
	Swap(e, f);
	cout << e << " " << f << endl;

	system("pause");
	return 0;
}