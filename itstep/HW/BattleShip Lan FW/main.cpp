#include "Field.h"
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <cstdlib>

int main(int argc, char*argv[]) {
	srand(time(0));

	///////////////

	char Title[1920];
	GetConsoleTitle(Title, 1920); // Узнаем имя окна
	HWND hwnd = FindWindow(NULL, Title); // Узнаем hwnd окна

	//MoveWindow(hwnd,x,y,width,height,repaint);
	if (atoi(argv[1]) == 1)
		MoveWindow(hwnd, 50, 50, 700, 550, true);
	else
		MoveWindow(hwnd, 800, 50, 700, 550, true);
	/////////////////



	////////////

	string path = "C:\\Users\\SysRq\\source\\repos\\BattleShip\\BattleShip";

	Field f(path, atoi(argv[1]));

	f.multiplayer(atoi(argv[1]));

	system("pause");
	return 0;
}