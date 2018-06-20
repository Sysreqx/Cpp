#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

class place
{
	vector<vector<int>> matrix;

public:
	place();
	void print();
	void push(int id, int player);
	bool check();
};

