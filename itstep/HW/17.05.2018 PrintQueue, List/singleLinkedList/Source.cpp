#include "singleLinkedList.h"
#include <ctime>
int main()
{
	srand(time(0));
	singleLinkedList<int> l;
	int tmp;
	for (int i = 0; i < 10; i++)
		l.push_back(tmp = rand() % 10);
	l.print(); 
	std::cout << std::endl;
	l.printReverse(); 
	std::cout << std::endl;

	system("pause");
	return 0;
}