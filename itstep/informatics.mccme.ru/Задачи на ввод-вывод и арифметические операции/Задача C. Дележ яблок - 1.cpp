/*N школьников делят K яблок поровну, неделящийся остаток остается в корзинке. Сколько яблок достанется каждому школьнику?*/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {

	int N, k, appl;
	cin >> N >> k;

	appl = k / N;

	cout << appl;


	return 0;
}
