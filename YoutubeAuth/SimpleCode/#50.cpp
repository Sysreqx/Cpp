#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int *ptra = &a;
	int &aRef = *ptra;
	int *ptrb = &aRef;

	cout << *ptra;
	cout << endl;
	
	cout << ptra;
	cout << endl;
	
	cout << &a;
	cout << endl;
	
	cout << &aRef;
	cout << endl;
	
	cout << *ptrb;
	cout << endl;
	
	cout << ptrb;
	cout << endl;

	*ptrb = 12;
	cout << a;

	system("pause");
	return 0;
}