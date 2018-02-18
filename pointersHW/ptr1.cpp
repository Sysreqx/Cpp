#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	int b[n];
	int *ptra = a;
	int *ptrb = b;


	for (int i = 0; i < n; ++i)
	{
		*ptra = i + 1;
		ptrb = ptra;
		cout << *ptrb << " ";
		++ptrb;
		++ptra;
	}

	system("pause");
}



