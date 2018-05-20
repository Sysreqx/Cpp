//	2. Добавить в класс Односвязный список
//	? метод поиска заданного элемента, которая возвращает
//	указатель на найденный элемент в случае успеха или nullptr в
//	противном случае;
//? метод замены значения;
//? метод удаления всех элементов списка, равных заданному;
//? метод показа списка задом на перед.

#pragma once
#include <iostream>
using namespace std;

template<class T>
class singleLinkedList {
	int size;
	elem<T> *head;
	elem<T> *tail;

	template<class T>
	class elem {
	public:
		T data;
		elem<T>* next;
		elem<T>(T data = T(), elem * next = nullptr)
		{
			this->data = data;
			this->next = next;
		}
	};

public:
	//hw
	//поиск заданного элемента
	elem<T> * searchElement(const T& val)
	{
		if (size == 0)
			return nullptr;
		else
		{
			elem<T> *tmp = head;
			for (int i = 0; i < size; i++)
			{
				if (tmp->data == val)
				{
					return tmp;
				}
				tmp = tmp->pNext;
			}
		}
		return nullptr;
	}
	//end hw
	singleLinkedList() {
		size = 0;
		head = tail = nullptr;
	}
	void push_back(const T& data) {
		elem<T> *newElem = new elem<T>;

		newElem->data = data;
		newElem->next = nullptr;

		if (tail == nullptr) {
			head = tail = newElem;
		}
		else {
			tail->next = newElem;
			tail = newElem;
		}
		size++;
	}
	void push_front(const T & data)
	{
		elem <T> * newElem = new elem <T>;
		newElem->data = data;
		if (head == nullptr)
		{
			head = tail = newElem;
		}
		else
		{
			newElem->next = head;
			head = newElem;
		}
		size++;
	}
	void pop_front()
	{
		if (head == nullptr)
		{
			return;
		}
		if (size == 1)
		{
			delete head;
			head = tail = nullptr;
			size = 0;
			return;
		}
		elem<T> * tmp = head;
		head = head->next;
		delete tmp;
		size--;
	}
	void pop_back() {
		if (tail == nullptr)
			return;
		if (tail == head) {
			delete head;
			head = tail = nullptr;
			size = 0;
			return;
		}
		elem<T> *tmp = head;
		while (tmp->next != tail)
			tmp = tmp->next;
		delete tail;
		tail = tmp;
		tail->next = nullptr;
		size--;
	}
	void clear()
	{
		if (size != 0)
		{
			~singleLinkedList();
		}
	}
	int getSize()const
	{
		return size;
	}
	bool empty()const
	{
		return size == 0;
	}
	void erase(int pos)
	{
		if (pos >= size)
			return;
		if (pos == 0) {
			pop_front();
			return;
		}
		if (pos == size - 1) {
			pop_back();
			return;
		}
		elem<T> *tmp = head;
		for (int i = 0; i < pos - 1; i++)
		{
			tmp = tmp->next;
		}
		elem<T>* r = tmp->next;
		tmp->next = tmp->next->next;
		delete r;
		size--;

	}
	void insert(int pos, const T &a) {
		if (pos > size)
			return;
		if (pos == 0) {
			push_front(a);
			return;
		}
		if (pos == size) {
			push_back(a);
			return;
		}
		elem<T> *newElem = new elem<T>;
		elem<T> *tmp = head;
		for (size_t i = 0; i < pos - 1; i++)
		{
			tmp = tmp->next;
		}
		newElem->data = a;
		newElem->next = tmp->next;
		tmp->next = newElem;
		size++;
	}
	~singleLinkedList()
	{
		while (tail != nullptr)
		{
			pop_front();
		}
	}
	singleLinkedList(const singleLinkedList<T>&data) {
		size = 0;
		head = tail = nullptr;
		elem<T>*tmp = data.head;
		while (tmp != nullptr)
		{
			push_back(tmp->data);
			tmp = tmp->next;
		}
		//push_back()
	}
	singleLinkedList<T>& operator=(const singleLinkedList<T>&data) {
		if (this == &data)
			return *this;
		this->~singleLinkedList();
		elem<T>*tmp = data.head;
		while (tmp != nullptr)
		{
			push_back(tmp->data);
			tmp = tmp->next;
		}

		return *this;
	}
	T & singleLinkedList<T>::operator[](const T index) {
		elem<TT> * current = head;
		int cnt = 0;
		while (current != nullptr)
		{
			if (cnt == index)
				return current->data;
			current = current->next;
			++cnt;
		}
	}

	void print() {
		elem<T>*tmp = head;
		while (tmp != nullptr) {
			cout << tmp->data << " ";
			tmp = tmp->next;
		}
	}
};