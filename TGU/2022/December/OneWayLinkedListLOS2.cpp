#include <iostream>
#include <fstream>
#include <string>
using namespace std;


template <typename T>
struct TItem {
	T data;
	TItem* next;
};


template<class T>
class singleLinkedList {
public:
	TItem<T>* List;
	TItem<T>* minus;
	TItem<T>* plus;

public:
	//1. Конструктор – создание пустого списка.
	singleLinkedList() {
		List = NULL;
		plus = NULL;
		minus = NULL;
	}


	//2. Проверка – пуст ли список.
	bool isEmpty() {
		return List == NULL;
	}

	//3. Установить указатель списка в его начало.
	void setThePointerToTheBeginning() {
		plus = List;
		minus = NULL;
	}

	//4. Проверка – находится ли указатель в конце списка.
	bool isThePointerInTheEnd() {
		return plus == NULL;
	}

	//5. Получить значение элемента за указателем.
	T getAnElementAfterThePointer() {
		if (!isThePointerInTheEnd())
		{
			return plus->data;
		}
		return NULL;
	}

	//6. Передвинуть указатель на один элемент вперед.
	void MoveThePointerOneElementForward() {
		minus = plus;
		plus = plus->next;
	}

	//7. Добавить элемент за указателем.
	void AddAnItemBehindThePointer(T& a) {
		TItem<T>* q;
		q = new TItem<T>;
		q->data = a;
		q->next = plus;
		plus = q;

		if (minus == NULL) List = q; // Этот оператор требуется, если в список вставляется первый элемент
		else minus->next = q;
	}

	//8. Удалить элемент за указателем.
	void DeleteTheItemBehindThePointer() {
		TItem<T>* q;
		q = plus;    // Запоминается адрес удаляемого элемента
		plus = plus->next;

		if (minus == NULL) List = plus;  // Этот оператор нужен, если удаляется первый элемент списка
		else minus->next = plus;

		delete q;
	}

	//9. Деструктор – удаление всех элементов из списка и его ликвидация
	~singleLinkedList()
	{
		if (isEmpty())
		{
			return;
		}

		setThePointerToTheBeginning();
		while (!isThePointerInTheEnd()) // Пока не достигнут конец списка
		{
			DeleteTheItemBehindThePointer();
		}
	}

	// Удалить отрицательные ноды
	void deleteNegativeNodes() {
		setThePointerToTheBeginning();
		while (!isThePointerInTheEnd())
		{
			if (getAnElementAfterThePointer() < 0)
			{
				//cout << getAnElementAfterThePointer() << " ";
				DeleteTheItemBehindThePointer();
			}
			else {
				MoveThePointerOneElementForward();
			}
		}
		//cout << endl;
	}

	// распечаттаь
	void print() {
		setThePointerToTheBeginning();
		if (isEmpty()) {
			//cout << "pust";
			return;
		}
		//while (!isThePointerInTheEnd())
		//{
		//	cout << getAnElementAfterThePointer() << " ";
		//	MoveThePointerOneElementForward();
		//}
		//cout << endl << endl;


		ofstream myfile("linked_list_positive_num.txt");
		if (myfile.is_open())
		{
			while (!isThePointerInTheEnd()) {
				myfile << getAnElementAfterThePointer() << "\n";
				MoveThePointerOneElementForward();
			}
			myfile.close();
		}
		else cout << "Невозможно открыть файл";
	}
};


int main()
{
	setlocale(LC_ALL, "Russian");

	singleLinkedList<int> list;

	// Считывание с файла
	string line;
	ifstream myfile("linked_list_file.txt");
	int a;
	if (myfile.is_open())
	{
		while (myfile >> a)
		{
			list.AddAnItemBehindThePointer(a);
			list.MoveThePointerOneElementForward();
		}
		myfile.close();
	}

	else cout << "Невозможно открыть файл";

	//list.print();
	list.deleteNegativeNodes();
	list.print();

	system("pause");

	return 0;
}