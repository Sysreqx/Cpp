#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#define n 11 // длина главной диагонали


// распечатать матрицу
void printArray(double* arr, string ArrName) {

	for (int i = 1; i < n + 1; i++)
	{
		cout << ArrName << "[" << i << "] \t= " << arr[i] << endl;
	}
	cout << endl;
}

// распечатать матрицу с переданными диапазонами
void printArrayWithDiaposone(double* arr, string ArrName, int begin, int end) {

	for (int i = begin; i < end + 1; i++)
	{
		cout << ArrName << "[" << i << "] \t= " << arr[i] << endl;
	}
	cout << endl;
}

// найти P
void findP(double* A, double* B, double* C, double* P) {

	for (int i = 1; i < n + 1; i++)
	{
		if (i == 1)
		{
			P[i] = -C[i] / B[i];
		}

		if (i >= 2 && i <= (n - 1) / 2)
		{
			P[i] = -C[i] / (A[i] * P[i - 1] + B[i]);
		}

	}
}

// найти Q
void findQ(double* A, double* B, double* D, double* P, double* Q) {

	for (int i = 1; i < n + 1; i++)
	{
		if (i == 1)
		{
			Q[i] = D[i] / B[i];
		}

		if (i >= 2 && i <= (n - 1) / 2)
		{
			Q[i] = (D[i] - A[i] * Q[i - 1]) / (A[i] * P[i - 1] + B[i]);
		}

	}
}

// найти R
void findR(double* A, double* B, double* C, double* R) {

	for (int i = n; i > ((n + 1) / 2); i--)
	{
		if (i == n)
		{
			R[i] = -A[i] / B[i];
		}
		else
		{
			R[i] = -A[i] / (C[i] * R[i + 1] + B[i]);
		}
	}

}

// найти T
void findT(double* B, double* C, double* D, double* R, double* T) {

	for (int i = n; i > ((n + 1) / 2); i--)
	{
		if (i == n)
		{
			T[i] = D[i] / B[i];
		}
		else
		{
			T[i] = (D[i] - C[i] * T[i + 1]) / (C[i] * R[i + 1] + B[i]);
		}
	}

}

// найти центральный Х
void findXMidle(double* A, double* B, double* C, double* D, double* P, double* Q, double* R, double* T, double* X) {

	int nD2 = (int)ceil((double)n / 2); // n / 2, ceil используется чтобы окрулить double в большую сторону. (5.5 -> 6);
	// и потом делаем явное преобразование в int, т.к. index в array может быть только int, в нашем случае

	X[nD2] = (D[nD2] - A[nD2] * Q[nD2 - 1] - C[nD2] * T[nD2 + 1]) / (B[nD2] + A[nD2] * P[nD2 - 1] + C[nD2] * R[nD2 + 1]);
}

// найти Х слева от центрального
void findXLeft(double* P, double* Q, double* X) {

	for (int i = ((n - 1) / 2); i > 0; i--)
	{
		X[i] = P[i] * X[i + 1] + Q[i];
	}
}

// найти Х справа от центрального
void findXRight(double* R, double* T, double* X) {

	for (int i = ((n + 1) / 2 + 1); i < n + 1; i++)
	{
		X[i] = R[i] * X[i - 1] + T[i];
	}
}

// заполнить матрицу согласно переданным диагоналям
void setMatrix(double arr[][n], double* A, double* B, double* C) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = 0.0;
			// главная диагональ
			if (i == j)
			{
				arr[i][j] = B[i + 1];
			}

			// верхняя диагональ
			if (i + 1 == j) {
				arr[i][j] = C[i + 1];
			}

			// нижняя диагональ
			if (i - 1 == j) {
				arr[i][j] = A[i + 1];
			}
		}
	}
}

// вывести матрицу на экран
void displayMatrix(double arr[][n]) {
	cout << "Matrix: \n";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;
}

// Проверить обладает ли матрица диагональным преобладанием
void checkDiagonallyDominantMatrix(double arr[][n], bool& flag) {

	for (int i = 0; i < n; i++)
	{
		double tmp = 0.0;

		for (int j = 0; j < n; j++)
		{

			// сумма модулей кроме элемента главной диагонали
			if (i != j)
			{
				tmp += arr[i][j];
			}
		}

		cout << "i =  " << i + 1 << "\t\t";
		if (arr[i][i] >= tmp)
		{
			cout << arr[i][i] << " >= " << tmp << endl;
		}
		else {
			cout << arr[i][i] << " >= " << tmp << endl;
			cout << "Matrica ne obladaet diagonalnym preobladanyem" << endl << endl;
			flag = false;
			break;
		}
	}

	if (flag)
	{
		cout << "Matrica obladaet diagonalnym preobladanyem" << endl << endl;
	}
}

int main() {

	double x[n + 2];

	double A[n + 2] = { 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0 };    // нижняя диагональ
	double B[n + 2] = { 0.0, 1.0,  2.0,  2.0,  2.0,  2.0,  2.0,  2.0,  2.0,  2.0,  2.0,  1.0, 0.0 };    // главная диагональ
	double C[n + 2] = { 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0 };    // верхняя диагональ
	double D[n + 2] = { 0.0, 2.0, 5.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 2.0, 0.0 };    // правая сторона уравнения

	double X[n + 2] = { 0.0 }; // ответы
	double P[n + 2] = { 0.0 }; // левая 
	double Q[n + 2] = { 0.0 }; // левая
	double R[n + 2] = { 0.0 }; // правая
	double T[n + 2] = { 0.0 }; // правая

	// Проверка на диагональное преобладание
	bool flag = true; // флаг для завершения программы, если матрица не обладает свойством диагонального преобладания
	double arr[n][n] = { {} };

	setMatrix(arr, A, B, C);
	displayMatrix(arr);
	checkDiagonallyDominantMatrix(arr, flag);

	if (!flag)
	{
		return 0;
	}
	// Конец проверки

	findP(A, B, C, P);
	printArrayWithDiaposone(P, "P", 1, n / 2);

	findQ(A, B, D, P, Q);
	printArrayWithDiaposone(Q, "Q", 1, n / 2);

	findR(A, B, C, R);
	printArrayWithDiaposone(R, "R", (n + 1) / 2 + 1, n);

	findT(B, C, D, R, T);
	printArrayWithDiaposone(T, "T", (n + 1) / 2 + 1, n);

	findXMidle(A, B, C, D, P, Q, R, T, X);
	findXLeft(P, Q, X);
	findXRight(R, T, X);
	printArray(X, "X");


	return 0;
}

