#pragma once
#include <utility> //std::make_pair, std::pair
#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
/*
������� ���������, ������������ ������ ������� ������
��������.������� ����������� �������� �� ������ ������������
������������, ���������� ������� �� �������.������ �����
������ �������� � ������� � ����������� �� ������ ����������.
��������� ������ �������� ���������� ������(������������,
	�����).*/


//����� ������� ������
class PrintQueue
{
private:
	std::vector<std::pair<std::string, int>> Queue;
	int Size;
	/*
	class Client
	{
	public:
		std::pair <std::string, int> Client_with_priority;
		Client(std::string Name, int a = 0)
		{
			Client_with_priority = std::make_pair(Name, a);
		}
	};*/
public:
	PrintQueue();
	~PrintQueue();
	int getSize();
	void adToPrintQueue(std::string Name, int x);
	std::pair<std::string, int> & operator[](int n);/*
		std::ostream &operator<<(std::ostream &os, const PrintQueue& v);*/
	void showQueue();
};

