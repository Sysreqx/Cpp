// Дано неотрицательное целое число. Найдите число десятков в его десятичной записи (то есть вторую справа цифру его десятичной записи).


#include <iostream>
using namespace std;

int main() {

	int Num;
	cin >> Num;
	cout << Num % 100 / 10;

	return 0;
}
