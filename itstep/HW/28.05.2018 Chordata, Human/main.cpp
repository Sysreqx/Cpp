#include "Homeothermy.h"
#include "Fish.h"
#include "Human.h"

void main() {
	//mammals
	Homeothermy h("White", "Hodor", 1, 1);
	h.info();
	std::cout << std::endl;
	Fish f("Blue", "Fishi", 1, 1);
	f.info();
	std::cout << std::endl;
	Human z("White", "Hodor", 1, 1, 1);
	z.info();
	std::cout << std::endl;
	system("pause");
}