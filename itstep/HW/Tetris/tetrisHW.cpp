#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <algorithm> 
#include <stdlib.h>
using namespace std;

struct Point
{
	short x, y;
};
struct Figure
{
	Point body1[4];
	Point body2[4];
	Point body3[4];
	Point body4[4];
	byte size;
	int type;
};
struct Ground
{
	bool filled[10][10];
	// int groundHeight;
	int size;
	Point * body;
};
struct Wall
{
	Point gates[20];
	short size;
};
void draw(Point & p, char sign)
{
	COORD position = { p.x, p.y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	cout << sign;
}
void drawEverything(Figure & f, Wall & w, Ground & g)
{
	for (byte i = 0; i < f.size; ++i)
	{
		// С‚СѓС‚ Р·Р°СЂР°РЅРґРѕРјРёС‚СЊ С„РёРіСѓСЂС‹

		// draw(f.body1[i], '#');
		// draw(f.body2[i], '#');
		draw(f.body3[i], '#');
		// draw(f.body4[i], '#');
	}
	for (short i = 0; i < w.size; ++i) {
		draw(w.gates[i], '|');
	}
}
void init(Figure & f, Wall & w, Ground & g) {
	//СЃР°РјР° С„РёРіСѓСЂР° ####
	f.body1[0].x = 2;
	f.body1[0].y = 1;
	f.body1[1].x = 2;
	f.body1[1].y = 2;
	f.body1[2].x = 2;
	f.body1[2].y = 3;
	f.body1[3].x = 2;
	f.body1[3].y = 4;
	// end ####

		//СЃР°РјР° С„РёРіСѓСЂР° ##
	//						 ##
	//
	f.body2[0].x = 5;
	f.body2[0].y = 1;
	f.body2[1].x = 5;
	f.body2[1].y = 2;
	f.body2[2].x = 6;
	f.body2[2].y = 2;
	f.body2[3].x = 6;
	f.body2[3].y = 3;
	// end ##
	//		##

			//СЃР°РјР° С„РёРіСѓСЂР° #
	//						   ###
	//
	f.body3[0].x = 5;
	f.body3[0].y = 0;
	f.body3[1].x = 4;
	f.body3[1].y = 1;
	f.body3[2].x = 5;
	f.body3[2].y = 1;
	f.body3[3].x = 6;
	f.body3[3].y = 1;
	// end #
	//		###

	f.size = 4;
	f.type = 1;
	g.body = new Point[20];
	g.size = 0;
	w.size = 20;
	for (int i = 0; i < 10; ++i) {
		w.gates[i].x = 1;
		w.gates[i].y = i;
		w.gates[i + 10].x = 10;
		w.gates[i + 10].y = i;
	}
}
void move(Figure & f, int dx)
{
	for (byte i = 0; i < f.size; ++i)
	{
		f.body1[i].x += dx;
		++f.body1[i].y;
		f.body2[i].x += dx;
		++f.body2[i].y;
		f.body3[i].x += dx;
		++f.body3[i].y;
		f.body4[i].x += dx;
		++f.body4[i].y;
	}
}
void rotate(Figure & f)
{
	// ####
	if (f.body1[0].x == f.body1[1].x && f.body1[0].x == f.body1[2].x && f.body1[0].x == f.body1[3].x)
	{
		f.body1[0].x--;
		f.body1[0].y++;
		f.body1[2].x++;
		f.body1[2].y--;
		f.body1[3].x += 2;
		f.body1[3].y -= 2;
	}
	else
	{
		f.body1[0].x++;
		f.body1[0].y--;
		f.body1[2].x--;
		f.body1[2].y++;
		f.body1[3].x -= 2;
		f.body1[3].y += 2;
	}
	// ####

	//##
	// ##
	if (f.body2[0].x == f.body2[1].x)
	{
		f.body2[0].x--;
		f.body2[0].y += 2;
		f.body2[3].x --;
	}
	else
	{
		f.body2[0].x++;
		f.body2[0].y -= 2;
		f.body2[3].x ++;
	}
	//##
	// ##

		//#
	// ###
	if (f.body3[2].y == f.body3[1].y && f.body3[1].y == f.body3[3].y)
	{
		f.body3[1].x++;
		f.body3[1].y++;
	}
	else if (f.body3[0].x == f.body3[1].x && f.body3[1].x == f.body3[2].x)
	{
		f.body3[0].x--;
		f.body3[0].y++;
	}
	else if (f.body3[0].y == f.body3[3].y && f.body3[3].y == f.body3[2].y)
	{
		f.body3[3].x--;
		f.body3[3].y--;
	}
	else if (f.body3[1].x == f.body3[3].x && f.body3[3].x == f.body3[2].x)
	{
		f.body3[1].x++;
		f.body3[1].y--;
		swap(f.body3[1].x, f.body3[0].x);
		swap(f.body3[1].y, f.body3[0].y);
		swap(f.body3[3].x, f.body3[0].x);
		swap(f.body3[3].y, f.body3[0].y);
	}
	// #
	//###


}
void landing() 
{

}
void game()
{
	Figure figure;
	Wall wall;
	Ground ground;
	bool isActive = true;
	init(figure, wall, ground);
	while (isActive)
	{
		system("cls");
		drawEverything(figure, wall, ground);
		int dx = 0;
		if (_kbhit())
		{
			dx = 0;
			char action = _getch();
			switch (action)
			{
			case 'a':
				dx = -1;
				break;
			case 'd':
				dx = 1;
				break;
			case 'w':
				rotate(figure);
				break;
			case 's':
				break;
			default:
				break;
			}
		}
		move(figure, dx);
		Sleep(500);
	}
	delete[] ground.body;
}
int main()
{
	game();
	return 0;
}