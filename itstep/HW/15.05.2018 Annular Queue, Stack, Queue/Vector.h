#pragma once
#include <iostream>
using namespace std;


template<class T>
class Vector
{
	int size;
	T *arr;
public:
	Vector(const Vector<T>&obj)
	{
		this->size = obj.size;
		if (size == 0)
		{
			this->arr = nullptr;
		}
		else
		{
			this->arr = new T[size];
			for (size_t i = 0; i < size; i++)
			{
				this->arr[i] = obj.arr[i];
			}
		}
	}
	Vector<T>& operator=(const Vector<T>&obj)
	{
		if (&obj == this)
		{
			return *this;
		}
		this->~Vector();

		this->size = obj.size;
		if (size == 0)
		{
			this->arr = nullptr;
		}
		else
		{
			this->arr = new T[size];
			for (size_t i = 0; i < size; i++)
			{
				this->arr[i] = obj.arr[i];
			}
		}
		return *this;
	}
	Vector()
	{
		size = 0;
		arr = nullptr;
	}

	~Vector()
	{
		if (arr != nullptr)
		{
			delete[]arr;
			arr = nullptr;
		}
		size = 0;
	}
	void clear()
	{
		this->~Vector();
	}
	bool empty()const
	{
		return this->size;
	}
	void push_back(const T & b) {
		if (size == 0)
		{
			arr = new T[1];
			arr[0] = b;
			size++;
		}
		else
		{
			T *new_arr = new T[size + 1];
			for (int i = 0; i < size; i++)
			{
				new_arr[i] = arr[i];
			}
			new_arr[size] = b;
			++size;
			delete[] arr;
			arr = new_arr;
		}
	}
	void pop_back() {
		if (size > 0) {
			if (size == 1) {
				this->~Vector();
			}
			else {
				T *new_arr = new T[size - 1];
				for (size_t i = 0; i < size - 1; i++)
				{
					new_arr[i] = arr[i];
				}
				--size;
				delete[] arr;
				arr = new_arr;
			}
		}
	}
	void reverse()
	{
		for (size_t i = 0; i < size / 2; i++)
		{
			swap(arr[i], arr[size - 1 - i]);
		}
	}
	void erase(int pos)
	{
		if (pos >= 0 && pos < size)
		{
			for (size_t i = pos; i < size - 1; i++)
			{
				swap(arr[i], arr[i + 1]);
			}
			this->pop_back();
		}
	}
	int getSize() const
	{
		return size;
	}
	const T *data()const
	{
		return arr;
	}
	T *data()
	{
		return arr;
	}
	//T at(int pos);
	Vector<T> & operator += (const Vector<T> & obj)
	{
		int s = obj.size;
		for (size_t i = 0; i < s; i++)
		{
			this->push_back(obj.arr[i]);

		}
		return *this;
	}
	T& operator[](int pos)
	{
		return arr[pos];
	}
	template<class TT>
	friend ostream& operator<<(ostream& out, const Vector<TT> &a);
	template<class TT>
	friend istream& operator >> (istream& in, Vector<TT> &a);
};
template<class TT>
ostream& operator<<(ostream& out, const Vector<TT> &a) {
	for (size_t i = 0; i < a.size; i++)
	{
		out << a.arr[i] << ' ';
	}
	return out;

}
template<class TT>
istream& operator >> (istream& in, Vector<TT> &a) {
	a.clear();
	cout << "Vvedite razmer massiva\n";
	int size = 0;
	while (size <= 0)
		in >> size;
	T obj;
	for (size_t i = 0; i < size; i++)
	{
		in >> obj;
		a.push_back(obj);
	}
	return in;
}