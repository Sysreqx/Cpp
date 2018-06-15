#include "PrintQueue.h"

int main()
{
	PrintQueue a;
	a.adToPrintQueue("arse", 3);
	a.adToPrintQueue("plankton", 0);
	a.adToPrintQueue("boss", 1);
	a.adToPrintQueue("manager", 0);
	a.adToPrintQueue("coca-cola", 4);
	a.adToPrintQueue("rosinka", 0);
	a.showQueue();
	std::cout << std::endl;
	a.PrintQueueMinus();
	a.showQueue();
	std::cout << std::endl;
	a.PrintQueueMinus();
	a.showQueue();
	std::cout << std::endl;
	a.PrintQueueMinus();
	a.showQueue();
	std::cout << std::endl;
	a.PrintQueueMinus();
	a.showQueue();
	std::cout << std::endl;
	system("pause");
	return 0;
}