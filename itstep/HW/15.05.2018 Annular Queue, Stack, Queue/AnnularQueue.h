#pragma once
#include "Queue.h"
template<class T>
class AnnularQueue
{
	vector<T> aq;
public:
	//annular queue(kolcevaja ocheredd)
	void movE();
	T& back();
	bool empty() const;
	T& front();
	void pop();
	void push(T val);
	int size()const;
};