#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define N 3

// функция для приведения матрицы к ступенчатому виду по строкам (треугольник)
// возвращает значение, указывающее, является ли матрица вырожденной или нет.
int forwardElim(double mat[N][N + 1]);

// функция для вычисления значений неизвестных
void backSub(double mat[N][N + 1]);

// функция для получения содержимого матрицы
void gaussianElimination(double mat[N][N + 1])
{
	// приведения матрицы к ступенчатому виду по строкам
	int singular_flag = forwardElim(mat);

	/* если матрица вырождена */
	if (singular_flag != -1)
	{
		cout << "Virozhdennaya matrica.\n";

		/* если правая сторона уравнения,
		соответствующего нулевому ряду, равна 0,
		то система имеет бесконечно много решений,
		иначе нет решений*/
		if (mat[singular_flag][N])
			cout << "Net resheniy";
		else
			cout << "Mozhet imett beskonechno mnogo resheniy";

		return;
	}

	/* получить решение системы и вывести его, используя
	   обратную подстановку */
	backSub(mat);
}

// функция для замены двух строк местами
void swap_row(double mat[N][N + 1], int i, int j)
{

	for (int k = 0; k <= N; k++)
	{
		double temp = mat[i][k];
		mat[i][k] = mat[j][k];
		mat[j][k] = temp;
	}
}

// функция для печати содержимого матрицы
void print(double mat[N][N + 1])
{
	for (int i = 0; i < N; i++, printf("\n"))
		for (int j = 0; j <= N; j++)
			cout << mat[i][j] << endl;

	cout << endl;
}

// функция для приведения матрицы к ступенчатому виду по строкам
int forwardElim(double mat[N][N + 1])
{
	for (int k = 0; k < N; k++)
	{
		// инициализация максимального значения и индекса для поворотного элемента
		int i_max = k;
		int v_max = mat[i_max][k];

		/* найти наибольшую амплитуду для поворотного элемента, если таковой имеется */
		for (int i = k + 1; i < N; i++)
			if (abs(mat[i][k]) > v_max)
				v_max = mat[i][k], i_max = i;

		/* если элемент главной диагонали равен нулю,
		 * это означает, что матрица вырождена, и
		 * приведет к делению на ноль позже. */
		if (!mat[k][i_max])
			return k; // вырожденная матрица

		/* Меняем местами строку с наибольшим значением с текущей строкой */
		if (i_max != k)
			swap_row(mat, k, i_max);


		for (int i = k + 1; i < N; i++)
		{
			/* коэффициент f, чтобы установить k-й элемент текущей строки равным 0,
			* и впоследствии оставшийся k-й столбец до 0 */
			double f = mat[i][k] / mat[k][k];

			/* вычитание f-го множителя из соответствующего k-го
			элемента строки*/
			for (int j = k + 1; j <= N; j++)
				mat[i][j] -= mat[k][j] * f;

			/* заполнение нижней треугольной матрицы нулями*/
			mat[i][k] = 0;
		}
	}

	return -1;
}

// функция для вычисления значений неизвестных
void backSub(double mat[N][N + 1])
{
	double x[N];  // Массив для хранения решения

	/* Начать вычисление от последнего уравнения до
	   первого */
	for (int i = N - 1; i >= 0; i--)
	{
		/* начните с правой части уравнения */
		x[i] = mat[i][N];

		/* Инициализируем j в i+1, так как матрица является верхне-треугольной*/
		for (int j = i + 1; j < N; j++)
		{
			/* вычесть все значения переменной левой части уравнения
			кроме коэффициента переменной,
			значение которой вычисляется */
			x[i] -= mat[i][j] * x[j];
		}

		/* делим правую часть на коэффициент вычисляемого неизвестного */
		x[i] = x[i] / mat[i][i];
	}

	cout << "\nReshenie dlya sistemy:\n";
	for (int i = 0; i < N; i++)
		cout << x[i] << endl;
}

// функция для проверки найденных корней
void check() {


	double arr[N][N] = {
		{  -0.2112, -1.46, 0.1628},
		{ -1.46, 0.1687,  0.0157},
		{ 0.1628, 0.0157,  -1.0094}
	};

	double x1 = -0.339432, x2 = -6.32148, x3 = 0.0549765;

	cout << "Proverka korney: \n";

	double tmp = 0.0;
	for (int j = 0; j < N; j++)
	{
		if (j == 0)
		{
			tmp += arr[0][j] * x1;
		}
		if (j == 1)
		{
			tmp += arr[0][j] * x2;
		}
		if (j == 2)
		{
			tmp += arr[0][j] * x3;
		}
	}
	cout << "b1" << "\t" << tmp << endl;

	tmp = 0.0;
	for (int j = 0; j < N; j++)
	{
		if (j == 0)
		{
			tmp += arr[1][j] * x1;
		}
		if (j == 1)
		{
			tmp += arr[1][j] * x2;
		}
		if (j == 2)
		{
			tmp += arr[1][j] * x3;
		}
	}
	cout << "b2" << "\t" << tmp << endl;

	tmp = 0.0;
	for (int j = 0; j < N; j++)
	{
		if (j == 0)
		{
			tmp += arr[2][j] * x1;
		}
		if (j == 1)
		{
			tmp += arr[2][j] * x2;
		}
		if (j == 2)
		{
			tmp += arr[2][j] * x3;
		}
	}
	cout << "b3" << "\t" << tmp << endl;

	cout << endl;
}


int main()
{
	// изначальная матрица
	double mat[N][N + 1] = {
		{  -0.2112, -1.46, 0.1628, 9.31},   //матрица коэффициентов, где последний столбец - правая часть системы
		{ -1.46, 0.1687,  0.0157, -0.57 },
		{ 0.1628, 0.0157,  -1.0094, -0.21 }
	};

	gaussianElimination(mat);
	cout << endl;
	check(); // функция для проверки найденных корней

	return 0;
}