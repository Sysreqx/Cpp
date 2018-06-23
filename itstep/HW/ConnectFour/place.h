#pragma once
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
using namespace std;

class place
{
	vector<vector<int>> matrix;
	string dir;
public:
	place(string dir);
	void game(int id, int player);
	void multiplayer(int player);
	void print();
	void push(int id, int player);
	bool check();
	int c = 0;
};