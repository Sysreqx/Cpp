/*Напишите программу, которая считывает целое число и выводит текст, аналогичный приведенному в примере. Пробелы, знаки препинания, заглавные и строчные буквы важны!*/


#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {

	int a;

	cin >> a;

	cout << "The next number for the number " << a << " is " << a + 1 << "." << endl;
	cout << "The previous number for the number " << a << " is " << a - 1 << "." << endl;


	return 0;
}
