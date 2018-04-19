#pragma once
#include <iostream>
class Vector_
{
private:
	int *arr;
	int size;

public:
	void push_back(int num);
	void pop_back();
	void printInfo();
	int getSize(int size);
	Vector_(const Vector_&obj);
	Vector_();
	Vector_(int size, int num = 0);
	~Vector_();
};

