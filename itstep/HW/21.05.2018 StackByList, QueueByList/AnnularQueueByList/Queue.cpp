#include "Queue.h"

int & Queue::queueu_by_list_back()
{
	return queueu_by_list.back();
}

const int & Queue::queueu_by_list_back() const
{
	return queueu_by_list.back();
}

int & Queue::queueu_by_list_front()
{
	return queueu_by_list.front();
}

const int & Queue::queueu_by_list_front() const
{
	return queueu_by_list.front();
}

void Queue::queueu_by_list_pop()
{
	queueu_by_list.pop_back();
	--queueu_by_list_size_variable;
}


void Queue::queueu_by_list_push(const int & val)
{
	queueu_by_list.push_back(val);
	++queueu_by_list_size_variable;
}

bool Queue::queueu_by_list_empty() const
{
	return !queueu_by_list_size_variable;
}

int Queue::queueu_by_list_size() const
{
	return queueu_by_list_size_variable;
}
