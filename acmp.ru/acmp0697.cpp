#include <iostream>
using namespace std;

int main()
{   
	int l, w, h;
	cin >> l >> w >> h;

	int out_int = (h * l * 2 + h * w * 2);

	if (out_int <= 16)
		cout << 1 << endl;
	else if (out_int % 16 == 0)
		cout << out_int / 16 << endl;
	else
		cout << out_int / 16 + 1;

	// system("pause");
	return 0;
}
