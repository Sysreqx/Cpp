#pragma once
#include "Vector.h"
template<class T>
class Queue
{
	Vector<T> q;
public:
	void push(T val) {
		q.push_back(val);
	}
	void pop() {
		q.erase(0);
	}
	bool empty() const { return q.empty(); }
	int size()const { return q.getSize(); }
	T& back() { return q[q.getSize() - 1]; }
	T& front() { return q[0]; }
};


