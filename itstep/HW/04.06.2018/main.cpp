#include "Field.h"
#include <ctime>

int main() {
	srand(time(0));
	Field f;
	f.clear();
	f.generation();
	f.printField();
	while (true)
	{
		int x, y;
		cin >> x >> y;
		f.shoot(x, y);
		f.printField();
	}
		system("pause");

	return 0;
}