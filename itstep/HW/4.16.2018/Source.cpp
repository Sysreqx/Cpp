#include <iostream>
#include <string>
#include "Decimals.h"
#include "Student.h"

int main()
{/*
	//Дроби
	Decimals d;
	d.setNum(1);
	d.setDenum(3);
	std::cout << d.getDecimals() << std::endl;
	d.Input(2, 4);
	std::cout << d.getDecimals() << std::endl;
	std::cout << d.getWholePartOfDec() << std::endl;*/

	Student ss;

	//динамическая память - имя
	ss.setFName("asdf");
	//vob c lila pbo hqbyuh
	std::cout << ss.getFName();

	system("pause");
	return 0;
}