#include <iostream>
#include <string>
using namespace std;

// С‚РµСЂРЅР°СЂРЅС‹Р№ РѕРїРµСЂР°С‚РѕСЂ

int main()
{
	int a;
	cin >> a;
	a > 10 ? cout << a << '>' << 10 : a == 10 ? cout << 10 : cout << 2;
	system("pause");
}