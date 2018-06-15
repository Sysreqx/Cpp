#include "PrintQueue.h"

PrintQueue::PrintQueue()
{
	std::vector<std::pair<std::string, int> > Queue;
	Size = 0;
}

PrintQueue::~PrintQueue()
{
	Queue.clear();
}

int PrintQueue::getSize()
{
	return Queue.size();
}

void PrintQueue::adToPrintQueue(std::string Name, int x)
{
	Queue.push_back(std::make_pair(Name, x));
}

void PrintQueue::clearPrintQueue()
{
	Queue.clear();
}

void PrintQueue::PrintQueueMinus()
{
	reverse();
	Queue.pop_back();
	reverse();
}

void PrintQueue::PrintQueueErase(const int a)
{
	//Queue.erase(a);
}

void PrintQueue::sortPrintQueue()
{
	std::sort(Queue.begin(), Queue.end(), [](auto &left, auto &right) {
		return left.second > right.second;
	});
}

void PrintQueue::reverse()
{
	for (int i = 0; i < Queue.size() / 2; i++)
		std::swap(Queue[i], Queue[Queue.size() - 1 - i]);
}

std::pair<std::string, int>& PrintQueue::operator[](int n)
{
	if (n < Queue.size())
		return Queue[n];
}

void PrintQueue::showQueue()
{
	sortPrintQueue();
	for (int i = 0; i < Queue.size(); i++)
		std::cout << Queue[i].first << ", " << Queue[i].second << std::endl;
}