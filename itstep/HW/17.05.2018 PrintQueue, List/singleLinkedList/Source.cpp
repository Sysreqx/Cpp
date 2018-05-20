#include "singleLinkedList.h"

int main()
{
	singleLinkedList<int> l;
	for (int i = 0; i < 7; i++)
		l.push_back(i);
	for (int i = 0; i < l.getSize(); i++)
	{
		cout << l[i] << endl;
	}
	system("pause");
	return 0;
}