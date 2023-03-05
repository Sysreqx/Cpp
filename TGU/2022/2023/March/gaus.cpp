#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define N 3

int forwardElim(double mat[N][N + 1]);

void backSub(double mat[N][N + 1]);

void gaussianElimination(double mat[N][N + 1])
{
	int singular_flag = forwardElim(mat);

	if (singular_flag != -1)
	{
		cout << "Вырожденная матрица.\n";

		if (mat[singular_flag][N])
			cout << "Нет реешний";
		else
			cout << "Может иметь бесконечно много решений";

		return;
	}

	backSub(mat);
}

void swap_row(double mat[N][N + 1], int i, int j)
{

	for (int k = 0; k <= N; k++)
	{
		double temp = mat[i][k];
		mat[i][k] = mat[j][k];
		mat[j][k] = temp;
	}
}

void print(double mat[N][N + 1])
{
	for (int i = 0; i < N; i++, printf("\n"))
		for (int j = 0; j <= N; j++)
			cout << mat[i][j] << endl;

	cout << endl;
}

int forwardElim(double mat[N][N + 1])
{
	for (int k = 0; k < N; k++)
	{
		int i_max = k;
		int v_max = mat[i_max][k];

		for (int i = k + 1; i < N; i++)
			if (abs(mat[i][k]) > v_max)
				v_max = mat[i][k], i_max = i;

		if (!mat[k][i_max])
			return k;

		if (i_max != k)
			swap_row(mat, k, i_max);


		for (int i = k + 1; i < N; i++)
		{
			double f = mat[i][k] / mat[k][k];

			for (int j = k + 1; j <= N; j++)
				mat[i][j] -= mat[k][j] * f;

			mat[i][k] = 0;
		}
	}

	return -1;
}


void backSub(double mat[N][N + 1])
{
	double x[N];

	for (int i = N - 1; i >= 0; i--)
	{
		x[i] = mat[i][N];

		for (int j = i + 1; j < N; j++)
		{
			x[i] -= mat[i][j] * x[j];
		}

		x[i] = x[i] / mat[i][i];
	}

	cout << "\nРешение для системы:\n";
	for (int i = 0; i < N; i++)
		cout << x[i] << endl;
}

void check() {

	double arr[N][N] = {
		{  -0.2112, -1.46, 0.1628},
		{ -1.46, 1.1687,  0.0157},
		{ 1.1628, 0.0157,  -1.0094}
	};

	double x1 = -4.70025, x2 = -6.28825, x3 = -5.30431;

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
	double mat[N][N + 1] = {
		{  -0.2112, -1.46, 0.1628, 9.31},   //матрица коэффициентов, где последний столбец - правая часть системы
		{ -1.46, 1.1687,  0.0157, -0.57 },
		{ 1.1628, 0.0157,  -1.0094, -0.21 }
	};

	gaussianElimination(mat);
	cout << endl;
	check();

	return 0;
}
