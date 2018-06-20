#include "place.h"

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	system("chcp 65001");

	place p;
	p.game(1, 1);
	system("pause");
	return 0;
}