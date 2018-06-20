#pragma once
#include <Windows.h>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
using namespace std;

class place
{
	vector<vector<int>> matrix;

public:
	place();
	void game(int id, int player);
	void print();
	void push(int id, int player);
	bool check();
	int c = 0;
};

