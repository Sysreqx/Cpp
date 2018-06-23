#include "place.h"

int  main(int argc, char* argv[])
{
	//p.game(1, 1);
	string dir("C:\\Users\\ЕрденбековК\\Documents\\Visual Studio 2017\\Projects\\Na-na\\Na-na");
	place p(dir);
	p.multiplayer(atoi(argv[1]));
	system("pause");
	return 0;
}