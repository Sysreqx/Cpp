#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

#define n 4 // длина главной диагонали 


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


// вывести матрицу на экран
void displayMatrix(double arr[][n]) {

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

	cout << "Proverka na diagonallnoe preobladanie" << endl;

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

		cout << "stroka =  " << i + 1 << "\t\t";
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

//Проверка правильности решения
void check(double arr[][n], double* X) {
	double tmp = 0.0;
	string s = "";

	for (int i = 0; i < n; i++)
	{
		tmp = 0.0;
		string s = "\n";

		cout << "Stroka " << i + 1 << endl;
		for (int j = 0; j < n; j++)
		{
			s += to_string(arr[i][j]) + " * " + to_string(X[j + 1]);
			if (j + 1 < n) s += " + \n";

			tmp += arr[i][j] * X[j + 1];
		}

		cout << "b[" << i + 1 << "] = " << s << endl;
		cout << "b[" << i + 1 << "] = " << tmp;
		cout << endl << endl;
	}
}

// Вспомогательная функция для нахождения определителя
void subMatrix(double mat[n][n], double temp[n][n], int p, int q, int nn) {
	int i = 0, j = 0;
	// заполнение подматрицы
	for (int row = 0; row < nn; row++) {
		for (int col = 0; col < nn; col++) {
			// пропускаем если текущая строка или столбец не равны текущему элементу строки и столбца
			if (row != p && col != q) {
				temp[i][j++] = mat[row][col];
				if (j == nn - 1) {
					j = 0;
					i++;
				}
			}
		}
	}
}

// функция для нахождения определеителя матрицы
double determinantOfMatrix(double matrix[n][n], int nn) {
	double determinant = 0;
	if (nn == 1) {
		return matrix[0][0];
	}
	if (nn == 2) {
		return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
	}
	double temp[n][n], sign = 1;
	for (int i = 0; i < nn; i++) {
		subMatrix(matrix, temp, 0, i, nn);
		determinant += sign * matrix[0][i] * determinantOfMatrix(temp, nn - 1);
		sign = -sign;
	}
	return determinant;
}

// Транспонированная матрица
void transpose(double A[][n], double B[][n])
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			B[i][j] = A[j][i];
}

// находим обратную матрицу
void findInvertibleMatrix(double A[n][n], double invertibleA[n][n]) {
	//A^-1 = 1 / detA * transA
	double detA = determinantOfMatrix(A, n);
	double transA[n][n];
	transpose(A, transA);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			invertibleA[i][j] = 1 / detA * A[i][j];
		}
	}
}

// умножение матриц A^-1 * b
void mulMat(double A[n][n], double B[n][1])
{
	double rslt[n][1];

	for (int i = 0; i < n; i++)
	{
		rslt[i][0] = 0;
		for (int j = 0; j < n; j++)
		{
			//cout << "iteration i = " << i << " \tj = " << j << ": \t\n";
			rslt[i][0] += A[i][j] * B[j][0];
			//cout << "rslt[i][0] = " << rslt[i][0] << "\tA[i][j] = " << A[i][j] << "\tB[j][0] = " << B[j][0] << "\t\tA * b" << A[i][j] * B[j][0];
			//cout << endl;
		}
	}

	cout << endl << "A^-1 * b" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << rslt[i][0] << endl;
	}
}

// умножение квадратной матрицы
void mulMat(double mat1[][n], double mat2[][n], double arr[n][n])
{
	double rslt[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			rslt[i][j] = 0;

			for (int k = 0; k < n; k++) {
				rslt[i][j] += mat1[i][k] * mat2[k][j];
			}
			arr[i][j] = rslt[i][j];
			//cout << rslt[i][j] << "\t\t";
		}

		//cout << endl;
	}
}

// Норма матрицы 
double findMatrixNorm(double A[n][n]) {
	double tmp = 0;
	double max = 0;

	for (int i = 0; i < n; i++)
	{
		tmp = 0;
		for (int j = 0; j < n; j++)
		{
			tmp += A[i][j];
		}

		if (tmp > max)
		{
			max = tmp;
		}
	}

	/*cout << endl << max <<endl;*/
	return max;
}

// найти тау 
double findTau(double matrixNorm) {
	double tau = 2 / matrixNorm;
	tau = 1.5 / matrixNorm;

	return tau;
}

// найти C
void findC(double A[n][n], double tau, double C[n][n]) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = A[i][j] * tau;
			//cout << C[i][j] << "\t";
		}
		//cout << endl;
	}
}

//найти B
void findB(double E[n][n], double C[n][n], double A[n][n], double B[n][n]) {
	// результат умножения C на A
	double tmpMatrix[n][n];
	mulMat(C, A, tmpMatrix);

	// B = E - C * A
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = E[i][j] - tmpMatrix[i][j];
		}
	}
	
}

int main() {

	double A[n][n] = {
		{1.11161, 0.1254, 0.1397, 0.149},
		{0.1254, 2.1675, 0.1768, 0.1871},
		{0.1397, 0.1768, 1.2168, 0.2271},
		{0.149, 0.1871, 0.2271, 1.2671}
	};

	double b[n][1] = {
		{0.36},
		{0.37},
		{0.38},
		{0.39}
	};

	double E[n][n] = {
		{1, 0, 0, 0},
		{0, 1, 0, 0},
		{0, 0, 1, 0},
		{0, 0, 0, 1}
	};

	double invertibleA[n][n];

	cout << "A = " << endl;
	displayMatrix(A);
	cout << endl;

	cout << "b = " << endl;
	for (int i = 0; i < n; i++) cout << b[i][0];
	cout << endl <<endl;

	cout << "E = " << endl;
	displayMatrix(E);
	cout << endl;


	cout << "A^-1 = " << endl;
	findInvertibleMatrix(A, invertibleA);

	displayMatrix(invertibleA);

	mulMat(invertibleA, b);

	// Проверим корректность постановки задачи для СЛАУЖ
	// 1) Число уравнений системы равно числу неизвестных: (квадратная матрица), можно не проверять, мы задали квадратную матрицу изначально
	// 2) Определитель отличен от нуля
	double det = determinantOfMatrix(A, n);
	cout << endl << "Opreditell otlichen ot nulya = " << det << endl;

	//chisloObuslovnennosti = normMatrix * normInvertivbleMatrix
	double normA = findMatrixNorm(A);
	double normInvertibleA = findMatrixNorm(invertibleA);
	cout << "normA = " << normA << endl;
	cout << "normInvertibleA = " << normInvertibleA << endl << endl;

	// 3) Число обусловненности матрицы A удовлетворяет неравенству:
	// 1 <= Число обусловненности матрицы A = normA * normInvertibleA < 10^3
	double cond1 = normA * normInvertibleA;
	cout << "Chislo obuslovnennosti matricy A = \t" << cond1 << endl << endl;
	// третье условие выполенно верно, следовательно, задача поставлнеа корректно

	double tau = findTau(normA);
	cout << "tau = " << tau << endl << endl;
	
	double C[n][n];
	findC(E, tau, C);
	cout << "C = " << endl;
	displayMatrix(C);
	cout << endl << endl;

	double B[n][n];
	findB(E, C, A, B);
	cout << "B = " << endl;
	displayMatrix(B);
	cout << endl << endl;

	return 0;
}