#include <iostream>
using namespace std;
void Foo(int *pa, int *pb)
{
	*pa = *pa + *pb;
	*pb = *pa - *pb;
	*pa = *pa - *pb;
}

int main()
{
	int a, b;
	cin >> a >> b;
	Foo(&a, &b);
	cout << a << " " << b;

	system("pause");
	return 0;
}