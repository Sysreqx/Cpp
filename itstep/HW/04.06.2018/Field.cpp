#include "Field.h"



bool Field::check(int x, int y) const
{
	if (x == 0 || y == 0 || x == 11 || y == 11)
		return false;
	for (size_t i = x - 1; i < x + 2; i++)
	{
		for (size_t j = y - 1; j < y + 2; j++)
		{
			if (field[i][j] != 0)
				return false;
		}
	}
	return true;
}
//check for killed ships
bool Field::isKilled(int x, int y) const
{
	for (size_t i = x - 1; i < x + 2; i++)
	{
		for (size_t j = y - 1; j < y + 2; j++)
		{
			if (x == i && y == j)
				continue;
			if (i >= 0 && i <= 11 && j >= 0 && j <= 11)
			{
				if (field[i][j] == SHIP)
					return false;
			}
		}
	}
	return true;
}

Field::Field()
{
	field = vector<vector<int>>(12);
	for (size_t i = 0; i < field.size(); i++)
		for (size_t j = 0; j < field.size(); j++)
			field[i].push_back(0);
}

void Field::printField() const
{
	for (size_t i = 0; i < field.size(); i++)
	{
		for (size_t j = 0; j < field.size(); j++)
			cout << field[i][j] << " ";
		cout << endl;
	}
}

void Field::generation()
{
	while (!addShip(FOUR));
	for (size_t i = 0; i < 2; i++)
		while (!addShip(THREE));
	for (size_t i = 0; i < 3; i++)
		while (!addShip(TWO));
	for (size_t i = 0; i < 4; i++)
		while (!addShip(ONE));
}

bool Field::addShip(ship s)
{
	int x = rand() % 10 + 1;
	int y = rand() % 10 + 1;

	bool direction = rand() % 2;
	for (size_t i = 0; i < s; i++)
	{
		if (direction) {
			if (!check(x + i, y))
				return false;
		}
		else if (!check(x, y + i))
			return false;
	}

	for (size_t i = 0; i < s; i++)
	{
		if (direction)
			field[x + i][y] = 1;
		else
			field[x][y + i] = 1;
	}
	return true;
}

void Field::clear()
{
	for (size_t i = 0; i < field.size(); i++)
	{
		for (size_t j = 0; j < field.size(); j++)
		{
			field[i][j] = 0;
		}
	}
}

void Field::shoot(int x, int y)
{
	if (field[x][y] == EMPTY)
	{
		field[x][y] = shoot_control::MISS;
		return;
	}
	if (field[x][y] == shoot_control::SHIP)
	{
		if (isKilled(x, y))
		{
			//значит убили
			fillKilledShip(x, y);
			return;
		}
		else {
			field[x][y] = HIT;
			return;
		}
	}
	return;
}

void Field::fillKilledShip(int x, int y)
{
	if (isKilled(x, y))
	{
		fillOneCell(x, y);
		// Налево
		if (field[x - 1][y] == HIT && isKilled(x - 1, y))
		{
			fillOneCell(x - 1, y);
			if (field[x - 2][y] == HIT && isKilled(x-2, y))
			{
				fillOneCell(x - 2, y);
				if (field[x - 3][y] == HIT && isKilled(x-3, y))
				{
					fillOneCell(x - 3, y);
				}
			}
		}
		// Направо
		if (field[x + 1][y] == HIT && isKilled(x + 1, y))
		{
			fillOneCell(x + 1, y);
			if (field[x + 2][y] == HIT && isKilled(x + 1, y))
			{
				fillOneCell(x + 2, y);
				if (field[x + 3][y] == HIT && isKilled(x + 3, y))
				{
					fillOneCell(x + 3, y);
				}
			}
		}
		// Вверх.
		if (field[x][y - 1] == HIT)
		{
			fillOneCell(x, y - 1);
			if (field[x][y - 2] == HIT)
			{
				fillOneCell(x, y - 2);
				if (field[x][y - 3] == HIT)
				{
					fillOneCell(x, y - 3);
				}
			}
		}
		// Вниз.
		if (field[x][y + 1] == HIT)
		{
			fillOneCell(x, y + 1);
			if (field[x][y + 2] == HIT)
			{
				fillOneCell(x, y + 2);
				if (field[x][y + 3] == HIT)
				{
					fillOneCell(x, y + 3);
				}
			}
		}
	}
	return;
}

void Field::fillOneCell(int x, int y)
{
	if (isKilled(x, y))
	{
		field[x][y] = KILL;
		// Если корабль один
		for (size_t i = x - 1; i < x + 2; i++)
		{
			for (size_t j = y - 1; j < y + 2; j++)
			{
				if (i == x && j == y)
				{
					field[x][y] = KILL;
					continue;
				}
				else if (field[i][j] == EMPTY)
				{
					field[i][j] = MISS;
				}
			}
		}
	}
	return;
}
