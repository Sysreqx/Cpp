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
	VectorMy(const VectorMy& ad);
	VectorMy(int size, int num = 0);
	~VectorMy();
	void push_back(int num);
	void pop_back();
	void print();
	void clear();
	bool isEmpty();
	int getSize() const;
	void insert(int pos, int value);
	void erase(int pos);
	int& operator[](int ind) const{
		return arr[ind];
	}
	void reverse();

	int& operator[](int ind){return arr[ind];}
	VectorMy&operator+=(const VectorMy&a);
	VectorMy&operator=(const VectorMy&a);

	friend istream& operator >> (istream&is, VectorMy&pt);

	friend bool operator==(const VectorMy&a, const VectorMy&b);
	friend bool operator!=(const VectorMy&a, const VectorMy&b);
	friend bool operator<(const VectorMy&a, const VectorMy&b);
	friend bool operator>(const VectorMy&a, const VectorMy&b);
	friend bool operator<=(const VectorMy&a, const VectorMy&b);
	friend bool operator>=(const VectorMy&a, const VectorMy&b);
	
};
ostream& operator<<(ostream&os, const VectorMy&pt);

istream& operator >> (istream&is, VectorMy&pt);
VectorMy&operator+(const VectorMy&a,const VectorMy&b);
