#include "PriorityQueue.h"
#include <iostream>

void testPriorityQueue()
{

	PriorityQueue<char> test1;
	test1.enqueue(3, 'A');
	test1.enqueue(1, 'B');
	test1.enqueue(1, 'C');
	test1.enqueue(2, 'D');
	test1.enqueue(4, 'E');
	test1.enqueue(4, 'F');
	test1.print();

	test1.dequeue();
	test1.print();
	test1.dequeue();
	test1.dequeue();
	test1.dequeue();
	test1.print();

	PriorityQueue<char> test2;
	test2 = test1;
	test2.print();

	PriorityQueue<int> dummy;
	dummy.enqueue(1, 1);

	PriorityQueue<int> test3(dummy);
	test3.print();

	std::cout << "\n\n";
}

int main()
{
	testPriorityQueue();

	system("pause");
	return 0;
}