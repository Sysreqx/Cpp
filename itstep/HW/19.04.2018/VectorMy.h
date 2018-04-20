#pragma once
#include <iostream>
using namespace std;

class VectorMy
{
private:
	int *arr;
	int size = 0;
public:
	VectorMy();
	VectorMy(int size, int num = 0);
	~VectorMy();
	void push_back(int num);
	void pop_back();
	void print();
	void clear();
	bool isEmpty();
	int getSize();
	void insert(int position, int value);
	void erase(int position);
	void reverse();
	VectorMy(const VectorMy& ad);
};

