#include <iostream>
using namespace std;

/*
Инкапсуляция
*/

class Point
{
private:
	int x;
	int y;

public:
	// Геттер, должен возвращать значения, начинается со слова GET
	int GetX()
	{
		return x;
	}

	int GetY()
	{
		return y;
	}

	// Метод сеттер, начинается со слова SET
	void SetX(int valueX)
	{
		x = valueX;
	}

	void SetY(int valueY)
	{
		y = valueY;
	}


	void Print()
	{
		cout << "x = " << x << "\ny = " << y << endl;
	}
};

int main()
{   
	Point a;
	a.SetX(5);
	a.SetY(4);
	// a.Print();
	cout << a.GetX();
	cout << a.GetY();

	system("pause");
	return 0;
}
