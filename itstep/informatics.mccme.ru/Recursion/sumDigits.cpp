#include <iostream>
using namespace std;
int sumOfDig(int n)
{
    int cnt = 0;
    if (!n)
        return cnt;
    cnt = n % 10;
    return cnt + sumOfDig(n / 10);
}
 
int main()
{
    int a;
    cin >> a;
    cout << sumOfDig(a);
 
    system("pause");
    return 0;
}
