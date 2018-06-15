#pragma once
#include "Queue.h"
#include <iterator> // заголовок итераторов
class AnnularQueue
{
private:
	list<int> annular_queueu_by_list;
	int annular_queueu_by_list_size_variable;
public:
	int& annular_queueu_by_list_back();
	const int& annular_queueu_by_list_back() const;
	int& annular_queueu_by_list_front();
	const int& annular_queueu_by_list_front() const;
	void annular_queueu_by_list_pop();
	void annular_queueu_by_list_push(const int& val);
	bool annular_queueu_by_list_empty() const;
	int annular_queueu_by_list_size() const;
	void annular_queueu_by_list_step();
	void print_annular_queueu();
	
};

