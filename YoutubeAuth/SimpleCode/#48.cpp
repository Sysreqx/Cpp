#include <iostream>
using namespace std;
void Foo(int a)
{
	++a;
}

int main()
{
	int a;
	cin >> a;
	Foo(a);
	cout << a;

	system("pause");
	return 0;
}