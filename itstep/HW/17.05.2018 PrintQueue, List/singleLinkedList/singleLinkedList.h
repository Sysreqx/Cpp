#pragma once
#include <iostream>
#include <vector>
using namespace std;

template<class T>
class Node {
public:
	T Data;
	Node<T>* next;
};

template<class T>
class singleLinkedList {
	int size;
	Node<T> *head;
	Node<T> *tail;
public:
	Node<T>* searchByValue(const T& Data)
	{
		Node<T> *tmp = head;
		for (int i = 0; i < size; i++)
		{
			if (tmp->Data == Data)
				return tmp;
			tmp = tmp->next;
		}
		return nullptr;
	}
	void replaceByValue(const T& a, const T& b)
	{
		Node<T> *tmp = head;
		for (int i = 0; i < size; i++)
		{
			if (tmp->Data == a)
				tmp->Data = b;
			tmp = tmp->next;
		}
	}
	void deleteByValue(const T& Data)
	{
		Node<T> *tmp = head;
		for (int i = 0; i < size; i++)
		{
			if (tmp->Data == Data)
				erase(i);
			tmp = tmp->next;
		}
	}
	void printReverse() {
		std::vector<T> v;
		Node<T> *tmp = head;
		for (int i = 0; i < size; i++)
		{
			v.push_back(tmp->Data);
			tmp = tmp->next;
		}
		for (int i = 0; i < v.size() / 2; i++)
		{
			swap(v[i], v[v.size() - i - 1]);
		}
		for (auto i : v)
			std::cout << i << " ";
	}
	int getSize()const
	{
		return size;
	}
	void push_back(const T& Data) {
		Node<T> *newElem = new Node<T>;

		newElem->Data = Data;
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
	void push_front(const T & Data)
	{
		Node <T> * newElem = new Node <T>;
		newElem->Data = Data;
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
		Node<T> * tmp = head;
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
		Node<T> *tmp = head;
		while (tmp->next != tail)
			tmp = tmp->next;
		delete tail;
		tail = tmp;
		tail->next = nullptr;
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
		Node<T> *newElem = new Node<T>;
		Node<T> *tmp = head;
		for (size_t i = 0; i < pos - 1; i++)
		{
			tmp = tmp->next;
		}
		newElem->Data = a;
		newElem->next = tmp->next;
		tmp->next = newElem;
		size++;
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
		Node<T> *tmp = head;
		for (int i = 0; i < pos - 1; i++)
		{
			tmp = tmp->next;
		}
		Node<T>* r = tmp->next;
		tmp->next = tmp->next->next;
		delete r;
		size--;

	}
	void clear()
	{
		if (size != 0)
		{
			~singleLinkedList();
		}
	}
	bool empty()const
	{
		return size == 0;
	}
	void print() {
		Node<T>*tmp = head;
		while (tmp != nullptr) {
			cout << tmp->Data << " ";
			tmp = tmp->next;
		}
	}
	singleLinkedList() {
		size = 0;
		head = tail = nullptr;
	}
	~singleLinkedList()
	{
		while (tail != nullptr)
		{
			pop_front();
		}
	}
	singleLinkedList(const singleLinkedList<T>&Data) {
		size = 0;
		head = tail = nullptr;
		Node<T>*tmp = Data.head;
		while (tmp != nullptr)
		{
			push_back(tmp->Data);
			tmp = tmp->next;
		}
	}
	singleLinkedList<T>& operator=(const singleLinkedList<T>&Data) {
		if (this == &Data)
			return *this;
		this->~singleLinkedList();
		Node<T>*tmp = Data.head;
		while (tmp != nullptr)
		{
			push_back(tmp->Data);
			tmp = tmp->next;
		}

		return *this;
	}
};