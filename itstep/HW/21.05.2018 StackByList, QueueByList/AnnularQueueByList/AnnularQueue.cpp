#include "AnnularQueue.h"

int & AnnularQueue::annular_queueu_by_list_back()
{
	return annular_queueu_by_list.back();
}

const int & AnnularQueue::annular_queueu_by_list_back() const
{
	return annular_queueu_by_list.back();
}

int & AnnularQueue::annular_queueu_by_list_front()
{
	return annular_queueu_by_list.front();
}

const int & AnnularQueue::annular_queueu_by_list_front() const
{
	return annular_queueu_by_list.front();
}

void AnnularQueue::annular_queueu_by_list_pop()
{
	annular_queueu_by_list.pop_back();
	--annular_queueu_by_list_size_variable;
}

void AnnularQueue::annular_queueu_by_list_push(const int & val)
{
	annular_queueu_by_list.push_back(val);
	++annular_queueu_by_list_size_variable;
}

bool AnnularQueue::annular_queueu_by_list_empty() const
{
	return !annular_queueu_by_list_size_variable;
}

int AnnularQueue::annular_queueu_by_list_size() const
{
	return annular_queueu_by_list_size_variable;
}

void AnnularQueue::annular_queueu_by_list_step()
{/*
	int a = *boost::next(annular_queueu_by_list.begin(), 3)
	std::advance(it, 3);
	int a = *it;*/
	annular_queueu_by_list_push(annular_queueu_by_list.front());
	annular_queueu_by_list.pop_front();
	--annular_queueu_by_list_size_variable;
}

void AnnularQueue::print_annular_queueu()
{
	cout << "������: ";
	copy(annular_queueu_by_list.begin(), annular_queueu_by_list.end(), ostream_iterator<int>(cout, " ")); // ����� �� ����� ��������� ������
	cout << "\n������ ������� ������: " << annular_queueu_by_list.front();
	cout << "\n��������� ������� ������: " << annular_queueu_by_list.back();
	cout << endl;
}