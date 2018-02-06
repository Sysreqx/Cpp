#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;


const int width = 20;
const int height = 20;

struct Point
{
	short x, y;
};
struct Snake
{
	Point * body;
	int length;
	char sign = '*';
};
struct Food
{
	Point body;
	char sign = '$';
};
/*struct Border
{
	Point * border;
	char sign = '#';
};*/
void draw(Point &p, char sign)
{
	COORD position = { p.x, p.y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	cout << sign;
}
void drawEverything(Snake &snake, Food &food)
{
		for (int i = 0; i < width + 1; ++i)
		cout << "#";
		cout << endl;

		for (int i = 0; i < height; ++i)
		{
			for (int j = 0; j < width; ++j)
			{
				if (j == 0 || j == width - 1)
				{
					cout << "#";
				}
				cout << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < width + 1; ++i)
		cout << "#";
		cout << endl;

	for (int i = 0; i < snake.length; ++i) {
		draw(snake.body[i], snake.sign);
	}
	draw(food.body, food.sign);
	cout << endl;
		cout << snake.length;
}
void generation(Snake &snake, Food &food)
{
	snake.body = new Point[2];
	snake.body[0].x = 3;
	snake.body[0].y = 3;
	snake.length = 2;
	food.body.x = 5;
	food.body.y = 5;
}
void snakeMove(Snake &snake, int dx, int dy)
{
	//остальные подтягиваются
	for (int i = snake.length; i > 0; --i) {
		snake.body[i].x = snake.body[i - 1].x;
		snake.body[i].y = snake.body[i - 1].y;
	}
	//нулевой элемент - голова
	snake.body[0].x += dx;
	snake.body[0].y += dy;
}
bool checkIfSnakeEatsFood(Snake &snake, Food &food)
{
	if (snake.body[0].x == food.body.x && snake.body[0].y == food.body.y)
	{
		return true;
	}
	else { return false; }
}
void snakeEat(Snake &snake, Food &food) {
	snake.body[snake.length].x = food.body.x;
	snake.body[snake.length].y = food.body.y;
	++snake.length;
}
void generateFood(Snake &snake, Food &food)
{
	food.body.x = rand() % 20 + 5;
	food.body.y = rand() % 20 + 5;
	for (int i = 0; i < snake.length; ++i)
	{
		if (food.body.x == snake.body[i].x && food.body.y == snake.body[i].y) 
		{
			generateFood(snake, food);
		}
	}
}
bool checkIfSnakeEatsItself(Snake &snake)
{
	for (int i = 1; i < snake.length; ++i) {
		if (snake.body[0].x == snake.body[i].x && snake.body[0].y == snake.body[i].y) {
			return true;
		}
	}
	// if (snake.body[x].x > width || snake.body[x].x < 0 && snake.body[y].y > height || snake.body[i].y < 0)
	// {
	// 	return true;
	// }
	return false;
}
void game()
{
	Snake snake;
	Food food;
	generation(snake, food); 
	char action = 'd';
	int dx = 1, dy = 0;
	while (true)
	{
		drawEverything(snake, food);
		if (_kbhit()) 
		{
			action = _getch();
		}
		switch (action)
		{
		case 'a':
			dx = -1;
			dy = 0;
			break;
		case 'w':
			dx = 0;
			dy = -1;
			break;
		case 's':
			dx = 0;
			dy = 1;
			break;
		case 'd':
			dx = 1;
			dy = 0;
			break;
		case 'q':
			return;
		default:
			break;
		}
		snakeMove(snake, dx, dy);
		if (checkIfSnakeEatsFood(snake, food))
		{
			snakeEat(snake, food);
			generateFood(snake, food);
		}
		else 
		{
			if (checkIfSnakeEatsItself(snake)) 
			{
				break;
			}
		}
		Sleep(20);
		system("cls");
	}
	delete[] snake.body;
	cout << "the end";
	system("pause");
}

int main()
{
	game();
	return 0;
}