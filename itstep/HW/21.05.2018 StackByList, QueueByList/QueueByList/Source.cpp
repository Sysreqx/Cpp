#include "AnnularQueue.h"

int main()
{
	AnnularQueue q;
	for (int i = 0; i < 10; i++)
	{
		q.annular_queueu_by_list_push(i);
	}
	cout << q.annular_queueu_by_list_back() << endl;
	cout << q.annular_queueu_by_list_front() << endl;
	q.annular_queueu_by_list_pop();
	q.annular_queueu_by_list_pop();
	cout << q.annular_queueu_by_list_size() << endl;
	system("pause");
	return 0;
}