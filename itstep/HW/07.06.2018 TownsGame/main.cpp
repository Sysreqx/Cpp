#include "Towns.h"


int main(int argc,char*argv[]) {
	
	setlocale(0, "");
	system("chcp 1251");
	system("cls");
	// \\dc\Студенты\ПКО\SMB - 172.2\city.csv
	townsGame t("C:\\Users\\SysRq\\source\\repos\\Project1\\Project1", atoi(argv[2]));
	t.multiplay(atoi(argv[1]));
	//t.play();
	return 0;
}