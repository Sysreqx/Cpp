#include <iostream>
using namespace std;

void printTriangle(const int &n);
void printTree(const int &h);

int main()
{
	int n;
	cin >> n;
	printTree(n);
	//printTriangle(n);

	system("pause");
	return 0;
}

// Triangle.
void printTriangle(const int &n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
		{
			if (j == n - i - 1)
			{
				cout << "*";
				for (int k = 0; k < i * 2; k++)
				{
					cout << "*";
					++j;
				}
			}
			else
				cout << " ";
		}
		cout << endl;
	}
}

// Christmass Tree.
void printTree(const int &h) {
	int ht = 2;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < ht + i; j++)
		{
			for (int k = 0; k < h - j; k++)
			{
				cout << " ";
			}
			for (int k = 0; k < j * 2 + 1; k++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
}
