#include "VectorMy.h"
#include <vector>
VectorMy::VectorMy()
{
	this->size = 0;
	this->arr = nullptr;
}

VectorMy::VectorMy(int size, int num)
{
	this->size = size;
	this->arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		this->arr[i] = num;
	}
}

VectorMy::~VectorMy()
{
	delete[] arr;
}

void VectorMy::push_back(int num)
{
	int *arr1;
	if (size == 0)
	{
		arr1 = new int[1];
		arr1[0] = num;
	}
	else
	{
		arr1 = new int[size + 1];
		for (int i = 0; i < size; i++)
		{
			arr1[i] = arr[i];
		}
		arr1[size] = num;
	}
	++size;
	delete[] arr;
	this->arr = arr1;
}

void VectorMy::pop_back()
{
	//если нету элементов выходим из метода
	if (size == 0) return;

	if (size == 1)
	{
		delete[] arr;
		arr = nullptr;
		size = 0;
		return;
	}
	int *arr1 = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		arr1[i] = arr[i];
	}
	delete[] this->arr;
	this->arr = arr1;
	size--;
}

void VectorMy::print()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << this->arr[i] << " ";
	}
	cout << endl;
}

void VectorMy::clear()
{
	delete[] arr;
	arr = nullptr;
	size = 0;
}

bool VectorMy::isEmpty()
{
	return size == 0;
}

int VectorMy::getSize() const
{
	return this->size;
}

void VectorMy::insert(int pos, int value)
{
	int *new_arr;
	if (size == 0 || pos >= size + 1) return;
	new_arr = new int[size + 1];
	for (size_t i = 0; i < pos; i++)
	{
		new_arr[i] = this->arr[i];
	}
	new_arr[pos] = value;
	for (size_t i = pos + 1; i < size + 1; i++)
	{
		new_arr[i] = this->arr[i - 1];
	}
	++size;
	delete[] this->arr;
	this->arr = new_arr;
}

void VectorMy::erase(int pos)
{
	if (size == 0) {
		return;
	}
	if (size == 1 && pos == 0) {
		clear();
	}
	for (size_t i = pos; i < size - 1; i++)
	{
		swap(arr[i], arr[i + 1]);
	}
	size--;
}

void VectorMy::reverse()
{
	for (size_t i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - i - 1]);
	}
}

VectorMy & VectorMy::operator+=(const VectorMy & a)
{
	for (size_t i = 0; i < a.size; i++)
	{
		this->push_back(a[i]);


	}
	return *this;
}

VectorMy & VectorMy::operator=(const VectorMy & a)
{
	if (&a == this)
		return *this;
	this->clear();
	if (a.size == 0)
		return *this;
	this->size = a.size;
	this->arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		this->arr[i] = a[i];
	}
	return *this;
}

VectorMy::VectorMy(const VectorMy & ad)
{
	this->size = ad.size;
	if (this->size == 0) {
		this->arr = nullptr;


	}
	else
	{
		this->arr = new int[this->size];
		for (size_t i = 0; i < this->size; i++)
		{
			this->arr[i] = ad.arr[i];

		}
	}
}
ostream& operator<<(ostream&os, const VectorMy&pt)
{
	for (int i = 0; i < pt.getSize(); i++)
	{
		os << pt[i] << " ";
	}
	os << endl;
	return os;
}

istream& operator >> (istream&is, VectorMy&pt)
{

	pt.clear();
	cout << "Enter size\n";
	int ssize;
	is >> ssize;
	if (ssize > 0) {
		cout << "\nEnter array\n";
		pt.arr = new int[ssize];
		int tmp;
		for (int i = 0; i < ssize; ++i)
		{
			cin >> tmp;
			pt[i] = tmp;
			pt.arr[i] = tmp;
		}
	}
	return is;
}

VectorMy & operator+(const VectorMy & a, const VectorMy & b)
{
	VectorMy s = a;
	s += b;

	return s;
}

bool operator==(const VectorMy & a, const VectorMy & b)
{
	if (a.size != b.size)
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < a.size; i++)
		{
			if (a.arr[i] != b.arr[i])
			{
				return 0;
			}
		}
	}
	return 1;
}

bool operator!=(const VectorMy & a, const VectorMy & b)
{
	return !(a == b);
}

bool operator<(const VectorMy & a, const VectorMy & b)
{
	if (a.size < b.size)
		return 1;
	return 0;
}

bool operator>(const VectorMy & a, const VectorMy & b)
{
	return !(a < b);
}

bool operator<=(const VectorMy & a, const VectorMy & b)
{
	if (a.size <= b.size)
		return 1;
	return 0;
}

bool operator>=(const VectorMy & a, const VectorMy & b)
{
	return !(a <= b);
}
