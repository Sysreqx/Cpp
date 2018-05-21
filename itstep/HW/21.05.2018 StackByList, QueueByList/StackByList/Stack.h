#pragma once
#include <iostream>
#include <list>
using namespace std;

class Stack
{
private:
	int stack_size = 10;
	int top = 0;
	list<int> stack;
public:
	void stack_push_back(const int &value);
	void stack_pop_back();
	int& getTop();
	int get_stack_size();
	bool empty() const;
};

