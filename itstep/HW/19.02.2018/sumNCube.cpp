#include <iostream>
#include <vector>

using namespace std;
 
const long long maxn = 1000009;
 
long long n, m, i, j, k;
vector<long long> p;
int f[maxn];
 
inline void test()
{
    f[1] = 1; f[2] = 2; f[3] = 3;
    for (long long i = 1; i <= 100; ++i)
        p.push_back(i*i*i);
    cin >> n;
    for (long long i = 4; i <= n; ++i)
    {
        f[i] = 1000000009;
        for (long long j = 0; j<p.size(); ++j)
        {
            if (i >= p[j] && f[i] > f[i - p[j]] + 1)
                f[i] = f[i - p[j]] + 1;
        }
    }
    cout << f[n];
    //system("pause");
}
  
int main()
{
    test();
    system("pause");
    return 0;
}