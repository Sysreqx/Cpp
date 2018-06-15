#include "Stack.h"

template<typename T>
Stack<T>::Stack(int size)
{
	top = 0;
	this->size = size;
	stackPtr = new T[size];
}

template<typename T>
Stack<T>::Stack(const Stack<T>& obj)
{
	this->size = obj.size;
	this->top = obj.top;
	stackPtr = new T[size];
	for (size_t i = 0; i < top; i++)
	{
		this->stackPtr[i] = obj.stackPtr[i];
	}
}

template<typename T>
Stack<T>& Stack<T>::operator=(const Stack<T>& obj)
{
	if (this == &obj)
		return *this;
	delete[] stackPtr;
	this->size = obj.size;
	this->top = obj.top;
	stackPtr = new T[size];
	for (size_t i = 0; i < top; i++)
	{
		this->stackPtr[i] = obj.stackPtr[i];
	}
	return *this;

}

template<typename T>
void Stack<T>::push(const T & val)
{
	if (top < size)
		stackPtr[top++] = val;
	else
		std::cout << "Stack overflow";
}

template<typename T>
void Stack<T>::pop()
{
	if (top > 0)
	{
		stackPtr[top--];
	}
	else
	{
		std::cout << "Stack is empty";
	}
}

template<typename T>
bool Stack<T>::empty() const
{
	return this->size == 0;
}

template<typename T>
Stack<T>::~Stack()
{
	delete[] StackPtr;
	size = 0;
	top = 0;
}



