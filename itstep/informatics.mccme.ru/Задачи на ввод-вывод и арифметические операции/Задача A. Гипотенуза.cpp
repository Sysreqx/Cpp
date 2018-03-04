// Дано два числа a и b. Найдите гипотенузу треугольника с заданными катетами.


#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {

	double a, b;
	cin >> a >> b;

	cout << sqrt(a * a + b * b);
	

	return 0;
}