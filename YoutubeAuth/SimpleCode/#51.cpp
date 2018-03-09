#include <iostream>
using namespace std;
void Foo1(int a)
{
	a = 1;
}

void Foo2(int &a)
{
	a = 2;
}

void Foo3(int *a)
{
	*a = 3;
}

int main()
{
	int a;
	cin >> a;
	Foo1(a);
	cout << a << endl;
	Foo2(a);
	cout << a << endl;
	Foo3(&a);
	cout << a << endl;

	system("pause");
	return 0;
}