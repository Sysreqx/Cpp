#include <iostream>
using namespace std;

class Point
{
public:
	int x = 7;
	void Print()
	{
		cout << " y = " << y << "\nx = " << x << "\nz = " << z << endl;
		PrintY();
	}
private:
	int z = 5;
	int y = 4;

		void PrintY()
	{
		cout << y << endl;
	}
};

int main()
{   
	Point a;
	a.Print();
	system("pause");
	return 0;
}
