#pragma once
#include <vector>
#include <iostream>
using namespace std;

enum ship { ZERO, ONE, TWO, THREE, FOUR };
enum shoot_control { EMPTY, SHIP, HIT, KILL, MISS };
class Field
{
public:
	vector<vector<int>> field;
	bool check(int x, int y) const;
	bool isKilled(int x, int y) const;
public:
	Field();
	void printField() const;
	void generation();
	bool addShip(ship s);
	void clear();
	void shoot(int x, int y);
	void fillKilledShip(int x, int y);
	void fillOneCell(int x, int y);
};

