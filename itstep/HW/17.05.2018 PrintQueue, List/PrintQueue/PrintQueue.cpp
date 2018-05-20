#include "PrintQueue.h"

PrintQueue::PrintQueue()
{
	Queue;
	Size = 0;
}

PrintQueue::~PrintQueue()
{
}

int PrintQueue::getSize()
{
	return Queue.size();
}

void PrintQueue::adToPrintQueue(std::string Name, int x)
{
		Queue.push_back(std::make_pair(Name, x));
}

std::pair<std::string, int>& PrintQueue::operator[](int n)
{
	if (n < Queue.size())
		return Queue[n];
}

void PrintQueue::showQueue()
{
	std::sort(Queue.begin(), Queue.end(), [](auto &left, auto &right) {
		return left.second < right.second;
	});
	for (int i = 0; i < Queue.size(); i++)
		std::cout << Queue[i].first << ", " << Queue[i].second << std::endl;
}