// Р”Р°РЅРѕ С‚СЂРµС…Р·РЅР°С‡РЅРѕРµ С‡РёСЃР»Рѕ. РќР°Р№РґРёС‚Рµ СЃСѓРјРјСѓ РµРіРѕ С†РёС„СЂ.


#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	cout << (t / 100) + (t % 100 / 10) + (t % 10);

	return 0;
}