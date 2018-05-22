#include "Queue.h"

int main()
{
	setlocale(0, "");
	Queue q;
	for (int i = 0; i < 10; i++)
	{
		q.queueu_by_list_push(i);
	}
	cout << q.queueu_by_list_back() << endl;
	cout << q.queueu_by_list_front() << endl;
	q.queueu_by_list_pop();
	q.queueu_by_list_pop();
	cout << q.queueu_by_list_size() << endl;
	q.print_queueu_by_list();
	system("pause");
	return 0;
}