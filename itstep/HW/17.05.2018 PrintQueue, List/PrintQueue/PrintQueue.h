#pragma once
#include <algorithm>  
#include <utility> //std::make_pair, std::pair
#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
/*
Создать программу, моделирующую работу очереди печати
принтера.Следует реализовать клиентов со своими собственными
приоритетами, посылающих запросы на принтер.Каждый новый
клиент попадает в очередь в зависимости от своего приоритета.
Программа должна показать статистику печати(пользователь,
	время).*/


//класс очередь печати
class PrintQueue
{
private:
	std::vector<std::pair<std::string, int> > Queue;
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
	//Добаввить в очередь печати
	void adToPrintQueue(std::string Name, int x);
	//Очистить очередь печати
	void clearPrintQueue();
	//Удалять по одному, типа печатает
	void PrintQueueMinus();
	//Удалить из очереди по индексу
	void PrintQueueErase(int a);
	//Отсортировать очередь
	void sortPrintQueue();
	//reverse
	void reverse();
	std::pair<std::string, int> & operator[](int n);/*
		std::ostream &operator<<(std::ostream &os, const PrintQueue& v);*/
	void showQueue();
};

