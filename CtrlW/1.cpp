#include <iostream>
using namespace std;
bool a[10000]; int n, i, p = 2, r;
int main() {
	cin >> n;

	do {
		i = 2;
		do {
			a[p*i] = 1; i++;
		} while (p*i <= n);

		r = p; i = 2; do {
			if (!a[i])if (i>p)p = i; i++;
		} while (r == p);

	}
	while (p <= n / 2 + 1);

	i = 2;
	do {
		if (!a[i])cout << i << "\n"; i++;
	}
	while (i <= n);
	return 1;
}