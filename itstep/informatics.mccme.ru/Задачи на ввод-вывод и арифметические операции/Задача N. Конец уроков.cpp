#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int start = 9 * 60;
    const int lesson = 45;
    const int small = 5;
    const int big = 15;

    int m = start + n * lesson;
    m += (n-1) * small;
    m += (n-1)/2 * (big - small);

    cout << setw(2) << setfill('0') << m/60 << ' ' << setw(2) << setfill('0') << m%60;

    return 0;
}
