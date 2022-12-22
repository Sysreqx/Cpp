//#include <iostream>
//#include <cmath>
//using namespace std;
//
//// Функции для Метода Ньютона и для проверки корней
//double f1(double x, double y) {
//    return cos(x - 1) + 3 * y - 1.5;
//}
//
//double f2(double x, double y) {
//    return 2 * x - cos(y) - 4;
//}
//
//void findRoots(double& x0, double& y0, double e, int m, int& k, double& x1, double& y1, double& z1, double& z2) {
//
//    double d, dx, dy;
//
//    //df1dx = -sin(x - 1);
//    //df2dx = 2;
//    //df1dy = 3;
//    //df2dy = -sin(y)
//
//    while (true) {
//        d = -sin(x0 - 1) * -sin(y0) - 3 * 2;
//        dx = f1(x0, y0) * -sin(y0) - f2(x0, y0) * 3;
//        dy = -sin(x0 - 1) * f2(x0, y0) - 2 * f1(x0, y0);
//
//        x1 = x0 - dx / d;
//        y1 = y0 - dy / d;
//
//        cout << k << ". x = " << x1 << "; y = " << y1 << endl;
//
//        if (fabs(x1 - x0) < e && fabs(y1 - y0) < e)
//        {
//            z1 = f1(x1, y1);
//            z2 = f2(x1, y1);
//            return;
//        }
//        else {
//            k++;
//            if (k <= m)
//            {
//                x0 = x1;
//                y0 = y1;
//            }
//            else {
//                cout << "Поменяйте начальное приближение" << endl;
//                return;
//            }
//        }
//    }
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    double x0 = 2.5, y0 = 0.5, x1, y1, z1, z2;
//    double e = 0.00001;
//    int m = 100;
//
//    int k = 1;
//
//    findRoots(x0, y0, e, m, k, x1, y1, z1, z2);
//
//    cout << endl;
//
//    if (f1(x1, y1) < e && f2(x1, y1) < e)
//    {
//        cout << "Корни найдены верно" << endl;
//    }
//    else {
//        cout << "Корни найдены не верно" << endl;
//    }
//
//    cout << "Точность для \"x\" " << f1(x1, y1) << endl;
//    cout << "Точность для \"y\" " << f2(x1, y1) << endl;
//
//    return 0;
//}
