#include <iostream>
using namespace std;
void Swap(int *a, int *b) {
	int temp = &a;
	a = b;
	b = temp;
	cout << a << " " << b;
}

int main()
{
	int a, b;
	cin >> a >> b;
	Swap(&a, &b);
	cout << endl << a << " " << b;

	system("pause");
	return 0;
}