#include "Vector_.h"



void Vector_::push_back(int num)
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
		for (int i = 0; i < size ; i++)
		{
			arr1[i] = arr[i];
		}
		arr1[size] = num;

	}
	++size;
	delete[] arr;
	this->arr = arr1;
}

void Vector_::pop_back()
{
	//if don't have elem out of programm
	if (size == 0)	return;
	
	if (size == 1)
	{
		delete[] arr;
		arr = nullptr;
		size = 0;
		return;
	}

	int *arr1 = new int[size - 1];
	for (int i = 0; i < size-1; i++)
	{
		arr1[i] = arr[i];
	}
	delete[] this->arr;
	this->arr = arr1;
	--size;
}

void Vector_::printInfo()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << this->arr[i] << ' ';
	}
	std::cout << std::endl;
}

int Vector_::getSize(int size)
{
	return size;
}

Vector_::Vector_(const Vector_ & obj)
{
	this->size = obj.size;
	if (this->size == 0)
	{
		this->arr = nullptr;
	}
	else
	{
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}
}

Vector_::Vector_()
{
	this->size = 0;
	this->arr = nullptr;
}

Vector_::Vector_(int size, int num)
{

	this->arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		this->arr[i] = num;
	}

}


Vector_::~Vector_()
{
	delete[] arr;
}
