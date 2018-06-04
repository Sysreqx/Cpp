
		// Направо
		if (field[x + 1][y] == HIT || field[x + 1][y] == KILL)
		{
			int i = 1;
			while (field[x + i][y] != EMPTY || field[x + i][y] != MISS)
			{
				field[x + i][y] = KILL;
				++i;
			}
		}
		// Вверх.
		if (field[x][y + 1] == HIT || field[x][y + 1] == KILL)
		{
			int i = 1;
			while (field[x][y + i] != EMPTY || field[x][y + i] != MISS)
			{
				field[x][y + i] = KILL;
				++i;
			}
		}
		// Вниз.
		if (field[x][y - 1] == HIT || field[x][y - 1] == KILL)
		{
			int i = 1;
			while (field[x][y - i] != EMPTY || field[x][y - i] != MISS)
			{
				field[x][y - i] = KILL;
				++i;
			}
		}