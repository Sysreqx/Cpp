// Дано натуральное число. Выведите его последнюю цифру.


#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
	int a;
	cin >> a;

	do {
		cout << a % 10;
		break;
	}
	while (a > 10)
	

	return 0;
}