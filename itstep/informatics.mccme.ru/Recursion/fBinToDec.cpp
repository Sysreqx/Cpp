#include <iostream>
    using namespace std;
    long long fBinToDec(long long n, long long m = 1, long long d = 0)
    {
        if (n == 0)
            return 0;
        if (n < 0)
            n = -n;
        d = n % 10 * m;
        m *= 2;
        return d + fBinToDec(n / 10, m);
    }
     
    int main()
    {
        long long a;
        cin >> a;
        if (a == 0) cout << "0";
        else if (a > 0) cout << fBinToDec(a);
        else
        {
            cout << "-";
            cout << fBinToDec(a);
        }
     
        system("pause");
        return 0;
    }