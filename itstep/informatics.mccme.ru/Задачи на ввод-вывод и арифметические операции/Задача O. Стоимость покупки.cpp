// Пирожок в столовой стоит a рублей и b копеек. Определите, сколько рублей и копеек нужно заплатить за n пирожков.

// Входные данные
// Программа получает на вход три числа: a, b, n.

// Выходные данные
// Программа должна вывести два числа: стоимость покупки в рублях и копейках.


#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {

	int a, b, n;

	cin >> a >> b >> n;

	a *= 100;
	n *= (a + b);
	a = n / 100;
	b = n % 100;

	cout << a << " " << b;


	return 0;
}