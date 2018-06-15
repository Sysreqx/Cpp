#include <iostream>
#include <string>
using namespace std;
/*
2. Добавить в класс Односвязный список
? МЕТОД поиска заданного элемента, которая возвращает
указатель на найденный элемент в случае успеха или nullptr в
противном случае;
? метод замены значения;
? метод удаления всех элементов списка, равных заданному;
? метод показа списка задом на перед.*/
template <class T>
class List
{
public:
	List();
	~List();
	T &operator[](const T data);
	void pop_front();
	void pop_back();
	void clear();
	void push_front(const T& val);
	void push_back(const T& val);
	void insert(int pos, const T& val);
	void erase(int pos);
	int getSize() { return Size; }
	//поиск по элементу
	Node<T> * searchElement(const T& val);
private:
	template <class T>
	class Node
	{
	public:
		Node<T> * pNext;
		T data;
		Node<T>(T data = T(), Node *pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size;
	Node<T> * head;
};

int main()
{
	List<int> l;
	l.push_back(4);
	l.push_back(8);
	l.push_back(2);
	l.push_front(5);
	l.push_front(7);
	for (int i = 0; i < l.getSize(); i++)
		std::cout << l[i] << std::endl;
	std::cout << std::endl;
	l.pop_back();
	l.pop_front();
	l.insert(2, 22);
	l.erase(1);
	for (int i = 0; i < l.getSize(); i++)
		std::cout << l[i] << std::endl;
	l.insert(3, 55);
	for (int i = 0; i < l.getSize(); i++)
		std::cout << l[i] << std::endl;
	std::cout << l.getSize();
	system("pause");
	return 0;
}

template<class T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<class T>
List<T>::~List()
{
	clear();
}

template<class T>
T & List<T>::operator[](const T index)
{
	Node<T> * current = head;
	int cnt = 0;
	while (current != nullptr)
	{
		if (cnt == index)
			return current->data;
		current = current->pNext;
		++cnt;
	}
}

template<class T>
void List<T>::pop_front()
{
	Node<T> *tmp = head;
	head = head->pNext;
	delete tmp;
	--Size;
}

template<class T>
void List<T>::pop_back()
{
	erase(Size - 1);
}

template<class T>
void List<T>::push_back(const T & val)
{
	if (head == nullptr)
		head = new Node<T>(val);
	else
	{
		Node<T> *current = head;
		while (current->pNext != nullptr)
			current = current->pNext;
		current->pNext = new Node<T>(val);
	}
	++Size;
}

template<class T>
void List<T>::push_front(const T & val)
{
	head = new Node<T>(val, head);
	++Size;
}

template<class T>
void List<T>::insert(int pos, const T & val)
{
	if (pos == 0)
		push_front(val);
	else if (pos <= Size)
	{
		Node<T> *prev = head;
		for (int i = 0; i < pos - 1; i++)
			prev = prev->pNext;
		/*
		Node<T> *newNode = new Node<T>(val, prev->pNext);
		prev->pNext = newNode;*/
		prev->pNext = new Node<T>(val, prev->pNext);
		++Size;
	}
}

template<class T>
void List<T>::clear()
{
	while (Size)
		pop_front();
}

template<class T>
void List<T>::erase(int pos)
{
	if (pos == 0)
		pop_front();
	else if (pos <= Size)
	{
		Node<T> *prev = head;
		for (int i = 0; i < pos - 1; i++)
			prev = prev->pNext;
		Node<T> *tmp = prev->pNext;
		prev->pNext = tmp->pNext;
		delete tmp;
		--Size;
	}
}

template<class T>
Node<T>* List<T>::searchElement(const T & val)
{
	return nullptr;
}


//
//поиск по индексу
//if (Size == 0)
//return nullptr;
//else
//{
//	Node<T> *tmp = head;
//	for (int i = 0; i < Size; i++)
//	{
//		if (tmp->data == val)
//		{
//			return tmp;
//		}
//		tmp = tmp->pNext;
//	}
//}
//return nullptr;