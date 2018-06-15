#include <iostream>
using namespace std;
void Hexadecimal(int n) {
	if (n == 0)
		return;
	if (n < 0)
		n = -n;

	//with switch
	Hexadecimal(n / 16);
	switch (n % 16)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		cout << n % 16;
		break;
		case 10:
		cout << 'A';
		break;
		case 11:
		cout << 'B';
		break;
		case 12:
		cout << 'C';
		break;
		case 13:
		cout << 'D';
		break;
		case 14:
		cout << 'E';
		break;
		case 15:
		cout << 'F';
		break;
	}

/*	// with if
	Hexadecimal(n / 16);
	if (n % 16 < 10)
	{
		cout << n % 16;
	}
	if (n % 16 == 10)
	{
		cout << 'A';
	}
	if (n % 16 == 11)
	{
		cout << 'B';
	}
	if (n % 16 == 12)
	{
		cout << 'C';
	}
	if (n % 16 == 13)
	{
		cout << 'D';
	}
	if (n % 16 == 14)
	{
		cout << 'E';
	}
	if (n % 16 == 15)
	{
		cout << 'F';
	}	*/
}

int main()
{
	int a;
	cin >> a;
	if (a > 0) Hexadecimal(a);
	else if (a == 0) cout << "0";
	else
	{
		cout << "-";
		Hexadecimal(a);
	}

	system("pause");
	return 0;
} 