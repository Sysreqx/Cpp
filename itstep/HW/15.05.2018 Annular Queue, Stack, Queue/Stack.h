#pragma once
template<typename T>
class Stack
{
	int size;
	T *stackPtr;
	int top;
public:
	T& getTop() { return stackPtr[top]; };
	Stack(int size = 5);
	Stack(const Stack<T>&obj);
	Stack<T>&operator=(const Stack<T>& obj);
	void push(const T & val);
	void pop();
	bool empty()const;
	int getSize() const { return size; };
	~Stack();
};

