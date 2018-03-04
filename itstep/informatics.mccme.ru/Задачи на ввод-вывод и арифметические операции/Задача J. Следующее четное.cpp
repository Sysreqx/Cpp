// Дано целое число n. Выведите следующее за ним четное число. При решении этой задачи нельзя использовать условную инструкцию if и циклы.


#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {

	int a;
	cin >> a;

	cout << a + 2 - a % 2;

	return 0;
}