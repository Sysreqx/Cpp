#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Node {
public:
	int data;
	Node* next;

	// Конструктор по умолчанию
	Node()
	{
		data = 0;
		next = NULL;
	}

	// Параметризованный конструктор
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};



class Linkedlist {
	Node* head;

public:
	// 1. Конструктор по умолчанию
	Linkedlist() { head = NULL; }

	// 9. Деструктор -удаление всех элементов и его ликвидация
	~Linkedlist();

	// Вставка ноды в конец связанного списка
	void insertNode(int);

	// Вывод связанного списка на экран
	void printList();

	// Вывод связанного списка в файл
	void printListToFile();

	// Удаление ноды по переданной позиции
	void deleteNode(int);

	// Удалить отрицательные ноды
	void deleteNegativeNodes();

};

// 9. Деструктор - удаление всех элементов из списка и его ликвидация
Linkedlist::~Linkedlist() {
	Node* current = head;
	while (current != NULL)
	{
		Node* temp = current;
		current = current->next;
		delete temp;
	}
}

// Удаление ноды по переданной позиции
void Linkedlist::deleteNode(int nodeOffset)
{
	Node* temp1 = head, * temp2 = NULL;
	int ListLen = 0;

	// Проверка пуст ли список
	if (head == NULL) {
		cout << "Список пуст." << endl;
		return;
	}

	// Длина связанного списка
	while (temp1 != NULL) {
		// 6. Передвинуть указатель на один элемент вперед
		temp1 = temp1->next;
		ListLen++;
	}

	// 5. Получение значание эелемента за указателем
	//dataNext = temp1->next->data;

	// Проверка длины списка и позиции
	if (ListLen < nodeOffset) {
		cout << "Индекс вне диапазона" // Index out of range
			<< endl;
		return;
	}

	// Объявление временной переменной
	temp1 = head;

	// удаление head ноды
	if (nodeOffset == 1) {

		// Обновление head ноды
		head = head->next;
		delete temp1;
		return;
	}

	// Пройтись по списку, найти удаляемую ноду
	while (nodeOffset-- > 1) {

		// Обновить temp2
		temp2 = temp1;

		// Обновить temp1
		temp1 = temp1->next;
	}

	// 8. Удалить элемент за указателем;
	// Изменить next указатель предыдущей ноды
	temp2->next = temp1->next;

	// Удалить ноду
	delete temp1;
}

// Удалить отрицательные ноды
void Linkedlist::deleteNegativeNodes() {
	if (head == NULL) {
		cout << "Список пуст." << endl;
		return;
	}

	Node* p = head;
	Node* previous = nullptr;
	Node* next;

	while (p)
	{
		next = p->next;

		if (p->data < 0)
		{
			if (previous) previous->next = next;
			if (head == p) head = next;
			delete p; // Удаление выделенной памяти
		}
		else
		{
			previous = p;
		}

		p = next;
	}
}

// Вставка новой ноды

void Linkedlist::insertNode(int data)
{
	// Создание новой ноды
	Node* newNode = new Node(data);

	// Назначение head
	if (head == NULL) {
		head = newNode;
		return;
	}

	// 3. Установить указатель списка в его начало
	// Пройтись до конца
	Node* temp = head;
	while (temp->next != NULL) {

		// 6. Передвинуть ууказатель на 1 элемент вперед
		// Обновить temp
		temp = temp->next;
	}

	// Вставить в конец
	// 7. Добавить элемент за указателем
	temp->next = newNode;
}

// Вывести ноды списка
void Linkedlist::printList()
{
	Node* temp = head;

	// Проверить есть ли ноды в списке
	if (head == NULL) {
		cout << "Односвязанный список пуст" << endl;
		return;
	}

	// Пройтись по списку
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}

// Вывести ноды списка в файл
void Linkedlist::printListToFile()
{
	Node* temp = head;

	// Пройтись по списку

	ofstream myfile("linked_list_positive_num.txt");
	if (myfile.is_open())
	{
		// 4. Проверка находится ли укзатель в конце списка
		while (temp != NULL) {
			myfile << temp->data << "\n";
			temp = temp->next;
		}
		myfile.close();
	}
	else cout << "Невозможно открыть файл";
}


int main()
{
	setlocale(LC_ALL, "Russian");

	Linkedlist list;

	// Считывание с файла
	string line;
	ifstream myfile("linked_list_file.txt");
	int a;
	if (myfile.is_open())
	{
		while (myfile >> a)
		{
			//if (stoi(line) > 0)
			//{
			//	list.insertNode(stoi(line));
			//}
			list.insertNode(a);
		}
		myfile.close();
	}

	else cout << "Невозможно открыть файл";

	//list.deleteNegativeNodes();
	//list.printListToFile();

	// Для вывода на экран
	cout << "Элементы односвязанного списка: \n";
	list.printList();
	cout << endl;
	cout << "Элементы односвязанного списка после удаления отрицательных нод: \n";
	// !!! Функция удаляет отрицательные ноды !!!
	list.deleteNegativeNodes();
	list.printList();

	// Для записи в файл
	list.printListToFile();

	cout << endl;

	return 0;
}
