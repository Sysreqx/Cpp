#pragma once
#include <windows.h>
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

enum ship { ONE = 1, TWO = 2, THREE = 3, FOUR = 4};
enum shoot_control { EMPTY, SHIP, HIT, KILL, MISS };

class Field
{
public:
	Field();

	int fieldSize = 10;
	vector<vector<int>> field;
	vector<vector<int>> fieldPC;

	// Количество блоков кораблей
	int cnt = 20, cntPC = 20;

	void game();
	void attack();
	void PCattack();
	void yourMap() const;
	void PCMap() const;

	bool check(int x, int y, vector<vector<int>>& field) const;
	bool isKilled(int x, int y, vector<vector<int>>& field) const;

	bool addShip(ship s, vector<vector<int>>& field);
	void generation();

	void printField() const;
	void clear();
	
	void shoot(int x, int y, vector<vector<int>>& field);
	void fillKilledShip(int x, int y, vector<vector<int>>& field);
};
