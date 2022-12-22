#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Функции для итерации
double f1(double x, double y) {
    return 0.5 - cos(x - 1) / 3;
}

double f2(double x, double y) {
    return 2 + cos(y) / 2;
}

void findRoots(double& x0, double& y0, double e, int m, int k, double& x1, double& y1) {
    //double x1, y1;
    while (true) {
        x1 = f2(x0, y0);
        y1 = f1(x0, y0);

        cout << k << ". x = " << x1 << "; y = " << y1 << endl;

        if (fabs(x1 - x0) < e)
        {
            if (fabs(y1 - y0) < e) {
                cout << "Ответ: " << "x = " << x1 << "; y = " << y1 << endl;
                return;
            }
            else {
                if (k < m)
                {
                    x0 = x1;
                    y0 = y1;
                    k++;
                }
                else {
                    cout << "Поменяйте начальное приближение";
                    return;
                }
            }
        }
        else if (k < m)
        {
            x0 = x1;
            y0 = y1;
            k++;
        }
        else {
            cout << "Поменяйте начальное приближение";
            return;
        }
    }
}

// Функции для проверки
double F1(double x, double y) {
    //return cos(x - 1) + 3 * y - 1.5;
    return cos(x - 1) + 3 * y - 1.5;
}

double F2(double x, double y) {
    return 2 * x - cos(y) - 4;
}


int main()
{
    setlocale(LC_ALL, "Russian");

    double x0 = 2.5, y0 = 0.5, x1, y1;
    double e = 0.00001;
    int m = 100;

    int k = 1;

    findRoots(x0, y0, e, m, k, x1, y1);

    cout << endl;

    if (F1(x1, y1) < e && F2(x1, y1) < e)
    {
        cout << "Корни найдены верно" << endl;
    }
    else {
        cout << "Корни найдены не верно" << endl;
    }

    cout << "Точность для \"x\" " << F1(x1, y1) << endl;
    cout << "Точность для \"y\" " << F2(x1, y1) << endl;

    return 0;
}
