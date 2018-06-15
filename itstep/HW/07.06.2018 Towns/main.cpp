#include "Towns.h"


int main(int argc,char*argv[]) {
	
	setlocale(0, "");
	system("chcp 1251");
	system("cls");
	// \\dc\Студенты\ПКО\SMB - 172.2\city.csv
	//townsGame t("\\\\dc\\Студенты\\ПКО\\SMB-172.2");
	townsGame t("\\\\dc\\C:\\Users\\SysRq\\Desktop");
	t.multiplay(atoi(argv[1]), atoi(argv[2]));
	return 0;
}