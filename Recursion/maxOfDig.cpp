#include <iostream>
using namespace std;
int maxOfDig(int n, int max = 0)
{
    if (!n)
        return max;
    if (n % 10 > max)
        max = n % 10;
    return maxOfDig(n / 10, max);
}
 
int main()
{
    int a;
    cin >> a;
    cout << maxOfDig(a);
 
    system("pause");
    return 0;
}
