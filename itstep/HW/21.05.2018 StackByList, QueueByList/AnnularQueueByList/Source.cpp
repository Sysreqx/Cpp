#include "AnnularQueue.h"

int main()
{
	setlocale(0, "");
	AnnularQueue q;
	for (int i = 0; i < 10; i++)
	{
		q.annular_queueu_by_list_push(i);
	}

	q.print_annular_queueu();
	q.annular_queueu_by_list_pop();
	q.annular_queueu_by_list_pop();
	q.annular_queueu_by_list_step();
	q.annular_queueu_by_list_step();
	q.annular_queueu_by_list_step();
	q.annular_queueu_by_list_step();
	q.print_annular_queueu();
	cout << q.annular_queueu_by_list_size() << endl;

	system("pause");
	return 0;
}