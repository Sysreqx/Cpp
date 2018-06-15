#pragma once
#include <iostream>
#include <list>
#include <iterator> // заголовок итераторов
using namespace std;

class Queue
{
private:
	list<int> queueu_by_list;
	int queueu_by_list_size_variable;
public:
	int& queueu_by_list_back();
	const int& queueu_by_list_back() const;
	int& queueu_by_list_front();
	const int& queueu_by_list_front() const;
	void queueu_by_list_pop();
	void queueu_by_list_push(const int& val);
	bool queueu_by_list_empty() const;
	int queueu_by_list_size() const;
	void print_queueu_by_list();
};

